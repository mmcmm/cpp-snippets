#include<stdio.h>
#include<stdlib.h>

struct Nod {
    int info;
    struct Nod *stang, *drept;
};

struct Nod *newNod(int item) {
    struct Nod *temp = (struct Nod *) malloc(sizeof(struct Nod));
    temp->info = item;
    temp->stang = temp->drept = NULL;
    return temp;
}

void inorder(struct Nod *root) {
    if (root != NULL) {
        inorder(root->stang);
        printf("%d \n", root->info);
        inorder(root->drept);
    }
}

struct Nod *inserare(struct Nod *node, int key) {
    if (node == NULL) return newNod(key);

    if (key < node->info)
        node->stang = inserare(node->stang, key);
    else if (key > node->info)
        node->drept = inserare(node->drept, key);

    return node;
}

struct Nod *cauta(struct Nod *root, int key) {
    if (root == NULL || root->info == key)
        return root;

    if (root->info < key)
        return cauta(root->drept, key);

    return cauta(root->stang, key);
}

struct Nod *minNod(struct Nod *node) {
    struct Nod *current = node;
    while (current->stang != NULL)
        current = current->stang;

    return current;
}

struct Nod *sterge(struct Nod *root, int key) {
    if (root == NULL) return root;
    if (key < root->info)
        root->stang = sterge(root->stang, key);
    else if (key > root->info)
        root->drept = sterge(root->drept, key);
    else {
        if (root->stang == NULL) {
            struct Nod *temp = root->drept;
            free(root);
            return temp;
        } else if (root->drept == NULL) {
            struct Nod *temp = root->stang;
            free(root);
            return temp;
        }
        struct Nod *temp = minNod(root->drept);
        root->info = temp->info;
        root->drept = sterge(root->drept, temp->info);
    }
    return root;
}


int main() {
    /*
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80
    */
    struct Nod *radacina = NULL;
    radacina = inserare(radacina, 50);
    inserare(radacina, 30);
    inserare(radacina, 20);
    inserare(radacina, 40);
    inserare(radacina, 70);
    inserare(radacina, 60);
    inserare(radacina, 80);

    inorder(radacina);

    return 0;
}