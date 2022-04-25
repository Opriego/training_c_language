#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{	
	int h = strlen(str) - 1;
	int l = 0;
	while (h > l)
	{
		if(str[l++] != str[h--])
		{
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}
	printf("%s is a palindrome\n", str);
	return 1;
}

int main(void)
{
	palindrome("abba");
	palindrome("aba");
	palindrome("ababa");
	palindrome("hello");
	palindrome("hola");

	palindrome("odd");
	palindrome("intel");
	palindrome("o&d&o");
	return 0;
}


