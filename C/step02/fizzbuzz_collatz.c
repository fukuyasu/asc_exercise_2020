#include <stdio.h>

void printFizzbuzz(int n);
int collatz(int n);

int main(void)
{
	int n;

	scanf("%d", &n);
	printFizzbuzz(n);

	while (n != 1) {
		n = collatz(n);
		printf(", ");
		printFizzbuzz(n);
	}
	printf("\n");

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

int collatz(int n)
{
	if (n % 2 == 0) {
		n = n / 2;
	} else {
		n = n * 3 + 1;
	}

	return n;
}
