#include<iostream>
using namespace std;

class bus{
    public:
    void print(); // we can't define the friend functions here we need define outside the class
};



class truck{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
    friend void bus :: print(); 
    friend void test();
};

void test(){
    truck t;
    t.x=10;
    t.y=20;

    cout<<t.x<<" "<<t.y<<endl;
}

void bus :: print(){
    truck t;
    t.x=10;
    t.y=20;

    cout<<t.x<<" "<<t.y<<endl;
}

int main(){
    bus b;
    b.print();
 
    test();
}

