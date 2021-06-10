#include<iostream>
using namespace std;
int main(){
    int n = 12;
    int m = 1;

    
    if (m < n)  { 
        return n;
    }
    int res = 1;
    int x,y;

    x=n + m - 1;
    y=n - 1;
  
    if(y > x - y) 
        y = x - y; 
  
    for (int i = 0; i < y; ++i) { 
        res *= (x - i); 
        res /= (i + 1); 
    }
  return res; 

}