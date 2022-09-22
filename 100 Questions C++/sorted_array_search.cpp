#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void search(vector<vector<int> > v,int r,int c,int key){
    int row=0,col=c-1;
    while(c>=0 && row<r){
        if(v[row][col]==key){
            cout<<"found at index : "<<row<<", "<<col;
            return;
        }else{
            if(key>v[row][col]){
                row++;
            }else{
                col--;
            }
        }
    }
    cout<<"Not Found";
}

int main(){
    vector<vector<int> > v = {{10,20,30,40},{15,25,35,45},{27,29,39,48},{32,33,39,50}};

    int row = v.size();
    int col = v[0].size();
    int key = 42;
    search(v,row,col,key);
}