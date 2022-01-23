#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

void display(ListNode *h)
{
    while (h != NULL) {
        printf("%d ", h->data);
        h = h->link;
    }
    printf("\n");
}

void insert_node(ListNode **phead, ListNode *p, ListNode
*new_node)
{
    if( *phead == NULL ){ // 공백리스트인 경우
        new_node->link = NULL;
        *phead = new_node;
    }
    else if( p == NULL ){ // p가 NULL이면 첫번째 노드로 삽입
        new_node->link = *phead;
        *phead = new_node;
    }
    else { // p 다음에 삽입
        new_node->link = p->link;
        p->link = new_node;
    }
}

int main()
{
    ListNode    *head = NULL;
    ListNode    *p, *new_node;
    int         data;

    // 사용자 입력, 노드 생성, 리스트 삽입 
    p = head;
    do {
        scanf("%d", &data);
        if (data == -1) break;
        // 새 노드를 위한 동적 메모리 할당
        new_node = (ListNode *) malloc(sizeof(ListNode));
        
        // 새 노드에 자료 저장
        new_node->data = data;
        
        // 새 노드를 리스트에 삽입: insert_node() 함수 이용
        insert_node( &head, p, new_node);
        p = new_node;
        
    } while (1);

    // 출력 
    display(head);
}
