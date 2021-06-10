#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *create(Node *n,int d){
    Node *temp;
    if(n==NULL){
        Node *new_node=new Node;

        new_node->data=d;
        new_node->next=NULL;

        n=new_node;
        temp=n;
        return n;
    }
    else{

        Node *new_node=new Node;
        new_node->data=d;
        new_node->next=NULL;
        temp->next=new_node;
        
        temp=new_node;
        return n;

    }

}

void display(Node *h){
    if(h==NULL){
        return;
    }
    cout<<h->data<<endl;
    if(h->next!=NULL){
        display(h->next->next);
    }
    cout<<h->data<<endl;
}

int main(){
    Node *head = NULL;
   Node *h =  create(head,1);
    create(h,2);
    create(h,3);
    create(h,4);
    create(h,5);
    display(h);
}