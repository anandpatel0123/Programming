
#include<iostream>
using namespace std;
int main(){
    int n=1012;
int count=0,d=0,t;
    int temp=n,x=n;
    while(temp!=0){
        d++;
        temp/=10;
    }
    
    for(int i=0;i<d;i++){
        t=x%10;
        if(t!=0 && n%t==0){
            x/=10;
            count++;
        } 
        else  x/=10;         
    }
    cout<<count;
}