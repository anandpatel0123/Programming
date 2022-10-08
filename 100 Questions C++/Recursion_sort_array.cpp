#include <iostream>
#include<vector>
using namespace std;

void insert(vector<int> &v,int ele){
    if(v.size()==0||ele<=v[v.size()-1]) {
        v.push_back(ele);
        return;
    }
    
    int top = v[v.size()-1];
    v.pop_back();

    insert(v,ele);
    v.push_back(top);
    return;
}

void sortArray(vector<int> &v){
    if(v.size()==0 || v.size()==1) return;

    int top = v[v.size()-1];
    v.pop_back();
    sortArray(v);

    insert(v,top);
    return;

}

int main(){
    vector<int> a = {0,1,5,2,7};
    sortArray(a);
    while(!a.empty()) {
        cout<<a[a.size()-1]<<" ";
        a.pop_back();
    }
}