#include<iostream>
#include<vector>
using namespace std;
 int main(){

     int n=2,m=2;
     int a[]={3,4};
     int b[]={24,48};
     int count=0,z=0;
     bool x = false;
        vector<int> temp;
        int i=a[n-1];
        while(i<=b[0]){
            for(int j=0;j<n;j++){
                if(i%a[j]==0){
                    x=true;
                }
                else {
                    x=false;
                    break;
                }   
            }
            if(x==true){
                    temp.push_back(i);
                    z++;
                }
            i=i+a[n-1];

        }

        for(int i=0;i<z;i++){
            for(int j=0;j<m;j++){
                if(b[j]%temp[i]==0){
                    x=true;
                }
                else {
                    x=false;
                    break;
                }
            }
            if(x==true){
                    count++;
                }
        }

        cout<<count;
 }
