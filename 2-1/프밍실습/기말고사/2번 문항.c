#include <stdio.h>

int main()
{
    int arr[5][5] = {0};
    int k=1;

    for(int i=0; i<5; i++)
        for(int j=4; j>=i; j--)
            arr[i][j] = k++;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
