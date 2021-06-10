
#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 

class Node{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

void create(Node **head, int data){
	Node *new_node = new Node(data);
	Node *last;
	if(*head==NULL){
		*head=new_node;
		last=*head;
	}
	else{
		last->next=new_node;
		last = new_node;
	}
}

void display(Node *h){
	Node *temp=h;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
		
}


int main() 
{   

	Node *head = NULL; 
	for(int i=10; i<=50;i+=10)
		create(&head,i);
	display(head);
	
}