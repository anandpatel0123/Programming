//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

void stockSpanner(int prices[],int n,int span[]){
	stack <int> s;
	s.push(0);

    span[0] =1;
    for(int i=1;i<=n-1;i++){
        int currentPrice = prices[i];

        //topmost element that is higher than the current prices
        while(!s.empty() and prices[s.top()]<=currentPrice){
            s.pop();
        }

        if(!s.empty()){
            int prev_highest = s.top();
            span[i] = i-prev_highest;
        }
        else{
            span[i] = i+1;
        }
        //push this element into the stack
        s.push(i);
    }
}

int main(){
    int prices[] = {100,80,60,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[100000] = {0};
    stockSpanner(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}


// Next Greater Element
// Given an array, return the Next Greater Element for every element. The Next greater 
// Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

// Input Format

// In the function an integer vector is passed

// Output Format

// Return an integer vector containing the next greater element for each element

// Sample Input

// v = { 4, 5, 2, 25 }
// Sample Output

// { 5, 25, 25, -1 }