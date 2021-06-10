#include<iostream>
using namespace std;

int main(){
    int a[10]; //creating an array in stack
    int *p;
    p=new int[10]; // creating an array in heap
    for(int i=0;i<10;i++){
        p[i]=i*10;
        a[i]=i*20;
    }
    
    delete p;
    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";

} 