#include <stdio.h>

struct card{
	int face;
	int shape;
	int color;
};
int main(){
	struct card deck[52];
	deck[0].shape=0;
	deck[0].face=1;
	deck[0].color=0;
	printf("%d \n",deck[0].face);
	printf("%d",deck[0].shape);
	
	return 0;
}
