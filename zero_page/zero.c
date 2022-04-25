#include <stdio.h>
#include <stdlib.h>

char* toBinary(int n, int len)
{
        char* binary = (char*)malloc(sizeof(char) * len);
        int k = 0;
        for (unsigned i = (1 << len - 1); i > 0; i /= 2)
        {
                binary[k++] = (n & i) ? '1' : '0'; 
        }
        binary[k] = '\0';
        return binary;
}

static inline int is_zero_pfn(unsigned long pfn)
{
	int zero_page_mask = 12288;
        unsigned long zero_pfn_ = 0xffffffff85228730;
        unsigned long offset_from_zero_pfn_ = pfn - zero_pfn_;
	printf("offset \t\t\t\t\t%s\n", toBinary((offset_from_zero_pfn_), 32));
	printf("zero page mask \t\t\t\t%s\n", toBinary((zero_page_mask), 32));
	printf("zero page mask displaced\t\t%s\n", toBinary((zero_page_mask >> 12), 32));
        return offset_from_zero_pfn_ <= (zero_page_mask >> 12);
}

int main(void)
{
	printf("%d is the result of is_zero_pfn\n", is_zero_pfn(12288));
	printf("%d is the result of is_zero_pfn\n", is_zero_pfn(0));
	printf("%d is the result of is_zero_pfn\n", is_zero_pfn(0xffffffff85228730));
	return 0;
}


