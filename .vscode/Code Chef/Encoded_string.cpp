#include<iostream>
#include <string>
using namespace std;
int main(){
    string p;
    int t,n;
    cin>>t;
    int count=16;
    for(int i=0;i<t;i++){
        cin>>n>>p;
        int x=0;
        for(int k=0;k<n/4;k++){
            string s="abcdefghijklmnop";
            for(int j=0;j<4;j++){
            int a=(p[x]-48);
            if(a==0){
                int temp = count/2;
                int temp1 = count-temp;
                s.erase(temp1,count-1);
                count = count-temp;
            }else{
                int temp =count/2;
                s.erase(0,temp);
                count=count-temp;
            }
            x++;
        }
        count=16;
        cout<<s;
        }
        cout<<endl;
    }
}