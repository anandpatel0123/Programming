#include <stdio.h>
#include <stdlib.h>
struct rectangle{
	int len;
	int breadth;
};
int main(){
	struct rectangle *p;
	p = (struct rectangle *)malloc(sizeof(struct rectangle));
	p->len=15;
	p->breadth=20;
	
	printf("%d",p->breadth*p->len);
	return 0;
}
