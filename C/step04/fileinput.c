#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;
    
    fp = fopen(argv[1], "r");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    
    return 0;
}
