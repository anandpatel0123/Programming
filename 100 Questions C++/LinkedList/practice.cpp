#include <iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    
    public:
        //List initilization
        // Node(int d){
        //     data=d;
        //     next = nullptr;
        // }
        Node(int d): data(d),next(nullptr){};

		//friend calss
		friend class List;
        
};

class List{
	Node *head;
	Node *tail;

	public:
		List():head(nullptr),tail(nullptr){};

	Node *getHead() {return head;};
	void setHead(Node *h) {head  = h;};

	void push_front(int data){
		Node *n = new Node(data);
		if(head==nullptr){
			head = tail = n;
		}
		else{
			// *n.next = head;
			n->next = head;
			head = n;
		}
	} 


	void push_back(int data){
		Node *n = new Node(data);

		if(head == nullptr){
			head= tail = n;
			return;
		}else{
			tail->next = n;
			tail = n;
		}
	}
	
	//recursive
	int search(Node *head,int key,int idx=1){
		if(head==nullptr) return -1;

		//logical
		if(head->data == key){
			return idx;
		}

		return search(head->next,key,idx+1);

	}

	void insert(Node* head,int data,int pos,int idx=1){
            if(pos==1){
                Node *n = new Node(data);
                n->next = head;
                setHead(n);
                return;
            }
			
			if(head==nullptr or idx==pos-1){
				Node *n = new Node(data);
				if(head==nullptr){
					head = tail = n;
				}else{
					n->next = head->next;
					head->next = n;
				}
				return;
			}

			return insert(head->next,data,pos,idx+1);
	}

    //recursive reverse
    Node *recReverse(Node *head){
        //Base Condn
        if(head==nullptr or head->next == nullptr) return head;
        Node *newHead = recReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return  newHead;
    }


	void print(){
		Node *temp = head;

		while(temp!=nullptr){
			cout<<temp->data<<" ";
			temp = temp->next;
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
   ll->push_front(50);
   ll->push_front(60);
   ll->print();
   ll->insert(ll->getHead(),90,1);
   ll->print();
   ll->setHead(ll->recReverse(ll->getHead()));
   ll->print();
//    cout<<ll->search(ll->getHead(),10);


    return 0;
}

