#include<iostream>
using namespace std;

bool find(int a[],int n,int x){
    if(a[0]==x){
        return true;
    }

    if(n==0) return false;

    return find(a+1,n-1,x);
}

int main(){
    int a[] = {4,2,3,6,8,1,0,6,4};
    if(find(a,9,5)){
        cout<<"found";
    }else{
        cout<<"not found";
    }

}