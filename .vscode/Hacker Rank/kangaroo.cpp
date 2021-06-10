#include<iostream>
using namespace std;
int main(){
    int x1 = 0,v1 = 2,x2 = 5,v2=3;
    if((x1-x2)%(v2-v1) == 0)
        cout<<(x1-x2)/(v2-v1);
    else
    {
        cout<<"NO";
    }
    

}