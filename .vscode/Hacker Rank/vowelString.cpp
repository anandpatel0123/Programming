#include<iostream>
#include<string>
using namespace std;

bool isVowel(char x) {
    return (x == 'a' || x =='e' || x == 'i' || x == 'o' || x == 'u');
}

int main(){
    string s = "bexouijkoaeiik";
    int x,y;
    int k=6;
    int max =0,min=0;
     for(int i=0;i<s.length();i++){
             if(i>=k){
                 if(isVowel(s[i]) && isVowel(s[i-k])){
                     min=min;
                 }
                 else if(isVowel(s[i-k]) && !isVowel(s[i])){
                     min--;
                 }
                 else if(isVowel(s[i]) && !isVowel(s[i-k])){
                     min++;
                 }
             }
             else{
                 if(isVowel(s[i])){
                 min++;
                }
             }
                
         if(max<min){
             max=min;
             x=i-k+1,y=i+1;
             if(i<k){
                 x=0,y=k;
             }
                
         }   
     }
    
    string t="";
     for(int i =x;i<y;i++){
         t = t+s[i];
     }
     cout<<t;
}