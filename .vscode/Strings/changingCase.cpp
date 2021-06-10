#include<iostream>
#include<string>
using namespace std;
class str{
    public:
        string a;
};

void upperCase(class str *a){
    for(int i=0;i<a->a.length();i++){
        a->a[i]= a->a[i]-32;
    }
    for(int i=0;i<a->a.length();i++){
        cout<<a->a[i];
    }
}

void lowerCase(class str *a){
    for(int i=0;i<a->a.length();i++){
        a->a[i]= a->a[i]+32;
    }
    for(int i=0;i<a->a.length();i++){
        cout<<a->a[i];
    }
}

int main(){
    str obj = str();
    obj.a = "WELCOME";

    lowerCase(&obj);

}