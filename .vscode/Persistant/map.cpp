#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    unordered_map<string, int> Alpha;

    Alpha["a"]=1;
    Alpha["b"]=2;
    Alpha["c"]=3;
    Alpha["d"]=4;
    Alpha["e"]=5;

    for(auto i : Alpha){
        cout<<i.first<<"===>>>"<<i.second<<endl;
    }
}