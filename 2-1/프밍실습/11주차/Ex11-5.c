#include <stdio.h>

int main()
{
    int x=0, y=0, z=0;

    if(scanf("%d%d%d", &x, &y, &z) == 3)
    {
        printf("x=%d, y=%d, z=%d\n", x, y, z);
        printf("정수들의 합은 %d\n", x+y+z);
    }
    else
    {
        printf("x=%d, y=%d, z=%d\n", x, y, z);
        printf("입력값이 올바르지 않습니다.\n");
    }
    return 0;
}
