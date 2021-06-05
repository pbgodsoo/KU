#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int n;
    FILE *fp;
    fp = fopen("numbers.txt", "a");

    srand(time(NULL));
    n = rand()%100 + 1;

    fprintf(fp, "%d의 제곱근은 %f입니다.\n", n, sqrt(n));

    fclose(fp);
}
