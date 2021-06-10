#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;


int main()
{
    int n,target;
    cin>>n>>target;

    int arr[n];
    for(int i=0; i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);

    int L=0,R=n-1;

    for(int i=0,j=n-1; i<n; i++){
        if(arr[L]+arr[R]==target){
            cout<<arr[L]<<" "<<arr[R]<<"\n";
            break;
        }
        else if(arr[L]+arr[R]<target){
            L++;
        }
        else{
            R++;
        }
    }
    cout<<arr[L]<<"   "<<arr[R];
}
