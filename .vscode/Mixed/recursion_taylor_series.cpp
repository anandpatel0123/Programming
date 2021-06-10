#include<iostream>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
    
}

// Improvised taylor

double Ie(int x,int n){
    double s=1;
    for(;n>0;n--){
        s=1+(x*s)/n;
    }
    return s;
}

int main(){
    cout<<Ie(1 ,10);
}