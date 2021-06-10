#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main(){
    string s="wclwfoznbmyycxvaxagjhtexdkwjqhlojykopldsxesbbnezqmixfpujbssrbfhlgubvfhpfliimvmnny";
    int L = s.length();
    int r=sqrt(L);
    int temp;
    int c=r+1;
    string z;
    for(int i=0;i<c;i++){
        for(int j=i;j<L;)
        {
            z=z+s[j];
            j=j+c;
        }
        z=z+' ';
    }
    cout<<z;

    
    


}