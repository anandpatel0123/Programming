#include<bits/stdc++.h>
#include <iostream> 
#include <string> 
#include<sstream>
using namespace std;

// Input:
// Alice,10:23:02,13:04:45
// Bob,09:00:43,12:03:21
// 11:00:56
// Output:
// Number of employees present in the office at the point of time.
// Explanation:
// In these examples, o/p will be 2 (Reason: Alice and Bob both are inside the office at time
// 11:00:56).

int main()
{
    int n;
    cin>>n;
    string s;
    int t,count=0;
    string s1="",srr[n];

    for(int j=0; j<n;j++){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
            s1=s1+s[i];
            }
            if(s1.length()==6){
            srr[j]=s1;
            s1="";
            break;
            }
       
        }
        s="";
    }

    int time1,time2;
    string time,t1="";
    cin>>time;

    for(int i=0;i<time.length();i++){
        if(isdigit(time[i])){
            t1=t1+time[i];
        }
    }
    time1=stoi(t1);

    for(int i=0;i<n;i++){
        time2=stoi(srr[i]);
        if(time2<time1){
            count++;
        }
    }

    cout<<count;


    
}
