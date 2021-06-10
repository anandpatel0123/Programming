#include<iostream>
using namespace std;

class Employee{
    public:
        string color;

    //pure virtual function and if any class contains pure virtual function becomes abstract class
    virtual void salary() = 0;
};

//if we inherit from abstract class then we need to implement all the pure virtual functions or becomes an abstract class
class car: public Employee{
    public:

    //so if you need salary you need to implement all the pure virtual functions
    void salary(){
        cout<<"salary"<<endl;
    }         
};

int main(){
    // Employee e; //we cannot create an object of abstract class
    car c;
    c.salary();
}