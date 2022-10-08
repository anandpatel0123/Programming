#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void spiralPrint(int arr[4][4],int n,int m){

    int s_row = 0,e_row = n-1,s_col = 0,e_col = m-1;
    while(s_col<=e_col and s_row <= e_row){

        //start Row
        for(int col =s_col;col<=e_col;col++){
            cout<<arr[s_row][col]<<" ";
        }
        
        //end col
        for(int row=s_row+1;row<=e_row;row++){
            cout<<arr[row][e_col]<<" ";
        }

        //end row
        for(int col=e_col-1;col>=s_col;col--)
        {
            if(s_row==e_row) break;
            cout<<arr[e_row][col]<<" ";
        }

        //start col
        for(int row=e_row-1;row>=s_row+1;row--){
            //avoid duplicate printing of element
            if(s_col==e_col) break;

            cout<<arr[row][s_col]<<" ";
        }


        // Update the variable so they can point to inner spiral
        s_row++;
        e_row--;
        s_col++;
        e_col--;


    }


}


int main(){
  int arr[4][4] =   {{1,2,3,4},
                    {12,13,14,5},
                    {11,16,15,6},
                    {10,9,8,7}};

    int n=4,m=4;
    spiralPrint(arr,n,m);
}