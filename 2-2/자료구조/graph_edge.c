#include <stdio.h>
#include <stdio.h>
#define MAX_VERTICES    50

// GraphType 정의 
/*
typedef struct GraphNode {
    int vertex;
    struct GraphNode *link;
} GraphNode;

typedef struct GraphType {
    int n; // num of vertices
    GraphNode *adj_mat [MAX_VERTICES];
} GraphType;*/

typedef struct GraphType {
    int n;
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// 그래프 초기화
void init(GraphType* g)
{
    int r, c;
    g->n = 0;
    for (r = 0; r<MAX_VERTICES; r++)
        for( c = 0; c<MAX_VERTICES; c++)
            g->adj_mat[r][c] = 0;
}

// 간선 삽입
void insert_edge(GraphType* g, int a, int b)
{
    if (a >= g->n || b >= g->n) {
        fprintf(stderr, "그래프: 정점 번호 오류");
    }
    g->adj_mat[a][b] = 1;
    g->adj_mat[b][a] = 1;
}

int main()
{
    GraphType   g;
    int         n;      // 정점 개수
    int         s, e;   // 간선

    // 그래프 초기화
    init(&g);

    // 정점 개수 입력
    scanf("%d", &n);

    // 정점 개수 설정
    g.n = n;

    // 간선 입력
    do {
        scanf("%d %d", &s, &e);
        if (s < 0 || e < 0) break;

        // 간선 (s, e) 입력
        insert_edge(&g, s, e);
    } while (1);

    // 각 정점의 차수(degree) 출력
    int edge_cnt = 0;
    int degree;
    
    for (int v = 0; v < g.n; v++) {
        degree = 0;
        for (int w = 0; w < g.n; w++)
            degree += g.adj_mat[v][w];
        printf("%d: %d\n", v, degree);
    }

    // 간선(edge)의 총 개수 출력
    for (int v = 0; v < g.n; v++)
        for (int w = 0; w < g.n; w++)
            edge_cnt += g.adj_mat[v][w];
    edge_cnt = edge_cnt / 2;
    printf("%d\n", edge_cnt);


    // 각 간선 출력: 정점 번호 오름차순으로; (s, e) for s < e
    for (int v = 0; v < g.n; v++)
        for (int w = v+1; w < g.n; w++) {
            if(g.adj_mat[v][w] == 1)
                printf("(%d, %d)\n", v, w);
        }
    
    
}
