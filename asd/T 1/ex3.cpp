
 struct Nod
 {
     int info;
     Nod *link;
    }
    
 Nod *HEAD = NULL;


bool includes(Nod *sublistHead) {
    Nod *current = HEAD;
    Nod *sublistCurrent = sublistHead;
    
    while (current != NULL) {  
        if (current->info == sublistcurr->info) {
            break;
         }    
        current = current->link;
    } 
   
    while (current != NULL && sublistcurr != NULL) {  
        if (current->info != sublistcurr->info) {
            return false;
        }
        sublistcurr = sublistcurr->info
        current = current->link;
    }

    return true;
}
 
 int main() {
    

    return 0;
 }