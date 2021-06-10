#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int *a;
    int arr;
    cout<<"Enter Size The elements"<<endl;
    cin>>arr;
    a = new int[arr];
    for(int i=0;i<arr;i++){
        cin>>a[i];
    }

    int sum=0;
    unordered_map<int,int>  oddfreq;
    for(int i=0;i<arr;i++){
        oddfreq[a[i]]++;
    }

    for(auto i : oddfreq){
        if(i.second%2!=0){
            sum=sum+i.first*i.second;
        }
    }
    cout<<sum;
}