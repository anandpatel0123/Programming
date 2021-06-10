#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int *p;
    int n;
    cout<<"Enter the No. Of Elements"<<endl;
    cin>>n;
    p = new int[n];

    for(int i=0;i<n;i++)
        cin>>p[i];
    sort(p,p+n);
    for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
}