#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    bool flag = false;
    int n;
    cin>>n;
    bool *y;
    y=new bool[n];
    int *p;
    p = new int[n];
    int x=0;
    long double sr;
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>p[j];
            sr = sqrt(p[j]);
            if((sr - floor(sr)) != 0){
                flag = true;
                break;
            }
        }
        x=0,sr=0;
        if(flag==false)
            y[i]=true;
        if(flag==true)
            y[i]=false;
        
    }
    for(int i=0;i<n;i++){
        if(y[i]==true){
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
    }
  return 0; 
} 