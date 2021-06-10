#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

using namespace std;
    
    // Declare second integer, double, and String variables.
    int j;
    double k;
    string str;
    
    // Read and save an integer, double, and String to your variables.

    cin>>j;
    cin>>k;
    cin.ignore();  //ignores an end of line character 
    getline(cin, str);
    
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<k+d<<endl;
    cout<<s+str;
    
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable over should be printed first.

    return 0;