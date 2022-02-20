#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50
#define TRUE    1
#define FALSE   0

int visited[MAX_VERTICES];

typedef struct GraphType {
	int n;	// 정점의 개수
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// 그래프 초기화
void init(GraphType* g)
{
	int r, c;
	g->n = 0;
	for (r = 0; r<MAX_VERTICES; r++)
		for (c = 0; c<MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

// 간선 삽입
void insert_edge(GraphType* g, int start, int end)
{
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "그래프: 정점 번호 오류");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;
}
// 인접 행렬로 표현된 그래프에 대한 깊이 우선 탐색
void dfs_mat(GraphType* g, int v)
{
    int w;
    visited[v] = TRUE; // visit v
    printf("%d ", v); // print data of v
    for(w=0; w < g->n; w++) 
        if( g->adj_mat[v][w] && !visited[w] )
            dfs_mat(g, w); // DFS from w
}

void main()
{
    GraphType   *g;
    int         n;      // 정점 개수
    int         s, e;   // 간선

    // 그래프 초기화
	g = (GraphType *)malloc(sizeof(GraphType));
	init(g);

    // 정점 개수 입력
    scanf("%d", &n);

    // 정점 개수 설정
    g->n = n;

    // 간선 입력
    do {
        scanf("%d %d", &s, &e);
        if (s < 0 || e < 0) break;

        // 간선 (s, e) 입력
        insert_edge(g, s, e);
    } while (1);


    // 방문 초기화: visited 배열 초기화
    for (int i=0; i<n; i++)
        visited[i] = FALSE;
    
    // 깊이우선 탐색 수행 (DFS)
    dfs_mat(g, 0);
    
    free(g);
	printf("\n");
}
