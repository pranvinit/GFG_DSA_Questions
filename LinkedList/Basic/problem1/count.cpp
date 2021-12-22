// Question - Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

int getCount(struct Node* head)
    {
        struct Node* temp = head;
        int count = 0;
        while(temp != NULL){
            count += 1;
            temp = temp->next;
        }
        return count;
    }
