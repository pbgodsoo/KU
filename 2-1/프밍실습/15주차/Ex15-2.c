#include <stdio.h>

struct student {
    char name[10];
    int hakbun;
    int score;
};
int main()
{
    FILE *fp;

    fp = fopen("score.dat", "rb");
    if(fp==NULL)
    {
        printf("파일 열기 실패");
        return 0;
    }

    int count = 0;
    struct student s;

    while(fread(&s, sizeof(struct student), 1, fp)>0)
    {
        count++;
        printf("%d. %s\n", count, s.name);
    }
    printf("총 %d 명의 성적정보가 있습니다.\n", count);

    int n;
    printf("\n성적정보를 조회할 학생의 번호(-1은 종료): ");
    scanf("%d", &n);
    while(n!=-1)
    {
        if(0<n && n<=count)
        {
            fseek(fp, sizeof(struct student)*(n-1), SEEK_SET);
            fread(&s, sizeof(struct student), 1, fp);
            printf("[%s, %d, %d]\n", s.name, s.hakbun, s.score);
        }
        printf("\n성적정보를 조회할 학생의 번호(-1은 종료): ");
        scanf("%d", &n);
    }
    fclose(fp);
    return 0;
}
