#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;

    getline(cin,str); //Input the string with spaces


    cout<<str.length()<<endl;
    cout<<str<<endl;
    cout<<str[0]<<str[6]; // display the 0th char and 6th char of the string
}