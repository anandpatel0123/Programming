#include<iostream>
using namespace std;

class Node {
    public:

        int data;
        Node *next;
};

void create(Node **h,int d){
    Node *new_node = new Node;
    Node *last = *h;

    new_node->data = d;
    new_node->next = NULL;

    if(*h==NULL){
        *h=new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void reverse(Node **h,Node *p,Node *q,Node *r){

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    *h=q;

}
void recursiveReverse(Node **h,Node *p,Node *q){
    if(p!=NULL){
        recursiveReverse(h,p->next,p);
        p->next=q;
    }else{
        *h=q;
    }
}

void display(Node *h){
    while(h!=NULL){
        cout<<h->data<<endl;
        h=h->next;
    }
}


int main(){
    Node *head = NULL;
    
    create(&head,10);
    create(&head,20);
    create(&head,30);
    create(&head,40);
    create(&head,50);
    create(&head,60);
    create(&head,70);create(&head,80);create(&head,90);create(&head,100);
    display(head);
    Node *p=head;
    Node *q=NULL;
    Node *r=NULL;
    //reverse(&head,p,q,r);
    recursiveReverse(&head,p,q);
    display(head);

}