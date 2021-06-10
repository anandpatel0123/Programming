#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void display(Node *n){
    if(n!=NULL){
        Node *tmp;
        tmp=n;
        while(tmp!=NULL){
            cout<<"Value : "<<tmp->data<<endl;
            tmp=tmp->next;
        }
    }    
}
Node *append(Node *n,int d){
    Node *head;
    Node *tmp;
    
    if(n==NULL){
        Node *node = new Node();
        head = node;
        head->data=d;
        head->next=NULL;
        tmp=head;
        return tmp;
    }
    
    if(tmp!=NULL){
        Node *node = new Node();
        node->data=d;
        tmp->next=node;
        node->next=NULL;
        tmp = tmp->next;
    }
    return head;

}

int main(){
  Node *head=NULL;
  Node *h=append(head,10);
  append(h,20);
  append(h,30);
  append(h,40);
  append(h,50);
  display(h);
}