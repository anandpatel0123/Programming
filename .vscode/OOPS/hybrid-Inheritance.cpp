#include<iostream>
using namespace std;

class vehical{
    private:
        int maxSpeed;
    protected:
        int numTyres;
    public:
        string color;


        vehical(){
           // cout<<"Vehicle default constructor<<"<<endl;
         }

        virtual void print() {
            cout<<"Vehicle"<<endl;
        } 

        vehical(int z){
            //cout<<"Vehicle's Parametrized constructur "<<z<<endl;
            //maxSpeed = z;
        }

        ~vehical(){
           // cout<<"Vehicle default destructor"<<endl;
        }
};

class car : virtual public vehical{
    public:
        int numGears;

        car():vehical(3){
           // cout<<"Car default constructor<<"<<endl;
        }
        ~car(){
            //cout<<"Car default destructor"<<endl;
        }

        void print(){
            // cout<<"NumTyres : "<<numTyres<<endl;
            // cout<<"Color : "<<color<<endl;
            // cout<<"NumGears : "<<numGears<<endl;
            cout<<"Car"<<endl;
        }
};

class truck : virtual public vehical{
    public:
        truck() : vehical(4){
            //cout<<"Truck's default constructor<<"<<endl;
        }
};

class bus : public car, public truck{
        public:
            bus() : vehical(5){
                //cout<<"Bus default constructor<<"<<endl;
            }
    
};


int main(){
    bus b;

    vehical v;
    v.print();

    car c;
    c.print();

    vehical *v1 = new vehical();
    vehical *v2 = &c;

    v1->print();
    v2->print();

      
}