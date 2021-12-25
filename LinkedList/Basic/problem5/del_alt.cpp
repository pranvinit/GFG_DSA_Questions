// Question - Given a Singly Linked List of size N, delete all alternate nodes of the list.

// Complete this function
void deleteAlt(struct Node *head){
    struct Node *temp=head, *todelete;
     while(temp->next != NULL){
         todelete = temp->next;
         temp->next = temp->next->next; //setting next pointer of current node to next of next;
         delete (todelete);
         if(temp->next!=NULL){
             temp = temp->next; //setting temp to next node
         }
     }
}
