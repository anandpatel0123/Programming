#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int count;
    int fibo;    
    struct Node* next;

}node;

int
fibo(int val){
        if(val == 1 || val == 2) {
                return 1;
        }
        return fibo(val - 1) + fibo(val - 2);
}

int
main (void)
{
    node f1, f2, f3;

    f1.count = 1;
    f1.fibo = fibo(1);

    f2.count = 2;
    f2.fibo = fibo(2);

    f3.count = 3;
    f3.fibo = fibo(3);

    f1.next = &f2;
    f2.next = &f3;
    f3.next = NULL;


    printf("f1 fibo : %i\n", f1.fibo);
    printf("f2 fibo : %i\n", f2.fibo);
    printf("f3 fibo : %i\n", f3.fibo);

    return (0);
}