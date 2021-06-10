#include<iostream>
using namespace std;

//Function Overloading
class add{
    int x;
    int y;

    public:
    int ad(int x, int y) {
        return x + y;
    }

    float ad(double x, double y) {
        return x + y;
    }

};

//Operator Overloading
class fraction{
    int numerator,denominator;
    public:

        fraction(int numerator,int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

    void print(){
            cout<<this->numerator<<" / "<<this->denominator<<endl;
        }

    fraction operator+(fraction &f2){
        int lcm = denominator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + (y*f2.numerator);
            int den = denominator*f2.denominator;

            fraction fnew(num,den);
            return fnew;
            
    }
};




int main(){
    add a;
    cout<<a.ad(5,3)<<endl;
    cout<<a.ad(3.5,5.2)<<endl;

    fraction f1(5,9);
    fraction f2(3,5);
    fraction f3 = f1 + f2;

    f1.print();
    f2.print();
    f3.print();

}