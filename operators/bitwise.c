#include <stdio.h>
#include <stdlib.h>

char* toBinary(int n, int len)
{
	char* binary = (char*)malloc(sizeof(char) * len);
	int k = 0;
	for (unsigned i = (1 << len - 1); i > 0; i /= 2) 
	{
		binary[k++] = (n & i) ? '1' : '0'; // ternary operation in action
	}
	binary[k] = '\0';
	return binary;
}

int main(void)
{
	char a, b, c;
	
	a = 5;
	b = 9;
	c = 15;

	int *x = &a;

	printf("result a \t\t%s\n", toBinary((a), 8));
	printf("result b \t\t%s\n", toBinary((b), 8));
	printf("result c \t\t%s\n", toBinary((c), 8));

	// Bitwise Operators
	printf("result of bitwise AND (a & b) \t\t%s\n", toBinary((a & b), 8));
	printf("result of bitwise OR (a | c) \t\t%s\n", toBinary((a | c), 8));
	printf("result of bitwise XOR (a ^ c) \t\t%s\n", toBinary((a ^ c), 8));
	printf("result of a \t\t\t\t%s\n", toBinary(a, 8));
	printf("result of bitwise complement (~a ) \t%s\n", toBinary((~a), 8));
	printf("result of bitwise LS a << 1 \t\t%s\n", toBinary((a << 1), 8));
	printf("result of bitwise RS a >> 1 \t\t%s\n", toBinary((a >> 1), 8));
	
	// Misc Operators	
	printf("sizeof a \t\t%ld\n", sizeof(a));
	printf("address of a in binary \t\t%s\n", toBinary((&a), 64));
	printf("address of a in hex \t\t%x\n",(int) &a);
	printf("address of a in octal \t\t%o\n",(int) &a);

	// Bitwise Assignment
        printf("bitwise LS assignment for c <<= 2 \t\t%s\n", toBinary((c <<= 2), 8));        
        printf("bitwise AND assignment for c &= 2 \t\t%s\n", toBinary((c &= 2), 8));        
        printf("bitwise XOR assignment for c ^= 2 \t\t%s\n", toBinary((c ^= 2), 8));        


	printf("pointer of a in binary\t\t%s\n", toBinary((*x), 64));
	printf("pointer of a in hex\t\t%x\n", *x);
	printf("pointer of a in octal\t\t%o\n", *x);

	return 0;	

}

