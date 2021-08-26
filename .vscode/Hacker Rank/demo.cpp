#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a1,a2,a3,a4;
	    int count=0;
	    cin>>a1>>a2>>a3>>a4;
	    int arr[11]={0};
	    arr[a1]++;
	    arr[a2]++;
	    arr[a3]++;
	    arr[a4]++;
	    for(int j=0;j<=10;j++){
	        if(arr[j]==3){
	            cout<<1<<endl;
				count=-1;
	            break;
	        }
	        if(arr[j]>0){
	            count++;
	        }
	    }
	    if(count==4){
	        cout<<2<<endl;
	    }
	    else if(count==1){
	        cout<<0<<endl;
	    }
		else if(count==-1){
			continue;
		}
	    else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}
