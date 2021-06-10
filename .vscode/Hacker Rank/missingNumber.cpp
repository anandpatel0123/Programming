#include <iostream>
#include<vector>
using namespace std;


// vector<int> miss;
//         sort(arr.begin(), arr.end());
//         sort(brr.begin(), brr.end());
//         int size = brr.size();
//         int missing = brr[size];
//         int i,j=0;
//         for(i=0;i<size;i++){
//             if(brr[i]!=arr[j]){
//                 missing = brr[i];
//                 if(miss.empty()){
//                     miss.push_back(missing);
//                     continue;
//                 }
//                 else if(miss.back() != missing){
//                     miss.push_back(missing);
//                     continue;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//             j++;
//         }

//     return miss;


int main(){
    int n=10,m=13;
    int arr[10] = {203,203,204,204,205,205,206,206,207,208};
    int brr[13] = {203,203,204,204,204,205,205,205,206,206,206,207,208};
    int b[208] = {0};
    int a[208] = {0};
    vector<int> r;

    for(auto i=0;i<n;i++){
        a[arr[i]]++;
    }
    for(auto i=0;i<m;i++){
        b[brr[i]]++;
    }
    for(int j=203;j<209;j++){
        if(a[j] < b[j]){
            r.push_back(j);
            cout<<j<<" ";
        }
    }
    
}
