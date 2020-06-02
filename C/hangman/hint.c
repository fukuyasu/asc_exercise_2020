#include <stdio.h>
#include <string.h>

static char answer[20];
static char hint[20];

void createHint(char *word)
{
	int i = 0;

	strcpy(answer, word);
	while (word[i] != '\0') {
		hint[i] = '-';
		i++;
	}
	hint[i] = '\0';
}

int updateHint(char c)
{
	int i = 0;
	int n = 0;
	
	while (answer[i] != '\0') {
		if (answer[i] == c) {
			hint[i] = c;
			n++;
		}
		i++;
	}

    return n;
}

void outputStatus(int life)
{
    printf("[%d] %s\n", life, hint);
}

int isClear(void)
{
	return !strcmp(answer, hint);
}
