#include<iostream>
using namespace std;

//Enum is used to declare our own data type 
enum day {mon=1, tue, wed, thu, fri,sat,sun};
enum Gender {Male=1,Female};
enum Month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

//Typedef is udef for better readability
typedef float marks;
typedef int roll;

int main(){
    marks m1=10.5;
    marks physics = 99.5;
    cout<<physics<<endl;
 }