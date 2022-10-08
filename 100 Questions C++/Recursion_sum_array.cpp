#include <iostream>
using namespace std;

int sumArray(int a[],int n){
    if(n==0) return 0;


    return a[0]+sumArray(a+1,n-1);
}

int main(){
    int a[] = {1,2,3,4,5};
    cout<<sumArray(a,5);
}