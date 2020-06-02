#include <stdio.h>

void hanoi(int n, char a, char b, char c);

int main(void)
{
	hanoi(3, 'A', 'B', 'C');
	
	return 0;
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		printf("%d の円盤を %c から %c に移す\n", n, a, b);
	else {
		hanoi(n-1, a, c, b);
		printf("%d の円盤を %c から %c に移す\n", n, a, b);
		hanoi(n-1, c, b, a);
	}
}
