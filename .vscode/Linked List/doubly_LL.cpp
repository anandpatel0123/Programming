#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int data){
            this->data = data;
            next = NULL;
            prev = NULL;
        }
};

void create(Node **head,int data){
    Node *new_node = new Node(data);
    Node *tail;

    if(*head==NULL){
        *head = new_node;
        tail=new_node;
    }else{
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
}

void display(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    while(temp->prev!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}

int main(){
    Node *head=NULL;

    create(&head,10);
    create(&head,20);
    create(&head,30);
    create(&head,40);
    create(&head,50);
    display(head);
}