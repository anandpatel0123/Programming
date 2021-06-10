#include <iostream>
using namespace std;

// Combination nCr = n!/r!(n-r)!

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int Lfact(int n){
    int i,s=1;
    if(n==0)
        return 1;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}

int C(int n,int r){
    int t1=Lfact(n);
    int t2=Lfact(r);
    int t3=Lfact(n-r);

    return t1/(t2*t3);
}

int main(){
    cout<<C(4,4)<<endl;
    
}