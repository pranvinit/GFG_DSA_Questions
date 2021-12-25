//Question - Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked list and check whether the length of linked list is even or odd.

int isLengthEvenOrOdd(struct Node* head)
{
     int count = 0;
     struct Node* temp = head;
     while(temp != NULL){
         temp = temp->next;
         count++;
     }
     if(count % 2 == 0){
         return 0;
     }
     else{
         return 1;
     }
}