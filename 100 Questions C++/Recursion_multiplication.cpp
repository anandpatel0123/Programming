#include <iostream>
using namespace std;

int mul(int m,int n){
    if(n==0) return 0;

    
    return mul(m,n-1) + m;
}

int main(){
        cout<<mul(3,5);
}