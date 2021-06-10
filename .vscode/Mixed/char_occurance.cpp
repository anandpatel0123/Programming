
#include <iostream>
#include <cstring>

using namespace std;

// Complete the alternatingCharacters function below.
int main() {
    string s;
    cin>>s;
    int x=1,y=0;
    string temp1,temp2;
    int len=s.length();


    for(int i=0;i<len;i++){
        
        temp1=s.substr(i,1);
        temp2=s.substr(x,1);
        if(temp1==temp2){
            y++;
            x++;
            temp1=s.substr(x,1);
        }
        else{
            temp1 = s.substr(x,1);
            x++;
        }
    }
    cout<<y;

}