#include <stdio.h>

struct student{
    char name[10];
    int hakbun;
    int score;
};

int main()
{
    struct student arr[3];

    FILE *fp;
    fp = fopen("C:\\score.txt", "r");
    if(fp == NULL) {
        printf("파일 열기 실패");
        return 0;
    }


    for(int i = 0; i<3; i++)
    {
        fscanf(fp, "%s\t%8d %3d\n", arr[i].name, &arr[i].hakbun, &arr[i].score);
        printf("%-8s %8d %3d\n", arr[i].name, arr[i].hakbun, arr[i].score);
    }

    fclose(fp);

    return 0;
}
