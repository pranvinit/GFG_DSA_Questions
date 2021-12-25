//Question -  You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 

// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if(isFull(stack)){
        return;
    }
    stack->top++;
    stack->array[stack->top] = item;

}


// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if(isEmpty(stack)){
        return -1;
    }
    int data;
    data = stack->array[stack->top];
    stack->top--;
    return data;
    
}