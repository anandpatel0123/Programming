#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="ovyvzvptyvpvpxyztlrztsrztztqvrxtxuxq";
    int diff1,diff2,diff;
    vector<int>k;
    string f="Funny";
    string n = "Not Funny";
    for(int i=0;i<s.size()-1;){
        diff1 = (int)s[i] - (int)s[++i];
        if(diff1<0)
            k.push_back(diff1*(-1));
        else
        {
            k.push_back(diff1);
        }
        
        
    }
    diff1=0;
    for(int j=s.size()-1,i=0;j>0;i++){
        diff1 = (int)s[j] - (int)s[--j];
            if(diff1<0){
                diff1 = -1*diff1;
            }
            if(k[i] != diff1){
            cout<<n;
            return 0;
            }
        }    
    cout<<f;
}