// C++ simple program to 
// find elements which are 
// not present in second array 
#include<bits/stdc++.h> 
using namespace std; 

// Function for finding 
// elements which are there 
// in a[] but not in b[]. 
void findMissing(int a[], int b[], 
				int n, int m) 
{ 
	for (int i = 0; i < n; i++) 
	{ 
		 int j;
		for ( j = 0; j < m; j++) {
			if (a[i] == b[j]) 
				break; 
        }

		if (j == m) 
			cout << a[i] << " "; 
        
	} 
} 

// Driver code 
int main() 
{ 
	int a1,a2;
    cout<<"Enter the Size of array1 : ";
    cin>>a1;
    cout<<"Enter the Size of array2 : ";
    cin>>a2;


    if(a1>a2){
        int a[a1], b[a2];
    cout<<"Enter the Values of array1 : ";
    for(int i=0; i<a1; i++){
        cin>>a[i];
    }
    cout<<"Enter the Values of array2 : ";
    for(int i=0; i<a2; i++){
        cin>>b[i];
    }
	int n=a1,m=a2;
    findMissing(a, b, n, m);

    }
    else
    {
        int a[a1], b[a2];
    cout<<"Enter the Values of array1 : ";
    for(int i=0; i<a1; i++){
        cin>>b[i];
    }
    cout<<"Enter the Values of array2 : ";
    for(int i=0; i<a2; i++){
        cin>>a[i];
    }
	int n=a2 ,m=a1;
    
	findMissing(a, b, n, m); 
    }
    
	return 0;
}