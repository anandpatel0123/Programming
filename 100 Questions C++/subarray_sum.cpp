#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSubarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            for (int k = i; k <= j; k++)
            {

                cout << arr[k] << ", ";
            }

            cout << endl;
        }
    }
}

// find the largest sum of all subarray
// brute force O(n^3)
void largestSubarraySum(int arr[], int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int temp = 0;
            for (int k = i; k <= j; k++)
            {
                temp += arr[k];
            }
            if (temp > largestSum)
                largestSum = temp;
            cout << endl;
        }
    }
    cout << "largestSum -> " << largestSum;
}

//Optimize using PreFix Sum
void largestSubarraySum1(int arr[], int n)
{

    //prefix sum
    int prefix[n]={0};
    prefix[0] = arr[0];
    for(int i =1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
 
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int subarraysum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            largestSum = max(subarraysum,largestSum);
        }
    }
    cout << "largestSum -> " << largestSum;
}


// kadane's algorithm


int maximum_subarray_sum(int arr[],int n){
    int current_sum = 0;
    int maximum_sum = 0;

    for(int i=0;i<n;i++){
        current_sum = current_sum+arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        maximum_sum = max(current_sum,maximum_sum);
    }
    cout<<maximum_sum;
    return maximum_sum;
}



//question 
// Sorted Pair Sum
// Given a sorted array and a number x, find a pair in array whose sum is closest to x.

// Input Format

// In the function an integer vector and number x is passed.

// Output Format

// Return a pair of integers.



// Sample Input

// {10, 22, 28, 29, 30, 40}, x = 54


// Sample Output

// 22 and 30


//question 2
// K-Rotate
// Given an integer vector and a value k, your task is to rotate the array k times clockwise.

// Input Format

// In the function an integer vector and number k is passed.

// Output Format

// Return an integer vector.

// Sample Input

// {1, 3, 5, 7, 9}, x = 2


// Sample Output

// {7, 9, 1, 3, 5}


// Explanation

// After 1st rotation - {9, 1, 3, 5, 7}
// After 2nd rotation - {7, 9, 1, 3, 5}






int main()
{
    // int arr[] = {10,20,30,40,50,60,70,80};
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    maximum_subarray_sum(arr, n);
}


//Run length encoding for string compression
// if compressed string is bigger than the original than return original string
//Input = aaabbccddee
//Output = a3b2c2d2e2

//Input = abcd
//output = abcd