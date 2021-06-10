#include<iostream>
using namespace std;
class matrix{
    private:
        int n;
        int *a;
    public:
        matrix(int n){
            this->n=n;
            a=new int[2*n-1];
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
        index = j-i;
        a[index] = x;
    }
    else if(i>j){
        index = n+i-j-1;
        a[index] =x;
    }
}

int matrix::get(int i,int j){
    int index;
    if(i<=j){
        index = j=i;
        return a[index];
    }
    else{
        index = n+i-j-1;
        return a[index];
    }
    
}
void matrix::display(){
    int index=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                index = j-i;
                cout<<a[index]<<" ";
            }
            else if(i>j){
                index = n+i-j-1;
                cout<<a[index]<<" ";
            }
            index=0;
        }
        cout<<endl;
    }
}

int main(){
    matrix a(5);
    a.set(1,1,2);a.set(1,2,3);a.set(1,3,4);a.set(1,4,5);a.set(1,5,6);
    a.set(2,1,7);a.set(3,1,8);a.set(4,1,9);a.set(5,1,10);
    // a.set(4,4,44);
    // a.set(1,5,15);a.set(2,5,25);a.set(3,5,35);a.set(4,5,45);a.set(5,5,55);

    a.display();
} 