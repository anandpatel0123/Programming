#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int *arr;
	arr=new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	
	int i=0;
	bool flag = false;


	    while(((arr[i]%10)>-1) && i<n){
	        if(arr[i]%10==0 && arr[i]>0){
				if(flag){
					cout<<arr[i]%10;
					arr[i]=arr[i]/10;
				}else{
					arr[i]=arr[i]/10;
				}
				
			}
			else if(arr[i]>0){
				flag=true;
			cout<<arr[i]%10;
	        arr[i]=arr[i]/10;
			}
			if(arr[i]==0){
				flag = false;
				cout<<endl;
				i++;
			}
	    }
	    
	
	return 0;
}