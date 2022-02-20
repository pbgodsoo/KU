#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50
#define MAX_QUEUE_SIZE 50
#define TRUE    1
#define FALSE   0

int visited[MAX_VERTICES];

typedef int element;
typedef struct { // 큐 타입
	element  queue[MAX_QUEUE_SIZE];
	int  front, rear;
} QueueType;

// 오류 함수
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 공백 상태 검출 함수
void queue_init(QueueType *q)
{
	q->front = q->rear = 0;
}

// 공백 상태 검출 함수
int is_empty(QueueType *q)
{
	return (q->front == q->rear);
}

// 포화 상태 검출 함수
int is_full(QueueType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// 삽입 함수
void enqueue(QueueType *q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->queue[q->rear] = item;
}

// 삭제 함수
element dequeue(QueueType *q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

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
// 인접 행렬로 표현된 그래프에 대한 너비 우선 탐색
void bfs_mat(GraphType *g, int v)
{
    int w;
    QueueType q;
    queue_init(&q); // initialize q
    visited[v] = TRUE; // visit v 
    printf("%d ", v); 
    enqueue(&q, v); // insert v into q
    while(!is_empty(&q)) {
        v = dequeue(&q); // delete a vertex from q
        for(w=0; w<g->n; w++)
            if(g->adj_mat[v][w] && !visited[w]){ 
                visited[w] = TRUE; // visit
                printf("%d ", w); 
                enqueue(&q, w); // insert w into q
            }
    }
}

void main()
{
	GraphType   *g;
    int         n, startv, endv;
    
    // 그래프 초기화
	g = (GraphType *)malloc(sizeof(GraphType));
	init(g);

    // 정점 개수 입력
    scanf("%d", &n);

    // 정점 개수 설정
    g->n = n;
    
    do {
        scanf("%d %d", &startv, &endv);
        if (startv < 0 || endv < 0)
            break;
        // 간선 삽입
        insert_edge(g, startv, endv);
    } while (1);
    
    // 방문 초기화: visited 배열 초기화
    for (int i=0; i<n; i++)
        visited[i] = FALSE;
    // 너비우선 탐색 수행(BFS)
    bfs_mat(g, 0);
	printf("\n");

	free(g);
}
