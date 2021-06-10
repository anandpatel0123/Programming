#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

int main(){
    unordered_set<string> s;
    s.insert("hello");
    s.insert("anand");
    s.insert("ap");
    s.insert("b");
    s.insert("c");
    s.insert("d");
    s.insert("e");

    string f;
    cin>>f;
    unordered_set<string>::iterator it = s.find(f);

    if(it != s.end()) {
        cout<<"found";
    }else{
        cout<<"not found";
    }
}