#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

struct cpu_usage {
    int hour, min, sec;
};

struct ps{
    int pid;
    char tty[8];
    struct cpu_usage cpu_usage;
    char cmd[16];
};

int main()
{
    struct ps arr[] = {
        {2222, "tty2", {0, 0, 11}, "gdm-x-session"},
        {2224, "tty2", {0, 0, 13}, "Xorg"},
        {60420, "pts/0", {2, 35, 7}, "bash"},
        {60540, "pts/0", {0, 0, 0}, "ps"}
    };

    FILE *fp = NULL;

    if((fp=fopen("prostat.bin", "wb"))==NULL)
    {
        fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }

    fwrite(arr, sizeof(struct ps), SIZE, fp);
    fclose(fp);
}
