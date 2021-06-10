#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int N,K,D,A,t=0;
for(int i=1;i<=n;i++){
    cin>>N>>K>>D;
       for(int j=1;j<=N;j++)
       {
           cin>>A;
           t=t+A;
       }
       t=(t-t%K)/K;
       if(t>D)
        cout<<D<<endl;
       else
        cout<<t<<endl;
       t=0;
}
return 0;
}
