#include <stdio.h>

void putd_ad(int *n);

int main(void)
{
	int a = 10;
	putd_ad(&a);

	printf("a の値は %d です\n", a);
	
	return 0;
}

void putd_ad(int *n)
{
	printf("*n の値は %d です\n", *n);
	*n = 15;
}
