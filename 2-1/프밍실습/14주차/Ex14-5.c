#include <stdio.h>

struct student {
    char name[10];
    int hakbun;
    int score;
};

int main()
{
    FILE *fp;

    fp = fopen("score.dat", "wb");
    if(fp==NULL)
    {
        printf("파일 열기 실패");
        return 0;
    }

    struct student s;
    for(int i=0; i<3; i++)
    {
        printf("이름: ");
        scanf("%s", s.name);
        printf("학번: ");
        scanf("%d", s.name);
        printf("점수: ");
        scanf("%d", s.name);
        printf("\n");
        fwrite(&s, sizeof(struct student), 1, fp);
    }
    fclose(fp);
    return 0;
}
