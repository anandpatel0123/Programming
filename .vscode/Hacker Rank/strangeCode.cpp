#include<iostream>
using namespace std;


long strangeCounter(long n) {
    int v=0,t;
    for(int i=1;i<=n;){
        t=i;
        v=i+2;
        for(int j=i;v>=1;j++){
            
            if(t==n)
            return v;
            v--;
            t++;
            
        }
        i=t;
        
    }
    return 0;


}