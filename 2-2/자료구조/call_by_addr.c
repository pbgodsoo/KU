#include <stdio.h>

void increment(int *n)
{
    int a = *n;
    *n = ++a;
}

int main(void)
{
    int     num;
    scanf("%d", &num);

    // num을 인자로 increment()함수 호출
    increment(&num);

	printf("%d\n", num);
}
