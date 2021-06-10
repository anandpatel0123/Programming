#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void insert(Node *h, int d,int pos){
    Node *new_node = new Node;
    int key = 1;
    Node* prev = h;
    new_node->data = d;
    new_node->next = NULL;

    while(key != (pos-1)){
        prev = prev->next;
        key++;
    }

    new_node->next = prev->next;
    prev->next = new_node;

}

void createNode(Node **h,int d){
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

}

void display(Node *h){
    while(h!=NULL){
        cout<<h->data<<"\n";
        h=h->next;
    }
}

int main(){
    Node *head = NULL;

    createNode(&head,10);
    createNode(&head,20);
    createNode(&head,30);
    createNode(&head,40);
    createNode(&head,50);
    createNode(&head,60);
    createNode(&head,80);
    createNode(&head,90);
    createNode(&head,100);
    insert(head,70,7);

    cout<<head->next->next->data;

    //display(head);


}