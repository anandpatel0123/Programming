#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int t;
    cin>>t;
    int n,k;
    int j=1;
    int temp=1;
    vector <long long>r;
    
     int a[100];
     int count=0;
     for(int i=0;i<t;){
         cin>>a[i]>>a[++i];
         i++;
         
         count+=2;
     }
     int x,y,m;
     for(int j=0;j<count/2;j++){
         y=a[j+1];
         x= a[j*2];
     for(int i=0;i<x;i++){
         if(y==0){
             r.push_back((x*(x+1))/2);
             break;
         }
         else{
             temp = x;
             
             while(j<y){
                 if(j==0){
                     temp = temp*(x+(j+1));
                 }
                 else
                    temp = temp*(x+j+1);
                j++;
             }
             r.push_back(temp);
             break;
         }

        }
     }

     for(auto i=r.begin();i<r.end();i++)
        cout<<*i<<endl;
    return 0;
}