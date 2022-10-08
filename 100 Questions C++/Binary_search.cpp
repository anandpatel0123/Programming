#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int key){
    int start = 0,end=n-1;
    int mid;
    
    while(start<=end){
        mid = (start+end)/2;
        if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end=mid-1;
        }else {
            return mid;
        }
    }
    return -1;

}

int main(){
    int arr[] = {5,12,23,34,56,87,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cin>>key;
    int index = binarySearch(arr,n,key);
    if(index!=-1){
        cout<<arr[index];
    }else{
        cout<<"nout found";
    }
}