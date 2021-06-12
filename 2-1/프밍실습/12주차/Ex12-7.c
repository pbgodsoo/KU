#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[10];
    int hakbun;
    int score;
};

int main()
{
    struct student arr [] = {
        {"홍길동", 2020001, 87},
        {"임꺽정", 2020002, 63},
        {"이순신", 2020003, 95}
    };

    FILE *fp;

    fp = fopen("score.txt", "w");
    if(fp == NULL)
    {
        printf("파일 열기 실패");
        return 0;
    }

    for(int i=0; i<3; i++)
        fprintf(fp, "%-8s %8d %3d\n", arr[i].name, arr[i].hakbun, arr[i].score);
    fclose(fp);
    return 0;
}
