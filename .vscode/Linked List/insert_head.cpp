#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insertHead(Node **head,int data){
    Node *new_node= new Node();
    new_node->data = data;
    new_node->next = NULL;
    if(*head==NULL){
        *head=new_node;
        return;
    }
    else{
        new_node->next=*head;
        *head=new_node;
    }

}
void display(Node *head){
    if(head!=NULL){
        cout<<head->data<<endl;
        display(head->next);
    }
}
int main() {
    Node *head = NULL;
    insertHead(&head,100);
    display(head);

}