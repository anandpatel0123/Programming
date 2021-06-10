#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char str[5];
    cout<<"Enter the string :";
    cin>>str;
    for(int i =strlen(str);i>=0;i--){
        for(int j =0;j<2;j++){
            cout<<str[--i];
        }
    }
}