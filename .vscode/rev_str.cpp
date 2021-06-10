#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[100] ;
    cin>>str;
    cout << "The uppercase version of \"" << str << "\" is " << endl;

    for (int i=0; i<strlen(str); i++)
        putchar(toupper(str[i]));
    
    return 0;
}