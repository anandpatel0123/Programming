
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int *p;
    int n;
    cin>>n;
    p=new int[n];
    
    for(int i=0;i<n;i++)
            cin>>p[i];
    sort(p,p+n);
    int  k = p[n-1];
    int *a;
    a=new int[k];
    for(int i=0;n;i++){
        a[p[i]]++;
    }
    
    sort(a,a+k);
    
    cout<<a[0];
    
    return 0;
}
