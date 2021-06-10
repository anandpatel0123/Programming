#include<iostream>
using namespace std;

class stackArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
        stackArray(int totalSize){
            data=new int[totalSize];
            nextIndex=0;
            capacity=totalSize;
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

        void push(int element){
            if(nextIndex==capacity){
                cout<<"Stack if Full" <<endl;
                return;
            }
            data[nextIndex]=element;
            nextIndex++;
        }

        //delete the element from the stack

        int pop(){

            if(isEmpty()){
                cout<<"Stack if Empty"<<endl;
                return 0;
            }

            nextIndex--;
            return data[nextIndex];
        }

        int top(){
            if(isEmpty()){
                cout<<"Stack if Empty"<<endl;
                return 0;
            }
            return data[nextIndex-1];
        }

};
