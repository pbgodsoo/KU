#include <stdio.h>

int main()
{
    int n;
    printf("삼각형의 높이: ");
    scanf("%d", &n);
    for(int i = n; i>=1; i--)
    {
        for(int j = n-i; j>0; j--)
            printf(" ");
        for(int j = i; j>0; j--)
            printf("*");
        printf("\n");
    }
}
