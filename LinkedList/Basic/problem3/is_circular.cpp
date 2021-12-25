//Question - Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

bool isCircular(struct Node *head){
    struct Node* temp = head;
    if(temp == NULL){
        return true;
    }
    while(temp != NULL){
        if(temp->next == head){
            return true;
        }
        temp = temp->next;
    }
    return false;
}