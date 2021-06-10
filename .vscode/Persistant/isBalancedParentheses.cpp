#include <string>
#include <vector>
#include <iostream>
using namespace std;

#define $$(expr) { return (expr); }

bool is_balanced(const string str) {
    vector<char> stack;
    
    auto is_paren_open = [](const char c) $$(c == '(' || c == '[' || c == '{');
    auto is_paren_close = [](const char c) $$(c == ')' || c == ']' || c == '}');
    auto paren_convert = [](const char c) $$(
        c == '(' ? ')' : 
        c == '[' ? ']' : 
        c == '{' ? '}' : 
        c == ')' ? '(' :
        c == ']' ? '[' :
        c == '}' ? '{' : 
        0
    );

    for (auto c : str) {
        const bool open = is_paren_open(c);
        const bool close = is_paren_close(c);

        if (!open && !close) {
            return false;
        }

        if (open) {
            stack.push_back(c);
        }

        if (close) {
            if (stack.size() > 0) {
                auto top = stack.back();
                if (top != paren_convert(c)) {
                    return false;
                }
                stack.pop_back();
            } else {
                return false;
            }
        }
    }

    return stack.size() == 0;
}
int main(){
    string str;
    cin>>str;

   if(is_balanced(str)){
       cout<<"True";
   }else{
       cout<<"False";
   }

}