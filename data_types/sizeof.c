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

	
	printf("the sizeof char is %li bytes\n", sizeof(c));
	printf("the sizeof unsigned char is %li bytes\n", sizeof(uc));
	printf("the sizeof signed char is %li bytes\n", sizeof(sc));
	printf("the sizeof integer is %li bytes\n", sizeof(i));
	printf("the sizeof unsigned integer is %li bytes\n", sizeof(ui));
	printf("the sizeof short is %li bytes\n", sizeof(s));
	printf("the sizeof unsigned short is %li bytes\n", sizeof(us));
	printf("the sizeof long is %li bytes\n", sizeof(l));
	printf("the sizeof unsigned long is %li bytes\n", sizeof(ul));

	printf("the sizeof float is %li bytes\n", sizeof(f));
	printf("the sizeof double is %li bytes\n", sizeof(d));
	printf("the sizeof long double is %li bytes\n", sizeof(dd));
	
	return i;
}

