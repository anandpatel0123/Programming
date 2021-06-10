#include<iostream>
using namespace std;
class matrix{
    private:
        int n;
        int *a;
    public:
        matrix(){
            n=2;
            a=new int[2*(2+1)/2];
        }
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
    if(i>=j){
        index = ((i-1)*i)/2 + j-1;
        a[index] = x;
    }
}

int matrix::get(int i,int j){
    int index;
    if(i>=j){
        index = ((i-1)*i)/2 + j-1;
        return a[index];
    }
    return(0);
}
void matrix::display(){
    int index=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                index = ((i-1)*i)/2 + j-1;
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
    a.set(1,1,11);a.set(2,1,21);a.set(2,2,22);a.set(3,1,31);a.set(3,2,32);
    a.set(3,3,33);a.set(4,1,41);a.set(4,2,42);a.set(4,3,43);a.set(4,4,44);
    a.set(5,1,51);a.set(5,2,52);a.set(5,3,53);a.set(5,4,54);a.set(5,5,55);

    a.display();
}