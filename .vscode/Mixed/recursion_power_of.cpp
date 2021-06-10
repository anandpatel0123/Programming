#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
        return 1;
    else
    {
        return pow(m,n-1)*m;
    }
    
}

//Improved version

int Ipow(int m,int n){

    if(n==0)
        return 1; 
    if(n%2==0){
        return Ipow(m*m,n/2);
    }
    else
    {
        return m*Ipow(m*m,n/2);
    }
    
    
}

//Iterative version

int Itpow(int m,int n){
    int i,result=1;
    if(n==0)
        return 1;
    else
    {
        for ( i = 0; i < n; i++)
        {
            result = result*m;
        }
        return result;
        
    }
    
}

int main(){
    cout<<Itpow(5,3);
}