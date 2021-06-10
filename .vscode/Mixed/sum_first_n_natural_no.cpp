#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    else
    {
        return sum(n-1)+n;
    }
    
}

int LSum(int n){
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;
}

int main(){
    cout<<LSum(6);
}