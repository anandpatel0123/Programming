#include<iostream>
using namespace std;

template <typename T>

class stackArray{
    T *data;
    int nextIndex;
    int capacity;

    public:
        stackArray(){
            data=new T[4];
            nextIndex=0;
            capacity=4;
        }

        //return the size of elements in the stack

        int size(){
            return nextIndex;
        }

        bool isEmpty(){
            /*
            if(nextIndex==0){
                if(nextIndex == 0)
                return true;
                else
                return false;
            }
            */
           return nextIndex==0;


        }

        //insert elements into stack

        void push(T element){
            if(nextIndex==capacity){

                T *newData = new T[2*capacity];
                for(int i=0; i<capacity; i++){
                    newData[i] = data[i];
                }
                capacity*=2;
                delete [] data;
                data = newData;
                // cout<<"Stack if Full" <<endl;
                // return;
            }
            data[nextIndex]=element;
            nextIndex++;
        }

        //delete the element from the stack

        T pop(){

            if(isEmpty()){
                cout<<"Stack if Empty"<<endl;
                return 0;
            }

            nextIndex--;
            return data[nextIndex];
        }

        T top(){
            if(isEmpty()){
                cout<<"Stack if Empty"<<endl;
                return 0;
            }
            return data[nextIndex-1];
        }

};

int main(){


     stackArray <char> s;
     s.push(100);
     s.push(101);
     s.push(102);
     s.push(103);
     s.push(104);

    cout<<s.top()<<endl;
     cout<<s.pop()<<endl;
     cout<<s.pop()<<endl;
     cout<<s.pop()<<endl;

     cout<<s.size()<<endl;

     cout<<s.isEmpty()<<endl;


}