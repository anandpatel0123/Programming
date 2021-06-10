#include<iostream>
#include<string>
using namespace std;

class array1{
    public:
        string s;
};

//finding duplicates in a string
void findingDuplicate(array1 str){
    long h=0,x=0;
    for(int i=0;i<str.s.length();i++){
        x=1;
        x=x<<(str.s[i]-97);
        if(x&h>0)
            cout<<str.s[i];
        else
        {
            h=x|h;
        }
        
    }
}

int main(){
    array1 obj = array1();
    obj.s = "finding";
    findingDuplicate(obj);
}