#include<iostream>
using namespace std;
int main(){
    
    int a[]={7,5,9,6,8,1,0,9};
    int n=sizeof(a)/sizeof(a[0]);
    int temp,j=n-1;
    for(int i=0;i<n/2;i++){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}