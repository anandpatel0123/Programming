#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
int main() 
{ 
    int size;
    cin>>size;
    int arr[size]; 

    for(int i=0;i<size;i++)
        cin>>arr[i];
      
    for (int i = 0; i < size; i++) 
    { 
        arr[arr[i] % size] = arr[arr[i] % size] + size; 
    } 
    for (int i = 0; i < size; i++)  
    { 
        if (arr[i] >= size*2)  
        { 
            cout << i << " "; 
        } 
    }
    
} 