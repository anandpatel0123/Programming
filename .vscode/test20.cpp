#include<iostream>
#include<string>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n];
	string zero = "";
	string one = "";
	string two = "";
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
		if(arr[i] == 0){
			zero+= to_string(arr[i]);
		}
		else if(arr[i]==1) {
			one+= to_string(arr[i]);
		}
		else{
			two+= to_string(arr[i]);
		}
	}
	string res = one+zero+two;
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}