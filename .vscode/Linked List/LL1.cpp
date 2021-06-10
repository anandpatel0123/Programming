#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node *next;
     Node(int data){
         this -> data = data;
         next = NULL;
     }
};

void insert(Node *head, int data,int pos){
    Node *new_node = new Node(data);
    Node *temp=head;
    int i=1;
    while(temp!=NULL){
        if(i==pos){
            new_node->next=temp->next;
            temp->next=new_node;
            return;
        }
        temp = temp->next;
        i++;
    }
}

Node  *create(Node *head,int data){
    Node *new_node = new Node(data);
    Node *tail;
    if(head==NULL){
        head=new_node;
        tail=head;
    }else{
        tail->next = new_node;
        tail=new_node;
    }
    return head;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;    }
}


int main(){
    
    Node *head=NULL;
    head=create(head,10);
    head=create(head,20);
    head=create(head,30);
    head=create(head,40);
    head=create(head,50);

    insert(head,99,1);
    display(head);

}