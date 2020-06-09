#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void createHint(char *word);
int updateHint(char c);
void outputStatus(int life);
int isClear(void);

int readDictionary(char *fname, char words[][20]);
void play(char *word);
char inputLetter(void);

int main(int argc, char *argv[])
{
    int n;
    char word_list[1000][20];
    
    srand(time(NULL));
    n = readDictionary(argv[1], word_list);
    play(word_list[rand() % n]);
    return 0;
}

int readDictionary(char *fname, char words[][20])
{
    int n = 0;
    int i = 0;
    FILE *fp;
    int c;
    
    fp = fopen(fname, "r");
    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            words[n++][i] = '\0';
            i = 0;
        } else {
            words[n][i++] = c;
        }
    }
    fclose(fp);
    
    return n;
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

    if (life > 0) {
        printf("Congratulations! ");
    } else {
        printf("That's too bad! ");
    }
    printf("The answer is [%s].\n", word);
}

char inputLetter(void)
{
    char str[10];
    printf("a-z?> ");
    fgets(str, 10, stdin);
    return str[0];
}
