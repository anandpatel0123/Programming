#include<bits/stdc++.h>
using namespace std;
string convert(string s, int numRows) {
        
        if(numRows<=1) return s;
        
        string A[numRows];
        int step=1;
        int row = 0;
        for(int i =0;i<s.size();i++){
            A[row].push_back(s[i]);
            
            if(row==0) step= 1;
            else if(row==numRows-1) step=-1;
            
            row=row+step;
        }
        
        s= "";
        for(int i=0;i<numRows;i++){
            s+=A[i];
        }
        return s;
        
    }