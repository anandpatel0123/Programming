#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    
    unordered_map<string,int> map1;

    map1["abc"] = 1;
    map1["abc1"]= 2;
    map1["abc2"]= 3;
    map1["abc3"]= 4;
    map1["abc4"]= 5;
    map1["abc5"]= 6;

    unordered_map<string,int>::iterator it;
    
    for(it = map1.begin(); it != map1.end();it++){  
            cout<<it->first<<" "<<it->second<<endl;
    }
    it=map1.find("abc");
    if(it != map1.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }


//     //find in UnorderedMap, find function returns the address of that key

//     unordered_map<string,int>::iterator it2 = map1.find("abc");
//     map1.erase(it2); // we can give iterator to an erase function, bcoz erase funct'n uses iterator



//    //Iterators in vectors
//    vector<int> v;
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//    v.push_back(40);
//    v.push_back(50);

//    vector<int>::iterator it1 = v.begin();
//    while(it1 != v.end()){

//        cout << *it1 <<endl;

//        it1++;
//    }

//   // v.erase(v.begin(),v.end());

//    it1 = v.begin();
//    while(it1 != v.end()){

//        cout << *it1 <<endl;

//        it1++;
//    }




}