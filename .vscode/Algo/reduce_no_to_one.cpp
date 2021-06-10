#include<iostream>
using namespace std;

int main(){

    int n=16,count=0;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else if(n==3){
            n-=1;
        }
        else if(n%4==1){
            n-=1;
        }
        else if(n%4==3){
            n+=1;
        }
        count++;
    }
    cout<<count;
}