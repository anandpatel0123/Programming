#include <iostream>
using namespace std;

int count(int n){
    if(n==0){return 0;}
    int temp = n/10;
    return count(temp)+1;
}

int main(){
    cout<<count(4025);
}