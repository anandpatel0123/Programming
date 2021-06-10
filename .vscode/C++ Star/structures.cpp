#include<iostream>
using namespace std;

//Question: You have to create a struct, named Student, representing the student's details, and store the data of a student.
// Input Format

// Input will consist of four lines.
// The first line will contain an integer, representing age.
// The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
// The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
// The fourth line will contain an integer, representing the standard of student.

// Output Format

// Output will be of a single line, consisting of age, first_name, last_name and standard, each separated by one white space.

// Sample Input

// 15
// john
// carmack
// 10

// Sample Output

// 15 john carmack 10


struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1;
    r1.length =10;
    r1.breadth = 20;
    unsigned int a =-1;
    cout<<a;

    cout<<"Area of rectangle: "<<r1.length*r1.breadth<<endl;
}