#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int n=8;
    int arr[] = {1,2,3,-1,-2,-3,0,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    float plus=0,minus=0,zero=0;

    for(int i=0;i<len;i++){
        if(arr[i]>0){
            plus++;
        }
        if(arr[i]<0){
            minus++;
        }
        if(arr[i]==0){
            zero++;
        }

    }
    
    cout<<fixed<<setprecision(6)<<plus/len<<endl;
    cout<<fixed<<setprecision(6)<<minus/len<<endl;
    cout<<fixed<<setprecision(6)<<zero/len;

}