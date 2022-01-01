#include <bits/stdc++.h>

using namespace std;

class DLLNode{
    public:
    int data;
    DLLNode* prev;
    DLLNode* next;
};

class myStack {
public:
    DLLNode* head;
    DLLNode* mid;
    int count;
};

myStack* createMyStack(){
    myStack* ms=new myStack();
    ms->count=0;
    return ms;
}

void push(myStack* ms, int new_data)
{
    /* allocate DLLNode and put in data */
    DLLNode* new_DLLNode = new DLLNode();
    new_DLLNode->data = new_data;
 
    /* Since we are adding at the beginning,
    prev is always NULL */
    new_DLLNode->prev = NULL;
 
    /* link the old list off the new DLLNode */
    new_DLLNode->next = ms->head;
 
    /* Increment count of items in stack */
    ms->count += 1;
 
    /* Change mid pointer in two cases
    1) Linked List is empty
    2) Number of nodes in linked list is odd */
    if (ms->count == 1) {
        ms->mid = new_DLLNode;
    }
    else {
        ms->head->prev = new_DLLNode;
 
        if (!(ms->count
              & 1)) // Update mid if ms->count is even
            ms->mid = ms->mid->prev;
    }
 
    /* move head to point to the new DLLNode */
    ms->head = new_DLLNode;
}

int pop(myStack* ms){
    if(ms->count==0){
        cout<<"STACK is EMPTY\n";
        return -1;
    }
    DLLNode* head=ms->head;
    int item=head->data;
    ms->head=head->next;
    if(ms->head!=NULL){
        ms->head->prev=NULL;
    }
    ms->count-=1;

    if((ms->count)&1){
        ms->mid=ms->mid->next;
    }
    free (head);
    return item;
}

int findMiddle(myStack* ms){
    if(ms->count==0){
        cout<<"Stack is empty now \n";
        return -1;
    }
    return ms->mid->data;
}

int deletemiddle(myStack* ms){
    int temp=ms->mid->data;
    ms->mid->prev->next=ms->mid->next;
    ms->mid->next->prev=ms->mid->prev->next;

    delete ms->mid;
    ms->mid=ms->mid->next;

    return temp;
}


int main(){
    myStack* ms=createMyStack();
    push(ms, 11);
    push(ms, 22);
    push(ms, 33);
    push(ms, 44);
    push(ms, 55);
    push(ms, 66);
    push(ms, 77);
    cout<<"Middle element"<<findMiddle(ms);
    return 0;
}