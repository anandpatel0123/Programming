#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next=NULL;
    }
};

Node* recursive_ordered_insert(Node* head, int val)
{
    //special case: first elem is null
    if (!head)
    {
        head =new Node(val);

        return head;
    }

    //special case 2: end of list
    if (!head->next)
    {
        head->next = new Node(val);

        return head->next;
    }

    //base case
    if (head->next && head->next->data > val)
    {
        Node* newNode = new Node(val);
        newNode->next = head->next;

        head->next = newNode;

        return newNode;
    }

    return recursive_ordered_insert(head->next, val);
}