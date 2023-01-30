#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_value){
    Node *new_node= new Node();
    new_node->data=new_value;
    new_node->next=(*head_ref);
    (*head_ref) = new_node;
}

void insertAt(int new_value, Node *prev_node)
{
    if(prev_node==NULL){
        cout<<"Prev Node seems to be NULL";
        return;
    }
    Node *new_node=new Node();
    new_node->data=new_value;

    new_node->next=prev_node->next;
    prev_node->next= new_node;
}

void append(Node **head_ref,int new_value){
    Node *new_node =new Node();
    new_node->data=new_value;
    Node *last =*head_ref;
     new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last= last->next;
    }
    last->next=new_node;
    return;   
}

void printlist(Node *node){
    
    while(node!=NULL){
         cout<<" "<<node->data;
         node=node->next;
    }
    return;
}

int main(){
    Node *head =NULL;
    append(&head,33);
    push(&head,4);
    push(&head,34);
    printlist(head);
    insertAt(74,head->next);
    return 0;
}