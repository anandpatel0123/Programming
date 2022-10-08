#include <iostream>
using namespace std;

//Forward Declaration
class List;

class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(nullptr){};// Initilization List

    friend class List; // list is no defined we will get error
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr){};

    Node *getHead()
    {
        return head;
    }

    void setHead(Node *h){
        head=h;
    }

    void push_front(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
        }
        else
        {
            // *n.next = head;
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data,int pos){
        if(pos==1){
            Node *n = new Node(data);
            head=tail=n;
        }else if(pos>1){
            Node *n = new Node(data);
            int i=1;
            Node *temp = head;
            while(i!=pos-1 && temp!=nullptr){
                i++;
                temp = temp->next;
                if(i==pos-1){
                    n->next = temp->next;
                    temp->next = n;
                    return;
                }
            }

            cout<<"Location not found!\n";
            
        }
    }

    //recursive
    int search(Node *head,int key,int idx=1){
        if(head==nullptr) return -1;
        if(head->data==key){
            return idx;
        }

        return search(head->next,key,idx+1);
    }

    Node *recReverse(Node *head){
        if(head==nullptr or head->next==nullptr) return head;

        Node *sHead = recReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return sHead;
    }

    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main()
{

    List *ll = new List();

    ll->push_back(10);
    ll->push_back(20);
    ll->push_back(30);
    ll->push_front(55);
    ll->push_front(15);
    ll->print();
    // cout<<ll->search(ll->getHead(),200,1);
    ll->setHead(ll->recReverse(ll->getHead()));
    ll->print();

   
}

// Kth Last Element
// Implement a function that returns the Kth last of element from the linked list, 
//  in a single pass. You can assume K will be less than / equal to length of linked list.

// (Hint : Use two pointers similar to Runner Technique)
// Input

// You will get head of the linked list.

// 1 -> 2 -> 3 -> 4 -> 5 ->6 ->7

// K = 3

// Output
// 5
// Explanation:
// Third last element is 5.

// ------------------------------------------------------------------

// Alternate Merge
// Given two linked lists, insert nodes of second list into first list at alternate 
// positions of first list.

// Input Format

// In the function pointer to the start of the two linklists is passed.

// Output Format

// Return a pointer to the new merged list.

// Sample Input

// 5->7->17->13->11
// 12->10->2->4->6
// Sample Output

// 5->12->7->10->17->2->13->4->11->6