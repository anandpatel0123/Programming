#include <iostream>
using namespace std;
int main(){
    string s = "luffy is still joyboy  "; 
    int res,count=0;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]!=' '){
    //         count++;
    //     }else{
    //         if(count>0){
    //             res=count;
    //         }
    //         count=0;
    //     }
    // }
    // if(count>0){
    //     res=count;
    // }
    // cout<<res;

    //2nd Method
    int n=s.size();
    bool flag = true;
    for(int i=n-1;i>=0;i--){
        if(s[i]!=' '){
            flag=false;
            count++;
        }
        else if(flag){
            continue;
        }
        else if(flag==false){
            break;
        }
    }
    cout<<count;
}