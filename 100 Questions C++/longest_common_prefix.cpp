#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    string s = strs[0];
    string res="";
    for(int i=0;i<s.size();i++){
        for(int j = 1;j<strs.size();j++){
            if(s[i]!=strs[j][i]){
                return 0;
            }
        }
        res+=s[i];
    }
}