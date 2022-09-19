#include <iostream>
using namespace std;

int countZero(int n){
    // base case
    if(n==0) return 0;

    //hypothesis
    int ans = countZero(n/10);

    //condition
    if(n%10==0) return ans+1;
    else return ans;
}

int main(){
    cout<<countZero(10320050);
}

