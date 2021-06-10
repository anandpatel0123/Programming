#include<iostream>
using namespace std;
class matrix{
    private:
        int n;
        int *a;
    public:
        matrix(int n){
            this->n=n;
            a=new int[(n+1)*n/2];
        }
        
        void set(int i,int j,int x);
        int get(int i,int j);
        ~matrix(){
            delete []a;
        }
        void display();
};

void matrix::set(int i,int j,int x){
    int index=0;
    if(i<=j){
        index = ((j-1)*j)/2 + i-1;
        a[index] = x;
    }
}

int matrix::get(int i,int j){
    int index;
    if(i<=j){
        index = ((j-1)*j)/2 + i-1;
        return a[index];
    }
    return(0);
}
void matrix::display(){
    int index=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                index = ((j-1)*j)/2 + i-1;
                cout<<a[index]<<" ";
            }
            else cout<<"0 ";
            index=0;
        }
        cout<<endl;
    }
}

int main(){
    matrix a(5);
    a.set(1,1,11);a.set(1,2,12);a.set(2,2,22);a.set(1,3,13);a.set(2,3,23);
    a.set(3,3,33);a.set(1,4,14);a.set(2,4,24);a.set(3,4,34);a.set(4,4,44);
    a.set(1,5,15);a.set(2,5,25);a.set(3,5,35);a.set(4,5,45);a.set(5,5,55);

    a.display();
} 