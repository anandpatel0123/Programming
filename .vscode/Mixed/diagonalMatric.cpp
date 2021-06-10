#include<iostream>
using namespace std;

class matrix{
    private:
        int n;
        int *a;
    public:
        matrix(int n){
            this->n=n;
            a=new int[n];
        }

        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~matrix();

};

void  matrix::set(int i,int j,int x){
    if(i==j)
        a[i-1]=x;
}

int matrix::get(int i,int j){
    if(i==j)
        return a[i-1];
    else return(0);
    
}

void matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                cout<<a[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

matrix::~matrix(){
    delete[]a;
}

int main(){
    matrix a(4);
    a.set(1,1,5);a.set(2,2,8);a.set(3,3,10);a.set(4,4,12);
    a.display();

}