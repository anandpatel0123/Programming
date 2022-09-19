#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
    if(n==0 || n==1) return true;

    if(a[0]>a[1]) return false;

    bool isArraySorted = isSorted(a+1,n-1);
    return isArraySorted;
}

int main(){

    int a[] = {1,2,3,4,9,6,7};
    if(isSorted(a,7)){
        cout<<"Sorted";
    }else{
        cout<<"Not sorted";
    }

}