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

	//  트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
	while ((i != 1) && (item.key > h->heap[i / 2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;     // 새로운 item 삽입
}

// 삭제 함수
element delete_max_heap(HeapType* h)
{
    int parent, child;
    element item, temp;
    item = h->heap[1];
    temp = h->heap[(h->heap_size)--];
    parent = 1; child = 2;
    while (child <= h->heap_size) {
        if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
            child++;
        if (temp.key >= h->heap[child].key) break;
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;
}

void heap_sort(element a[], int n)
{
    int i;
    HeapType h;
    init(&h);
    for(i=0;i<n;i++){
        insert_max_heap(&h, a[i]);
    }
    for(i=(n-1);i>=0;i--){
        a[i] = delete_max_heap(&h);
    }
}

int main()
{
    int         i, num, cnt = 0;
    element     a[MAX_ELEMENT];
    int         key;
    HeapType    heap;

    // heap 초기화
    init(&heap);
    do {
        scanf("%d", &num);
        if (num == -1)
            break;
        // 배열 a[]에 num 삽입
        a[cnt].key = num;
        
        cnt++;
    } while (1);

    // heap sort
    heap_sort(a, cnt);

    // 배열 a 출력
    for(i = 0; i<cnt; i++)
    printf("%d ", a[i].key);
 
    printf("\n");
}
