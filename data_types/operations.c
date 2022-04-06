#include <stdio.h>

int main(void)
{
	//Integer types
	char c = 'c';
	unsigned char uc ='u';
	signed char sc = 's';
	int i = -1;
	unsigned int ui = 1;
	short s = 32767;
	unsigned short us = 65535;
	long l = 999999999999999999999;
	unsigned long ul = l + 99999999999999999999999;
	
	//Floating types
	float f = 2.8736;
	double d = 3.14159265358979323846;
	long double dd = d;

	
	printf("the char plus 10 equals to: %c\n", c+10);
	printf("the unsigned char plus 3 %c\n", uc+3);
	printf("the signed char minus 2 is %c\n", sc-2);
	printf("the char integer is %i\n", c);
	printf("the integer minus 100 is %i\n", i-100);
	printf("the unsigned integer minus 2 is %i\n", ui-2);
	printf("the short plus one is %i\n", ++s);
	printf("the unsigned short plus 2 is %ui\n", us+=2);
	printf("the long is %li\n", l);
	printf("the unsigned long minus long is %li\n", ul-l);

	printf("the float is %0.6f\n", f);
	printf("the double is %0.15f\n", d);
	printf("the long double is %0.19Lf\n", dd);
	
	return i;
}

