#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Wave Print!
// Given a matrix, print it in Reverse Wave Form.

// Input Format:

// Given integer m (number of rows), integer n (number of columns) and 2d vector.

// Output Format:

// Return a linear vector of integers in the required order.

// Examples :

// Input :
// 1 2 3 4

// 5 6 7 8

// 9 10 11 12

// 13 14 15 16

// Output :
// 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1



// Input :
// 1 9 4 10

// 3 6 90 11

// 2 30 85 72

// 6 31 99 15

// Output :
// 10 11 72 15 99 85 90 4 9 6 30 31 6 2 3 1

void wavePrint(vector<vector<int> > v,int r,int c){
    
    int row=0,col=c-1;
    while(col>=0){
        for(int i=row;i<r;i++,row++){
            cout<<v[i][col]<<" ";
        }
        col--;
        for(int i=row-1;i>=0;i--,row--){
            cout<<v[i][col]<<" ";
        }
        col--;
        
    }
}


int main(){
    vector<vector<int> > v = {
    {1,9,4,10},
    {3,6,90,11},
    {2,30,85,72},
    {6,31,99,15}};

    //output 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1
    int row = v.size();
    int col = v[0].size();

    wavePrint(v,row,col);
}