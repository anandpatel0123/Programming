// Majority element
// if it appears more than n/2, n is size of array

//Moore's Voting
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& A) {
        int ele = A[0];
        int count=1;
        
        for(int i =1;i<A.size();i++){
            if(A[i]==ele){
                count++;
            }
            else{
                count--;
                if(count==0){
                    ele=A[i];
                    count=1;
                }
            }
        }
        
        // we cannot assume the majoprity of element it will be there
        int count2=0;
        for(int i=0;i<A.size();i++){

            if(A[i]==ele){
                count2++;
            }
        }
        if(count2>A.size()/2) return ele;
        else return -1;
    }
};