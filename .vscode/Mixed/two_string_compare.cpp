#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
int len,x=0;
    int len1 =s1.length();
    int len2 =s2.length();
    if(len1>len2)
        len=len1;
    else
        len=len2;

    string temp1,temp2;


    for(int i=0;i<len;i++,x++){
            if(s1[i]==s2[x]){
            cout<<"YES";
                return 0;}

        
    }
    cout<<"NO";
}