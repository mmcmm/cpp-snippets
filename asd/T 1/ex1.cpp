
struct Nod
 {
     int info;
     Nod *link;
    }
    
 Nod *HEAD = NULL;
 
 
int count() {
    Nod *current = HEAD;
    int i = 0
    while (current != NULL) {
        current = current->link;
        i++;
    }
    return i;
}

Nod* getk(int k) {
    Nod *current = HEAD;
    int i = 1
    while (current != NULL) {
        if (k == i) {
            return current;
        }
        current = current->link;
        i++;
    }
    return current;
}

 int main() {
    

    return 0;
 }