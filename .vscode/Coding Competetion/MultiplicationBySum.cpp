#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count=0;
    for(int i=0;i<n;i++){
        while(a[i]%10==0){
        if(a[i]%10 == 0){
            a[i] = a[i]/10;
            count++;
        }
        }
        cout<<count;
        count = 0;
    }
    
    return 0;
}
