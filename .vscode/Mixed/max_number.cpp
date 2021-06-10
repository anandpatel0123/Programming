#include<iostream>
using namespace std;

void printMax(int a, int b, int c, int d){
    int max = a;

    if(b > max){
        max = b;
    }

    if(c > max){
        max = c;
    }

    if(d > max){
        max = d;
    }

    printf("%d\n", max);
}

void printMaxTwo(int a, int b, int c, int d){
    printf("%d\n", ((a>= b && a >= c && a >= d)?a:(b > a && b > c && b > d)?b:(c > a && c > b && c > d)?c:d));
}

void printMaxThree(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d){
        printf("%d\n", a);
    }else if(b > a && b > c && b > d){
        printf("%d\n, b");
    }else if(c > a && c > b && c > d){
        printf("%d\n", c);
    }else{
        printf("%d\n", d);
    }
}

int main(){
    return 0;
}