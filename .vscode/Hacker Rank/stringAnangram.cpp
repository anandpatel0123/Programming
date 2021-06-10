#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string c, string d)
{
    if (c.size() != d.size())
        return false;
    int count = 0;
 
    
    for (int i = 0; i < c.size(); i++) {
        count += c[i];
    }
 
   
    for (int i = 0; i < d.size(); i++) {
        count -= d[i];
    }
 
   
    return (count == 0);
}

void anagram(string s[],string q[]){
    int len1= 12;
    int len2=5;
    string s1,s2;
    vector<int> input;
    int count=0;


    for(int x=0;x<len2;x++){
        s1=q[x];
        for(int y=0;y<len1;y++){
            s2=s[y];
            if(isAnagram(s1,s2)){
                count++;
            }
            s2="";
        }
        s1="";
        input.push_back(count);
        count=0;
    }

    for(int i=0;i<input.size();i++)
        cout<<input.at(i);

}

int main(){
    int d;
    cin>>d;
    string dict[d];
    for(int i=0;i<d;i++){
        cin>>dict[i];
    }
    int q;
    cin>>q;
    string query[q];
    for(int i=0;i<q;i++){
        cin>>query[i];
    }
    anagram(dict,query);

    
    
}