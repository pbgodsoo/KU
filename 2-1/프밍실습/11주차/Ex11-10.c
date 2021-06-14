#include <stdio.h>

int main()
{
    int arr[5][5] = {0};
    int k=1;

    for(int i=0; i<3; i++)
        for(int j=2-i; j<i+3; j++)
            arr[i][j] = k++;

    for(int i=3; i<5; i++)
        for(int j=i-2; j<7-i; j++)
            arr[i][j] = k++;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
