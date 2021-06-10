#include<iostream>
using namespace std;

int fun(int n[], int l){

int pair = 0;

for(int i = 0;i<l;i++){

    for(int j=i;j<l;j++){
      
      if(abs(n[i]-n[j])==2){
            pair++;
      }

    }
 
}

return pair;
}

int main(){
    int n,m;
    cin>>n>>m;
    int result = fun(n,m);
    cout<<result<<endl;
    
}