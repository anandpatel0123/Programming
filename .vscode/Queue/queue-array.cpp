#include <iostream>
using namespace std;


template <typename T>
class Queue{
        T *data;
        int frontIndex;
        int nextIndex;
        int size,capacity;
        public:
        Queue(){
            data = new T[5];
            frontIndex = -1;
            nextIndex = 0;
            size = 0;
            capacity =5;
        }

        T getSize(){
            return size;
        }

        T front() {
            if(size==0){
                cout<<"Queue is empty!"<<endl;
                return 0;
            }
            return data[frontIndex];
        }

        bool isEmpty() {
            return size==0;
        }

        //insert Element
        void enqueue(int element) {
            if(size==capacity){
                cout<<"Queue Full! Wait.."<<endl;
                T *temp = new T[2*capacity];
                int j=0;
                for(int i=frontIndex;i<capacity;i++,j++){
                    temp[j]=data[i];
                }
                for(int i=0;i<frontIndex;i++,j++){
                    temp[j]=data[i];
                }
                frontIndex=0;
                nextIndex=capacity;
                delete[] data;
                data = temp;
                capacity = 2*capacity;
                cout<<"Done! Element Inserted "<<endl;
            }
            data[nextIndex]=element;
            nextIndex=(nextIndex+1)%capacity;
            if(frontIndex==-1){
                frontIndex=0;
            }
            size++;
        }

        //Delete the element
        T dequeue(){
            if(size==0){
                cout<<"Queue is empty!"<<endl;
                return 0;
            }
            T res=data[frontIndex];
            frontIndex = (frontIndex+1) % capacity;
            size--;
            if(size==0){
                frontIndex=-1;
                nextIndex=0; 
            }
            return res;

        }
};

int main(){
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.front()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.front()<<endl;
}