#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5] = {0};
    int b[5][5] = {0};
    int k = 1;
    int p = 0;
    for(int i = 0; i<5; i++)
        for(int j = 0; j<=i; j++)
        {
            a[i][j] = k;
            k++;
        }

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<5; i++)
    {
        int t = 4;
        for(int j = 0; j<5; j++)
        {

            b[i][j] = a[t][p];
            t--;
        }
        p++;
    }

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
            printf("%2d ", b[i][j]);
        printf("\n");
    }
    return 0;
}
