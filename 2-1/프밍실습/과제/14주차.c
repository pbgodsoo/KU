#include <stdio.h>

struct student{
    char name[10];
    int hakbun;
    int score;
};
int main()
{
    FILE *fp;

    fp = fopen("C:\\score.dat", "rb");
    if (fp == NULL) {
        return 0;
    }
    while(1){
        struct student s, t;
        fread(&s, sizeof(struct student), 1, fp);
        if(s.hakbun == t.hakbun)
            break;
        printf("[%s, %d, %d]\n", s.name, s.hakbun, s.score);
        t.hakbun = s.hakbun;
    }

    fclose(fp);
    return 0;
}
