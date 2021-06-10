#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Complete the code.

    int a,b;
    cin>>a>>b;
    string n[11] = {"","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<=b;i++){
        
        if(a==i && a<10){
            cout<<n[i]<<endl;
            a++;
            }
         else if(a>9 && a%2==0){
                cout<<"even"<<endl;
                a++;
            }
            else if(a>9)
            {
                cout<<"odd"<<endl;
                a++;
            }
            
        }


        // 2nd One
    
  //  for(int i=a;i<=b;i++)
  //      cout<<((i<=9)?n[i]:((i%2==0)?"even":"odd"))<<endl;
        
    return 0;
}

