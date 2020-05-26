#include <stdio.h>

void printFizzbuzz(int n);

int main(void)
{
	int n;
	
	for (n = 1; n <= 30; n++) {
		printFizzbuzz(n);
		if (n < 30)
			printf(", ");
		else
			printf("\n");
	}

	return 0;
}

void printFizzbuzz(int n)
{
	if (n % 3 == 0)
		printf("Fizz");
	if (n % 5 == 0)
		printf("Buzz");
	if (n % 3 != 0 && n % 5 != 0)
		printf("%d", n);
}
