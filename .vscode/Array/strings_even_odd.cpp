#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string temp;
    cin>>n;
    string s[n];
    
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        temp=s[i];
        for(int j=0;j<temp.size();j++){
            if(j%2==0){
                cout<<temp[j];
            }
        }
            cout<<" ";
            for(int k=0;k<temp.size();k++){
            if(k%2!=0){
                cout<<temp[k];
            }
        }
        cout<<endl;

    }


    
    return 0;
}