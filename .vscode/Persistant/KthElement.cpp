#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Program to find the Kth smallest element in an unsorted array is discussed here.Given an integer array, write a program to print the kth smallest number from the array.
// For example,
// Sample Input:
// 10 (Number of elements of the array)
// 5 (Kth smallest element to be found)
// 1 2 7 8 9 3 4 5 6 0 (Array elements)
// Sample Output:
// 4
// Algorithm to find the Kth smallest element in an unsorted array
//     Input the number of elements of the array.
//     Input the Kth element to be found.
//     Input the elements of the array.
//     Sort the array.
//     Return the arr[k-1].


int main(){
    int n,k;
    cin>>n>>k;
    int *arr = new int[n];
    for(int i=0; i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Kth Element---> "<<arr[k-1];
}