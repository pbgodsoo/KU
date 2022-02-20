#include <stdio.h>
#define MAX_ELEMENT 200

typedef struct {
	int 		key;
} element;

typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

// 초기화 함수
void init(HeapType* h)
{
	h->heap_size = 0;
}
// 현재 요소의 개수가 heap_size인 히프 h에 item을 삽입한다.
// 삽입 함수
void insert_max_heap(HeapType* h, element item)
{
    int i;
    i = ++(h->heap_size);
    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.key > h->heap[i / 2].key)) 
    {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item; // 새로운 item 삽입
}

void print_heap(HeapType* h)
{
    for (int i=1; i<=h->heap_size; i++)
        printf("%d ", h->heap[i].key);
    printf("\n");
}

int main()
{
    int         i, num, cnt = 0;
    element     e;
    HeapType    heap;

    // heap 초기화
    init(&heap);
    do {
        scanf("%d", &num);
        if (num == -1)
            break;
        // heap에 num 삽입
        e.key = num;
        insert_max_heap(&heap, e);
        cnt++;
    } while (1);

    // 히프 출력 (배열 내용 출력)
    print_heap(&heap);
}
