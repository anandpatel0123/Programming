#include <stdio.h>
struct rectangle{
	int length;
	int breadth;
};

int main(){
	struct rectangle r;
	r.length = 15;
	r.breadth = 10;
	printf("Area of rectangle is %d", r.length*r.breadth);
	return 0;
}
