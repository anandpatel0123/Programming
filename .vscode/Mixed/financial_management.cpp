#include<iostream>
using namespace std;

float financial(float exp[]){
        int i,sum=0;
        for(i=0;i<12;i++){
                sum+=exp[i];
        }
        return sum/12;
}

int main(){

    float exp[11] ={};
    int i;
    for(i=0;i<=11;i++){
        cout<<"Month "<<++i<<" : ";
        cin>>exp[--i];
    }
    cout<<"Average Expenses :"<<financial(exp);

}