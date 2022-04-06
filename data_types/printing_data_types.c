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

	
	printf("the char is %c\n", c);
	printf("the unsigned char is %c\n", uc);
	printf("the signed char is %c\n", sc);
	printf("the integer is %i\n", i);
	printf("the unsigned integer is %i\n", ui);
	printf("the short is %i\n", s);
	printf("the unsigned short is %ui\n", us);
	printf("the long is %li\n", l);
	printf("the unsigned long is %li\n", ul);

	printf("the float is %0.6f\n", f);
	printf("the double is %0.15f\n", d);
	printf("the long double is %0.19Lf\n", dd);
	
	return i;
}

