#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    string digit[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    int i;
    for(i=1;i<=9;i++){
        if(i==n){
            cout<<digit[--n];
        }
    }
    if(n>9)
        cout<<"Greater than 9";
}