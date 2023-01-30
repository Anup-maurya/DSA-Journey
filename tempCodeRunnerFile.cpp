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

void append(Node *head_ref,int new_value){
    Node *new_node =new Node();
    new_node->data=new_value;
    Node *last =*head_ref;
     new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }