#include<iostream>
#include <cmath>
using namespace std;

class node{
    public:
    int data;
    int key;
    node *next;

    node(){
        key = 0;
        data = 0;
        next = NULL;
    }

    node(int k, int d){
        key = k;
        data = d;
    }
};

class SinglyLinkedList{
    public:
        node* head;

        SinglyLinkedList(){
            head = NULL;
        }

        SinglyLinkedList(node *n){
            head=n;
        }


        //1. Check if node exists using key value
        node* nodeExists(int k){
            node *temp=NULL;

            node* ptr=head;
            while(ptr!=NULL){
                if(ptr->key==k){
                    temp=ptr;
                }
                ptr=ptr->next;
            }
            return temp;
        }


        //2. Append a node to the list

        void appendNode(node *n){
            if(nodeExists(n->key)!=NULL){
                cout<<"Node already with key :"<<n->key<<". Append another node with different key value"<<endl;
            }
            else{
                if(head==NULL){
                    head = n;
                    cout<<"Node Appended"<<endl;
                }
                else{
                    node *ptr = head;
                    while(ptr!=NULL){
                        ptr = ptr->next;
                    }
                    ptr->next=n;
                    cout<<"Node Appended"<<endl;
                }
            }

        }
};
int main(){
    
}