#include<iostream>
using namespace std;

class vehical{
    private:
        int max_speed;
    protected:
        int num_tyres;
    public:
        string color;

    vehical(){cout<<"Vehicle constructor called! "<<endl;}
    ~vehical(){cout<<"Vehicle destructor called! "<<endl;}

};

class car : public vehical {
    public:
        int numGears;


        void print(){
            cout<<"NumTyres : "<<num_tyres<<endl;
            cout<<"color : "<<color<<endl;
            cout<<"NumGears : "<<numGears<<endl;
        }

    car(){cout<<"car constructor called! "<<endl;}
    ~car(){cout<<"car destructor called! "<<endl;}
};


int main(){
    vehical v;
    v.color = "Blue";
    // v.max_speed = 100;   we cannot acess private members and protected members
    // v.num_tyres = 4;

    car c;
    c.color = "Black";
   // c.num_tyres = 4;  we cannot acess protected members outside of class, can only access child classes
    c.numGears = 5;
    //c.print();
}