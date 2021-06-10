#include<iostream>
using namespace std;
int main(){
     int key,usb,cost;
     //cin>>cost>>key>>usb;
     cost = 10,key = 2,usb = 3;
     int keyboards[]={3,1};
     int drives[] = {5,2,8};
     int len1 = sizeof(keyboards)/sizeof(keyboards[0]);
     int len2= sizeof(drives)/sizeof(drives[0]);
     int spent,temp[len2];

     for(int i=0;i<len1;i++){
         for(int j=0;j<len2;j++){
             temp[j] = key*keyboards[i] + usb*drives[j];             
         }
     }
     int max;
     for(int i=0;i<len2;){
         if(temp[i]>temp[i++]){
             max=temp[i];
         }
         if(cost>max){
             spent = -1;
         }
         else{
             spent = max;
         }
     }

     cout<<max;
}