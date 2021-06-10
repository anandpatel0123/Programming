#include<iostream>
using namespace std;

int main(){

    int s=7,t=11,a=5,b=15,m=3,n=2;
    int apples[] ={-2,2,1};
    int oranges[] = {5,-6};

    int app[m], org[n];
    int ap=0,orn=0;
    for(int i=0;i<m;i++){
        app[i] = a + (apples[i]);
    }
    for(int i=0;i<n;i++){
        org[i] = b + (oranges[i]);
    }
    for(int j=0;j<m;j++){
        if(app[j]>=s && app[j]<=t){
            ap++;
        }
    }
    for(int j=0;j<n;j++){
        if(org[j]>=s && org[j]<=t){
            orn++;
        }
    }

    cout<<ap<<endl;
    cout<<orn<<endl;
}