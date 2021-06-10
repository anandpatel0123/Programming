#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    else
    {
        return fact(n-1)*n;
    }
    
}

int Lfact(int n){
    int s=1;
    if(n==0)
        return 1;
    else if(n>0)
    {
        for(int i=1;i<=n;i++){
            
            s=s*i;
        }
        return s;
    }
    else{
        for(int i=-1;i>=n;i--){
            
            s=s*i;
        }
        if(n%2!=0){
            return s;
        }
        else{
            return s;
        }
        
    }       
}

int main(){
    int n;
    cin>>n;
    cout<<Lfact(n);
}