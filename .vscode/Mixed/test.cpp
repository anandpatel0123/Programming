#include<iostream>
using namespace std;
#include <sstream> 
#include <cstdlib>
#include<vector>
#include<string>
int main(){


    // Digonal Difference
    // int d1=0,d2=0,k=2,n=3;
    // int arr[3][3] = {{11,2,4},{4,5,6},{10,8,-12}};
    // for(int i=0;i<n;i++,k--){
        
    //     d1= d1 + (arr[i][i]);
    //     d2= d2 + (arr[i][k]);
    // }
    // int diff;
    // if(d1>d2)
    //     diff=d1-d2;
    // else
    //     diff=d2-d1;
    // cout<<diff;

    //Staircase
    // int n= 5;

    // for(int i =n;i>0;i--){
    //     for(int j=1;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=n;k>=i;k--){
    //         cout<<"#";
    //     }
    //     cout<<endl;
    // }


    // Time Conversion
    // string s = "12:45:54PM";
    // int sum = 0;
    //  string temp="";
    //  string r="";
    //  int len= s.size();
    //  for(int i=0;i<2;i++){
    //     temp = temp + s[i];
    //  }
    //  string am ="";
    //  for(int i=len-2;i<s.size();i++){
    //     am = am + s[i];
    //  }
    //  stringstream cast(temp); 
    //  int n = 0;
    //  cast >> n;
   
    //     if(am[0] == 'P' && am[1] == 'M' &&  n != 12){
    //         sum = n+12;
    //  }
    //  for(int i=2;i<s.size()-2;i++){
    //         r=r+s[i];
    //  }
    //  if(am[0] == 'P' && am[1] == 'M' && n == 12){
    //      cout<<temp<<r<<endl;
    //  }
    //  if(am[0] == 'A' && am[1] == 'M' && n != 12){
    //      cout<<temp<<r<<endl;
    //  }
    //  string z = std::to_string(sum);
     
    //  if(am[0] == 'A' && am[1] == 'M' && n==12){
    //      cout<<"0";

    //  }
     
     
    
    // cout<<z<<r;

    // int x=1,y=2,z=3;
    // string r="";


    // if(abs(z-x) < abs(z-y)){
    //     r="Cat A";
    //     cout<<r;
    // }
    // if(abs(z-x) > abs(z-y)){
    //     r="Cat B";
    //     cout<<r;
    // }
    // if(abs(z-x) == abs(z-y)){
    // r="Mouse C";
    // cout<<r;
    // }

    // long long i=77777;
    // long long n= i*i;
    // cout<<n;

   

    int n;
    cin>>n;
    string *a;
    a=new string[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    delete a;
   

}