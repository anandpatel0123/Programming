#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string encode_string(string s){
    string res="";
    
    for(int i=0;i<s.size();i++){
        int count= 1;
        while(i<s.size()-1 && s[i]==s[i+1]){
            count++;
            i++;
        }
        res+=s[i];
        res+=to_string(count);
    }
    if(res.size()<s.size()){
        return res;
    }else {
        return s;
    }
}

int main(){
    string s;
    s = "abcd";

    cout<<encode_string(s);

}