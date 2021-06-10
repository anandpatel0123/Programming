#include<string>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int arr[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char temp;
    for(int i=0; i<str.length();i++){
        temp=str.at(i);
        arr[temp-97]++;
    }
    char s;
    sort(arr,arr+str.length());
    for(int i=0; i<26;i++){
        if(arr[i]>0){
            s=i+97;
            while(arr[i]){
                cout<<s;
                arr[i]--;
            }
                
        }
       
    }
    

}
    




