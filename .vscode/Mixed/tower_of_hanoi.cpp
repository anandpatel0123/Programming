#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void toh(int n,char a,char b,char c){
   
    
    if(n>0){
        
        toh(n-1,a,c,b);
        cout<<" move disk from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);

    }
}

int main(){
    // toh(4,'A','B','C');
string k;
string l = " world";
double d=4;
double a=5;
cout<<fixed<<setprecision(1)<<d+a;

}