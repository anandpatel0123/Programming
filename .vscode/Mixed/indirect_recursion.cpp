#include<iostream>
using namespace std;

 void funB(int n);
 void funA(int n){
     if(n>0){
         cout<<n<<" ";
         funB(n-1); //calling funB() from funA()
     }
 }

 void funB(int n){
     if(n>1){
         cout<<n<<" ";
         funA(n/2); //calling funA() from funB()
     }
 }

 int main(){
     funA(20); //calling funA()
 }