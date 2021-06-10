#include <iostream>
using namespace std;
void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}
void fun2(int n){
	if(n>0){
		fun2(n-1);
		cout<<n<<endl;
	}
}
int main(){
    int x = 3;
    cout<<"Function 1"<<endl;
    fun1(x);
    cout<<"Function 2"<<endl;
    fun2(x);
    return x;
}

