#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");
    fclose(fp);
    return 0;
}
