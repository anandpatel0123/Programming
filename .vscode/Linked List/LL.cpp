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
    Node *node = new Node;
    Node *last =n;

    node->data=d;
    node->next=NULL;

    if(n==NULL){
        n=node;
        return n;
    }

    while(last->next!=NULL){
        last=last->next;
    }
    last->next=node;
    return n;

}

int main(){
    Node *head=NULL;
    cout<<"Enter the value :"<<endl;
    int val;
    int choice=0;
    cin>>val;
  Node *h=append(head,val);
  
  cout<<"Do you want to continue? (0 , 1) Yes = 1 and No = 0"<<endl;
    cin>>choice;
  while(choice){
    cout<<"Enter a value :"<<endl;
    cin>>val;
    append(h,val);
    cout<<"Do you want to continue? (0 , 1) "<<endl;
    cin>>choice;
  }
  display(h);
}