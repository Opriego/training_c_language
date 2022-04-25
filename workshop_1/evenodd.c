#include <stdio.h>
#include <stdlib.h>

int odd(int eval)
{	
	return (eval & 1);
}

int main(void)
{
	int number;
	printf("Introduce the number to evaluate\n");
	scanf("%d", &number);


	if (odd(number))
	{
		printf("the number is odd\n");
		return 0;
	}
	printf("the number is even\n");
	return 0;
}


