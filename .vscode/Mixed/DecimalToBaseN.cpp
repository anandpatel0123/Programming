#include<iostream>
using namespace std;
#include <stdio.h> 
#include <string.h> 

char reVal(int num) 
{ 
	if (num >= 0 && num <= 9) 
		return (char)(num + '0'); 
	else
		return (char)(num - 10 + 'A'); 
} 
void reverse(char *str) 
{ 
	int len = strlen(str); 
	int i; 
	for (i = 0; i < len/2; i++) 
	{ 
		char temp = str[i]; 
		str[i] = str[len-i-1]; 
		str[len-i-1] = temp; 
	} 
} 
char* calculate(char res[], int base, int inputNum) 
{ 
	int index = 0; 
	while (inputNum > 0) 
	{ 
		res[index++] = reVal(inputNum % base); 
		inputNum /= base; 
	} 
	res[index] = '\0'; 

	reverse(res); 

	return res; 
} 

int main() 
{ 
	int inputNum , base; 
	cin>>inputNum>>base;
	char res[100]; 
	cout<<calculate(res, base, inputNum); 
	return 0; 
} 