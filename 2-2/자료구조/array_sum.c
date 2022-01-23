#include <stdio.h>
#define SIZE 6

int cal_sum(int  list[ ], int  n)
{
	int  sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += list[i];
	}
	return sum;
}
int main(void)
{
	int  num[ ] = { 2, 3, 5, 7, 9, 11 };
	int  sum = cal_sum(&num[3], 3);
	printf("합 = %d \n", sum);
	return 0;
}
