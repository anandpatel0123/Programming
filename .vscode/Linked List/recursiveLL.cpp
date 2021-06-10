#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void append(Node **ref,int d){
  Node *new_node = new Node;
  Node* last = *ref;

  new_node->data = d;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void display(Node *h){
    if(h!=NULL){
        cout<<"Value: "<<h->data<<endl;
        display(h->next);
    }
}

int main(){
    Node *head = NULL;
    int choice=0,val;
    cout<<"Enter a value : "<<endl;
    cin>>val;
    append(&head,val);
    cout<<"Do you want to continue? Y = 1 and N = 0 "<<endl;
    cin>>choice;
    while(choice){
        cout<<"Enter a value : "<<endl;
        cin>>val;
        append(&head,val);
        cout<<"Do you want to continue? Y = 1 and N = 0 "<<endl;
        cin>>choice;
    }
    display(head);
}