#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(char *s){
    if(s[0] == '\0'){
        return;
    }

    if(s[0] == s[1]){
        int i=0;
        while(s[i] != '\0'){
            s[i] = s[i+1];
            i++;
        }
        removeDuplicate(s);
    }
    removeDuplicate(s+1);
}
int main(){
    char str[] = "aabcca";
    removeDuplicate(str);
    cout<<str;
}