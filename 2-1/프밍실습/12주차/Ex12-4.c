#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("konkuk.txt", "w");

    if(fp == NULL)
        printf("파일 열기 실패\n");
    else
    {
        fprintf(fp, "Computer Engineering\n");
        fprintf(fp, "Konkuk University\n");
        fclose(fp);
    }
    return 0;
}
