#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m,sum1=0,sum2=0,count=0;
	    cin>>n>>m;
	    int arr1[n],arr2[m];
	    for(int j=0;j<n;j++){
	        cin>>arr1[j];
	        sum1+=arr1[j];
	    }
	        
	    for(int j=0;j<m;j++){
	        cin>>arr2[j];
	        sum2+=arr2[j];
	    }
	    sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
	    int x=0,y=m-1;
        int mini= min(m,n);
	    while(sum1<=sum2){
	        sum1-=arr1[x];
	        sum1+=arr2[y];
	        
	        sum2-=arr2[y];
	        sum2+=arr1[x];
	        x++,y--;
	        count++;
            if(count>mini){
                cout<<"-1"<<endl;
                break;
            }
	    }
	    if(count<=mini){
	        cout<<count<<endl;
	    }
	}
	return 0;
}
