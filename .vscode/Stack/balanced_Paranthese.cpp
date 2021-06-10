#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin>>s;

    int len = s.length();

    stack<char> st;

    for(int i = 0; i < len;i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '(' || s[i] ==')' || s[i] == ']' || s[i] == '}'){
            if(s[i]=='{' || s[i]=='[' || s[i]== '('){
            st.push(s[i]);
            continue;
        }
            
        else if(s[i] ==')' || s[i] == ']' || s[i] == '}'){
            if(s[i] == ')' && st.top() == '('){
                st.pop();
                continue;
            }
            else if(s[i] == ']' && st.top() == '['){
                st.pop();
                continue;
            }
            else{
                st.pop();
                continue;
            }
            
        }
        else if(s[i] != st.top()){
            cout<<st.top()<<endl;
            cout<<"Paranthesis are not Balanced"<<endl;
            return 0;
        }
        }

    }
    cout<<"Paranthesis are Balanced";
}

