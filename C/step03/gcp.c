#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char computer_hand(void);
char your_hand(void);
void judge(char uhand, char chand);

int main(void)
{
	char chand, uhand;

	srand(time(NULL));
	chand = computer_hand();
	uhand = your_hand();
	judge(uhand, chand);

	return 0;
}

char computer_hand(void)
{
	int c;
	char chand;

	c = rand() % 3;
	if (c == 1) {
		chand = 'c';
	} else if (c == 2) {
		chand = 'p';
	} else {
		chand = 'g';
	}

	return chand;
}

char your_hand(void)
{
	int u;
	char uhand;
	
	u = getchar();
	uhand = u;

	return uhand;
}

void judge(char uhand, char chand)
{
	printf("you: %c, com: %c - ", uhand, chand);
	if (uhand == chand) {
		printf("引き分け");
	} else if (uhand == 'g' && chand == 'c' ||
				uhand == 'c' && chand == 'p' ||
				uhand == 'p' && chand == 'g') {
		printf("あなたの勝ち");
	} else {
		printf("あなたの負け");
	}
	printf("\n");
}
