#include<stdio.h>

void fun(int *x,int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",x[i]);
}
int main(){
	int a[5] = {2,6,8,1,10};
	fun(a,5);
}
