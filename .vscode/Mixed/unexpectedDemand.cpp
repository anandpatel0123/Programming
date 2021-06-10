#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,30};
    int n=2,k=40;

    sort(arr,arr+n);
    int sum=0,count=0;

    if(k<arr[0])
        return 0;

    for(int i=0;i<n;){
        if(k>=sum+arr[++i]){
            count++;
        }
    }
    cout<<count;

}