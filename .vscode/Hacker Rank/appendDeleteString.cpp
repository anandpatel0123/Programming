#include<iostream>
#include<string>
using namespace std;



int main(){
    int k=2;
    string s="y";
    string t="ya";
    int slen = s.length();
    int tlen = t.length();
    int len,count=0;
    if(slen>tlen)
        len=slen;
    else
        len=tlen;

    for(int i=0;i<=len;i++){
        if(s[i]==t[i] && s[i]!='\0' && t[i]!='\0'){
            count++;
        }
        else if(count == slen && count == tlen){
            cout<<"Yes";
            return 0;
        }
        else{
            break;
        }
    }
    int sn,tn;
    sn=slen-count;
    tn=tlen-count;
    
    if(slen<tlen && (count+1)+tlen >=k)
        cout<<"No";
    else if(k>=sn+tn )
        cout<<"Yes";
    else
        cout<<"No";
}