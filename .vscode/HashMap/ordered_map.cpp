#include<iostream>
#include<map>
using namespace std;
int main(){

    map<string, int> m;
    m["jkl"] = 4;
    m["abc"] = 1;
    m["def"] = 2;
    m["ghi"] = 3;
    

    map<string, int>::iterator it = m.begin();
    for(it = m.begin(); it != m.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }




}