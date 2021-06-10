#include <stdio.h>
#include <stdlib.h>

struct cpu_usage {
    int hour, min, sec;
};

struct ps{
    int pid;
    char tty[8];
    struct cpu_usage cpu_usage;
    char cmd[16];
};

struct ps arr[] = {
    {2222, "tty2", {0, 0, 11}, "gdm-x-session"},
    {2224, "tty2", {0, 0, 13}, "Xorg"},
    {60420, "pts/0", {2, 35, 7}, "bash"},
    {60540, "pts/0", {0, 0, 0}, "ps"},
};

int main()
{
    printf("%6s %-8s %8s %-16s\n", "PID", "TTY", "TIME", "CMD");
    for(int i = 0; i<4; i++)
    {
        printf("%6d %-8s %02d:%02d:%02d %-16s\n", arr[i].pid, arr[i].tty, arr[i].cpu_usage.hour, arr[i].cpu_usage.min, arr[i].cpu_usage.sec, arr[i].cmd);
    }
}
