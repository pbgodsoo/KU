#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 0;
    }
    int moon = 0, hang = 0;
    char c;
    while(fscanf(fp, "%c", &c) > 0)
    {
        moon++;
        if(c == '\n')
            hang++;
    }
    fclose(fp);
    printf("문자의 수: %d\n", moon);
    printf("행의 수: %d\n", hang);
}
