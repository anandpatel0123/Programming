#include<iostream>
#include <string> 
using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(long p, long q) {
    string invld ="INVALID RANGE";
    long long temp,n,d,count=0;
    int l,r;
    bool result=false;
    string left="",right="",number;
    
    for(long long i=p;i<=q+1;i++){
        if(i==1 || i==9){
            result =true;
            cout<<i<<" ";
        }
        else
        {
        n = i*i;
        temp=n;
        while(temp!=0)
        {
            count++;
            temp/=10;
        }
        d=count;
        count=0;
        if(i>8){
            number = to_string(n);
            for(int j=0;j<d/2;j++){
                left = left+number[j];
            }
            for(int k=d/2;k<d;k++){
                right = right+number[k];
            }
            if(left!="" || right !=""){
                l=stoi(left);
                r=stoi(right);
            }
            if(l+r==i){
                cout<<i<<" ";
                result =true;
            }
            left="",right="";
            
        }
        
        
        }
        n=0;   
    }
    if(result == false){
            cout<<invld;
        }
    
}

int main(){
    kaprekarNumbers(1,99999);
}