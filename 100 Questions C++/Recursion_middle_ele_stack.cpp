#include <iostream>
#include <stack>
using namespace std;


stack<int> solve(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return s;
    }        

    int top = s.top();
    s.pop();

    solve(s,k-1);
    s.push(top);
    return s;
}

stack<int> midDel(stack<int> &s,int size){
    // In stack is empty,
    if(s.size() == 0) return s;
    int k = (size/2)+1;
    solve(s,k);
    return s;
}


int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    midDel(s,s.size());
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}