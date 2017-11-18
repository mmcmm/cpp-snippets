
 struct Nod
 {
     int info;
     Nod *link;
    }
    
 Nod *HEAD = NULL;


 Nod* concat(Nod *head1, Nod *head2) {
    Nod *current = head1;
    while (current->link != NULL) {      
        current = current->link;
    }
    current->link = head2;
   
    return head1;
}
 
 int main() {
    

    return 0;
 }