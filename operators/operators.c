#include <stdio.h>


int main(void)
{
	int x, y, i;

	x = 10;
	y = 20;
	i = 50;

	// arithmetic operators
	printf("Addition \t\t\t%d\n", x + y);
	printf("Subtraction \t\t\t%d\n", y - x);
	printf("Subtraction neg \t\t%d\n", x - y);
	printf("Multiplication \t\t\t%d\n", x * y);
	printf("Division \t\t\t%d\n", y / x);
	printf("Division inv \t\t\t%f\n", (float)((float)x / (float)y));
	printf("Modulus \t\t\t%d\n", i % y);
	printf("Modulus inv \t\t\t%d\n", x % y);
	printf("Unary \t\t\t\t%d\n", x++);

	// relational operators
	printf("x equal to y \t\t\t%d\n", (x == y));
	printf("x not equal to y\t\t%d\n", (x != y));
	printf("x greater than y\t\t%d\n", (x > y));
	printf("x lesser than y\t\t\t%d\n", (x < y));
	printf("x greater equal to y\t\t%d\n", (x >= y));
	printf("x lesser equal to y\t\t%d\n", (x <= y));

	// logical operators
	printf("x AND y \t\t%d\n", (x && y));
	printf("x OR y  \t\t%d\n", (x || y));
	printf("x NOT y \t\t%d\n", !(x && y));

	return 0;
}
