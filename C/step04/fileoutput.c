#include <stdio.h>

int main(void)
{
    FILE *fp;
    
    fp = fopen("hello.txt", "w");
    /* fopen_s(&fp, "hello.txt", "w"); */
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    
    return 0;
}
