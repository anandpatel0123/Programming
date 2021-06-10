#include<iostream>
using namespace std;

int main(){
    int *p,*q;
    int i;
    p = new int[10];
    for(int i=0;i<10;i++){
        p[i]=i*10;
    }

    q=new int[20];

    for(int i=0;i<10;i++)
        q[i]=p[i];

    delete(p);

    p=q;
    q=NULL;

    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
        
    }



}