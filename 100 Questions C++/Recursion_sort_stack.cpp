#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s,int ele){
    if(s.size()==0 || s.top()>=ele){
        s.push(ele);
        return;
    }
    int top = s.top();
    s.pop();
    insert(s,ele);
    s.push(top);
}

void sortStack(stack<int> &s){
    if(s.size()==0||s.size()==1){
        return;
    }
    int top = s.top();
    s.pop();
    sortStack(s);
    insert(s,top);
    
}

int main() {
    stack<int> s;
    s.push(0);
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(9);
    s.push(6);

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}