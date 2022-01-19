#include <stdio.h>
#include <stdlib.h>
#define SIZE (10000)

int cal_sum(int  list[ ], int  n)
{
	int  sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += list[i];
	}
	return sum;
}

void readArray(int list[], char *fname)
{
    FILE    *fp;
    int     i = 0;
    int     rc;
    
    fp = fopen(fname, "r");
    
    do {
        rc = fscanf(fp, " %d", &(list[i]));
        i++;
    } while (rc != EOF);
}

int main(void)
{
	int  *num;
	int  sum;
	
	// num 배열을 위한 동적 메모리 할당
	num = (int *) malloc(sizeof(int) * SIZE);
	// "primes.txt"로부터 10000개의 데이터를 num 배열로
	readArray(num, "primes.txt");
	// cal_num()을 통해서 합산
	sum = cal_sum(num, SIZE);
	printf("%d\n", sum);
	free(num);
	
	return 0;
}
