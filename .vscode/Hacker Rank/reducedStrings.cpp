#include<iostream>
using namespace std;
int main(){
    string s[] = {"b","a","a","b"};
    for(int i=0,j=1;i<sizeof(s)/sizeof(s[0]);i++){
        if(s[i]==s[j++]){
            s[i] = "";
            s[j] = "";
        }
    }
    cout<<s;
}