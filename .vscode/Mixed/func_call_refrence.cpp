#include<iostream>

void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int a,b;
	a=10;
	b=20;
	swap(a,b);
	std::cout<<"A = "<<a<<" B = "<<b;
}
