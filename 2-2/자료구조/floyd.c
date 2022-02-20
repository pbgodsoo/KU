#include <stdio.h>
#include <limits.h>

#define VERTICES    5
#define F           (INT_MAX/2 - 1)

typedef struct GraphType {
    int     n;  // 정점개수
    int     weight[VERTICES][VERTICES];
} GraphType;

int A[VERTICES][VERTICES];  // the lengths of the shortest paths


void printA(int a[][VERTICES], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (a[i][j] == F)
                printf("F ");
            else
                printf("%d ", a[i][j]);
        printf("\n");
    }
}

void floyd(GraphType *g) // Adjacent Matrix
{
    int             i, j, k, n;

    for(i = 0; i<g->n; i++)
        for(j=0; j<g->n; j++)
            A[i][j] = g->weight[i][j];
    

    for(k = 0; k<g->n; k++)
        for(i=0; i<g->n; i++)
            for(j=0; j<g->n; j++)
                if(A[i][k] + A[k][j] < A[i][j])
                    A[i][j] = A[i][k] + A[k][j];

}

int main(int argc, char *argv[])
{
    GraphType g = { 5, {

        0, 11, 24, 10, 15,
        11, 0, 37, F, F,
        24, 37, 0, 12, 10,
        10, F, 12, 0, 18,
        15, F, 10, 18, 0

        }
    };

    // Call floyd()
    floyd(&g);

    // A 행렬 출력
    printA(A, g.n);
}
