#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class fraction{
    public:
        int numerator,denominator;

        fraction(int numerator,int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void print(){
            cout<<this->numerator<<" / "<<this->denominator<<endl;
        }

        void simplify(){
            int gcd=1;
            int j=min(this->numerator,this->denominator);
            for(int i=1;i<=j;i++){
                if(this->numerator % i==0 && this->denominator % i==0){
                    gcd=i;
                }
            }
            this->numerator=this->numerator/gcd;
            this->denominator=this->denominator/gcd;
        }


        // we want to F3 = f1.add(f2)
        fraction add(fraction const &f2){
            int lcm = denominator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + (y*f2.numerator);

            // numerator = num;
            // denominator = lcm;

            fraction fNew(num,lcm);
            fNew.simplify();
            return fNew;
        }

        //now we don't want to use add function we want to use + operator
        fraction operator+(fraction const &f2){
            int lcm = denominator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + (y*f2.numerator);

            // numerator = num;
            // denominator = lcm;

            fraction fNew(num,lcm);
            fNew.simplify();
            return fNew;
        }


        void multiply(fraction const &f2){
            numerator = numerator * f2.numerator;
            denominator = denominator * f2.denominator;
            simplify();
        }
};

int main(){
    fraction f1(10,2);
    fraction f2(15,4);
    fraction f3 = f1+f2;
    f1.print();
    f2.print();
    f3.print();
}