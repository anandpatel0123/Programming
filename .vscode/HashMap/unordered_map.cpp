#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string,int> map1;

    //insert
    pair<string,int> p("abc",1);
    cout<<p.first<<p.second<<endl;
    map1.insert(p);
    map1["def"]=2;

    //find or access
    cout<<map1["abc"]<<endl;
    cout<<map1.at("abc")<<endl;

    //size
    cout<<"size : "<<map1.size()<<endl;
    //cout<<map1.at("ghi")<<endl; // error and crash
    cout<<map1["ghi"]<<endl; //it will not give an error, rather it will insert that and intilize with 0
    cout<<"size : "<<map1.size()<<endl;

    //check presence
    if(map1.count("ghi")>0){
        cout<<"ghi is present"<<endl; 
    }

    //erase or delete
    map1.erase("ghi");
    cout<<"size : "<<map1.size()<<endl;
    if(map1.count("ghi")>0){
        cout<<"ghi is present"<<endl; 
    }

}