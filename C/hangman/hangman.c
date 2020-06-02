#include <stdio.h>

void createHint(char *word);
int updateHint(char c);
void outputStatus(int life);
int isClear(void);

void play(char *word);
char inputLetter(void);

int main(void)
{
    play("apple");
    return 0;
}

void play(char *word)
{
    int life = 5;

    createHint(word);
    do {
        outputStatus(life);
        if (updateHint(inputLetter()) == 0) {
            life--;
        }
    } while (!isClear() && life > 0);

    printf("The answer is [%s].\n", word);
}

char inputLetter(void)
{
    char str[10];
    printf("a-z?> ");
    fgets(str, 10, stdin);
    return str[0];
}
