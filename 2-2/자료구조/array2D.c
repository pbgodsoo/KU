#include <stdio.h>
#define ROWS  2
#define COLS   3

int calc_sum(int list[], int rows, int cols)
{
    int sum = 0;
    for (int k = 0; k<rows*cols; ++k)
        sum += list[k];

    return sum;
}

int main(void)
{
	int  num[ROWS][COLS] = { { 2, 3, 5} , {7, 9, 11}  };
	int  sum = calc_sum((int *) num, ROWS, COLS);
	printf("합 = %d \n", sum);
	return 0;
}
