
#include <bits/stdc++.h> 
#include<iostream>
#include<sstream>
using namespace std; 



int main() 
{   string s,temp,t1="",t2="",t3="";
	getline(cin,s);

	string s1,s2;
	cin>>s1>>s2;

	stringstream ss(s);
	bool flag1=true,flag2=true;
	while(ss >> temp){
		if(flag1){
			if(temp==s1){
				flag1=false;
				continue;
			}
				
			t1=t1+temp+" ";
			
		}
		else if(flag2){
			if(temp==s2){
				flag2=false;
				continue;
			}
				
			t2=t2+temp+" ";
		}
		else{
			t3=t3+" "+temp;
		}
	}

	string final=t1+s2+" "+t2+" "+s1+" "+t3;
	cout<<final;

	return 0; 
}