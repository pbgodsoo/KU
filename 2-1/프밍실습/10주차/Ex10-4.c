#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[10];
    int hakbun;
    float score;
};

struct student arr[] = {
    {"홍길동", 2020001, 3.87},
    {"임꺽정", 2020002, 2.63},
    {"이순신", 2020003, 3.95},
    {"권율", 2020004, 4.20}

};

int main()
{
    printf("%-6s %-7s %5s\n", " 이름", "  학번", "평점");
    printf("------ ------- -----\n");
    for(int i = 0; i<4; i++)
        printf("%-6s %7d %5.2f\n", arr[i].name, arr[i].hakbun, arr[i].score);

}
