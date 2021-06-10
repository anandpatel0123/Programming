#include<iostream>
using namespace std;

template <typename T>
class Node{
    public:
    T data;
    
    Node *next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class LLqueue{
    int size,firstIndex;
    public:
    Node<T> *head,*tail;
    LLqueue(){
        size=0;
        head=NULL;
        tail=NULL;
    }


    T front(){
        if(size==0){
            cout<<"Queue is empty!"<<endl;
            return 0;
        }
        return head->data;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    //insert element
    void enqueue(int data){
        Node<T> *newNode = new Node<T>(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }
        tail=newNode;
        size++;
    }

    //delete element
    T dequeue(){
        if(size==0){
            cout<<"Queue is empty!"<<endl;
            return 0;
        }
        T res = head->data;
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return res;
    }
};

int main(){
    LLqueue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
}