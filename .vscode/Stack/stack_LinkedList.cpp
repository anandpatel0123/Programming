#include <iostream>
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
template<typename T>
class Stack{
    Node<T> *head;
    int size;

    public:
        Stack(){
            head=NULL;
            size=0;
        }


    int Size(){return size;}

    bool isEmpty(){return size==0;}

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head=newNode;
        size++;

    }

    T pop(){
        if(head==NULL) {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        T temp=head->data;
        Node<T> *t = head;
        head=head->next;
        delete t;
        size--;
        return temp;
    }

    T top(){
        if(head==NULL) {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return head->data;
    }
};

int main(){
    Stack<int> a;
    cout<<a.top();
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top();
}