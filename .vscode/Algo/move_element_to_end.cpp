#include<iostream>
using namespace std;

int main(){

    int arr[]= {2,1,2,2,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int i=0,j=n-1;
    while(i<j){
        while(arr[j]==target && i<j){
            j-=1;
        }
        if(arr[i]== target){
           swap(arr[i],arr[j]); 
        }
        i+=1;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}