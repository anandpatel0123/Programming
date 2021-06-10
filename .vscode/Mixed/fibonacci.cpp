#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
    
}


int Ifib(int n){
    static int F[50];
    int i;
    for(i=0;i<50;i++)
        F[i]=-1;

    if(n<=1){
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
    
}

int Lfib(int n){
    int t0=0,t1=1,sum,i;

    for(i=1;i<n;i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;

}

int main(){
    cout<<fib(6);
}