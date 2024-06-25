#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("a value: %d\n", *pa); 
	pa = &b;
	printf("b value: %d\n", *pa); 
	pa = &a;
	a = 20;
	printf("a value : %d\n", *pa);

	return 0;
}