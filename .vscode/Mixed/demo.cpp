#include<bits/stdc++.h>
#include <iostream> 
#include <string> 
#include<sstream>
using namespace std;
int main()
{
    // string s;
    // string s1;
    // cin>>s>>s1;

    // cout<<s.length()<<" "<<s1.length()<<endl;
    // cout<<s+s1<<endl;
    // char a=s[0],b=s1[0];
    // swap(s[0],b);
    // swap(s1[0],a);
    // cout<<s<<" "<<s1;

//     stringstream ss("23,4,56");
// char ch;
// int a, b, c;
// ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
// cout<<a<<" "<<b<<" "<<c;

 
        
// std::string input = "abc,def,ghi";
// std::stringstream ss(input);
// std::string token;

// while(std::getline(ss, token, ',')) {
//     std::cout << token << '\n';
// }



    //Enter anand and newline and patel
    //anand
    //blank line
    //patel

    // string s,s1,s2;
    // getline(cin,s);
    // getline(cin,s1);
    // getline(cin,s2);

    // cout<<s<<" "<<s1<<" "<<s2;

    string str; 
    int t = 4; 
    while (t--) 
    { 
        getline(cin, str); 
  
        // Keep reading a new line while there is 
        // a blank line 
        while (str.length()==0 ) 
            getline(cin, str); 
  
        cout << str << " : newline" << endl; 
    } 




}
