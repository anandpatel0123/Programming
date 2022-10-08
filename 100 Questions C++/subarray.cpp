#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k] <<", ";
            }
            cout<<endl;
        }
    }
}


int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubarray(arr,n);
}