#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicates(int *a,int size) {
    vector<int> result;
    unordered_map<int,bool> found;

    for(int i=0;i<size;i++){
        if(found.count(a[i])>0){
            continue;
        }
        found[a[i]]=true;
        result.push_back(a[i]);
    }
    return result;
}


int main(){

    int a[] = {1,2,3,1,3,2,4,6,5,5};
    vector<int> result = removeDuplicates(a, sizeof(a)/sizeof(a[0]));
    for(int i=0; i<result.size();i++){
        cout<<result[i]<<endl;
    }

}