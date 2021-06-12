#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("abc.txt", "w");

    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 0;
    }

    for(char i = 'A'; i<='Z'; i++)
        fprintf(fp, "%c", i);
    fprintf(fp, "\n");
    for(char i = 'a'; i<='z'; i++)
        fprintf(fp, "%c", i);
    fprintf(fp, "\n");
    fclose(fp);
}
