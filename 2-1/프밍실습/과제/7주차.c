#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
char name[10];
char phone[20];
char email[20];
struct contact *next;
};

struct contact *head = NULL;

void print_list(struct contact *h)
{
    struct contact *p;
    p = h;
    while (p != NULL)
    {
        printf("--> %s ", p->name);
        p = p->next;
    }
    printf("\n");
}

void add_head(char *name, char *phone, char *email)
{
    struct contact *node = malloc(sizeof(struct contact));
    strcpy(node->name, name);
    strcpy(node->phone, phone);
    strcpy(node->email, email);
    node->next = head;
    head = node;
}

void add_tail(char *name, char *phone, char *email)
{
    struct contact *node;
    node = (struct contact*) malloc(sizeof(struct contact));
    strcpy(node->name, name);
    strcpy(node->phone, phone);
    strcpy(node->email, email);
    node->next = NULL;

    if(head == NULL)
        head = node;
    else
    {
        struct contact *q;
        q = head;
        while(q->next != NULL)
            q = q->next;
        q->next = node;
    }

}

struct contact *get(int index)
{
    struct contact *p;
    int i;

    if(head == NULL || index<0)
        return 0;

    i = 0;
    p = head;
    while(p->next != NULL && i < index)
    {
        p = p->next;
        i++;
    }
    if(i == index)
        return p;
    else
        return NULL;
}

int main()
{
    add_tail("홍길동", "010-1111-1111", "gdhong@kku.ac.kr");
    add_tail("임꺽정", "010-2222-2222", "kkjlim@naver.com");
    add_tail("이순신", "010-3333-3333", "sslee@gmail.com");
    add_tail("김유신", "010-4444-4444", "yskim@daum.net");
    print_list(head);

    struct contact *p;
    p = get(-2);
    printf("get(-2): %s\n", p==NULL ? "없음" : p->name);
    p = get(0);
    printf("get(0): %s\n", p==NULL ? "없음" : p->name);
    p = get(2);
    printf("get(2): %s\n", p==NULL ? "없음" : p->name);
    p = get(3);
    printf("get(3): %s\n", p==NULL ? "없음" : p->name);

    return 0;
}
