#include <iostream>
#include<vector>
using namespace std;
int main() {
    string input1;
    cin>>input1;
   int t[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   int temp;
   int len = input1.length();
   int count = 0;
   int k;
   for(int i = 0,j=97;i<len;j++, i++) {
       temp = input1[i];
       k=temp-97;
       t[k]++;
       }
      int s[len];
    for(int j=0;j<len;j++){
        if(t[j]>0){
            s[j] = t[j];       }
    }
   return s;
}