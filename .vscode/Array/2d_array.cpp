#include<iostream>
using namespace std;

int main(){
    int a[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int *b[3];
    int **c;

    


    b[0]=new int [4];
    b[1]=new int [4];
    b[2]=new int [4];

    

    c=new int*[3];
    c[0]=new int[4];
    c[1]=new int[4];
    c[2]=new int[4];
for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


}