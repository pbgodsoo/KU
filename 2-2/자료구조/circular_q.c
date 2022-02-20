#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE  5

typedef int element;
typedef struct{
    element quesue[MAX_QUEUE_SIZE];
    int front,rear;
}QueueType;

int is_empty(QueueType *q) //
{
    return (q->front == q->rear);
}
int is_full(QueueType *q) //
{
    return ((q->rear+1)%MAX_QUEUE_SIZE == q->front);
}
void init_queue(QueueType *q)
{
    q->front = q->rear = 0;
}
void enqueue(QueueType *q, element item) //
{
  	if( is_full(q) ) {
		fprintf(stderr, "Queue Full\n");
		return;
  	}
    q->rear = (q->rear+1)%MAX_QUEUE_SIZE;
    q->quesue[q->rear] = item;
}
element dequeue(QueueType *q)   //
{
   	if( is_empty(q) ) {
		fprintf(stderr, "Queue Empty\n");
		exit(1);
   	}
	q->front = (q->front+1)%MAX_QUEUE_SIZE;
	return q->quesue[q->front];
}

int main()
{
    element     a;
    QueueType   q;
    
    // 큐 초기화 
    init_queue(&q);

    // 사용자로부터 정수를 입력받아 큐에 삽입 
    do {
        scanf("%d", &a);
        if (a == -1)
            break;
        enqueue(&q,a);
    } while (1);

    // 큐에 자료들을 하나씩 삭제하여 출력 (큐가 빌 때까지)
    while(!is_empty(&q))
    {
        a = dequeue(&q);
        printf("%d ",a);
    }
    
    printf("\n");
}
