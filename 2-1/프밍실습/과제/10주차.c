#include <stdio.h>

int main()
{
    double sum = 0;
    int p = 1;
    printf(" n            e\n");
    printf("-- ------------\n");
    for(int n=0; n<10; n++)
    {
        printf("%2d ", n);
        for(int k=0; k<=n; k++) //시그마
        {
            if(k==0)
                sum += 1;
            else
            {
                for(int i=1; i<=k; i++) //펙토리얼
                    p *= i;
                sum += (double)1/p;
                p = 1;
            }
        }
        printf("%.10f\n", sum);
        sum = 0;
    }
}
