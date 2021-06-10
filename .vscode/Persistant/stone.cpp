#include<iostream>
#include<bits/stdc++.h>
using namespace std;


  bool stoneGame(int n) {
        if(n==0)
            return false;
			
        vector<bool> dp(n+1, false);        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j*j<=i; j++)
            {
                if(dp[i-(j*j)]==false)
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[n];
    }

int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int res;

    for(int i=0; i<t; i++){
        res=stoneGame(arr[i]);
        if(res==1)
        cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }
    } 
    
    
}