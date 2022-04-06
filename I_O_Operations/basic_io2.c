#include<stdio.h>

int main()
{
        char title;
	printf("Input a character please:\n");
        title = getchar();
	printf("This is the character: %c\n", title);
	printf("This is the character displaced: %c\n", title+2);
	return title;
}
