
#include <bits/stdc++.h> 
using namespace std; 


int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int findGCD(int arr[], int n) 
{ 
	int result = arr[0]; 
	for (int i = 1; i < n; i++) 
		result = gcd(arr[i], result); 

	return result; 
} 

int main() 
{   int n1;
cin>>n1;
int arr[n1]; 
for(int i =0;i<n1;i++)
    cin>>arr[i];
	
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << findGCD(arr, n) << endl; 
	return 0; 
}