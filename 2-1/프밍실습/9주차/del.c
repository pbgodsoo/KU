#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[10];
    int hakbun;
    int score;
    struct node *next;
};

struct node *head = NULL;

void print_list(struct node *h)
{
    struct node *p = h;
    while (p != NULL) {
        printf("--> %s", p->name);
        p = p->next;
    }
    printf("\n");
}

void add_head(char *name, int hakbun, int score)
{
    struct node *p;

    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, name);
    p->hakbun = hakbun;
    p->score = score;
    p->next = head;
}

void add_tail(char *name, int hakbun, int score)
{
    struct node *p;

    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, name);
    p->hakbun = hakbun;
    p->score = score;
    p->next = NULL;

    if(head == NULL)
        head = p;
    else
    {
        struct node *q = head;
        while(q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

struct node *get(int index)
{
    struct node *p;
    int i;

    if(head == NULL || index < 0)
        return NULL;

    i = 0;
    p = head;
    while( p-> next != NULL && i<index)
    {
        p = p->next;
        i++;
    }

    if(i == index)
        return p;
    else
        return NULL;
}

int del(int index)
{
    if(head == NULL)
        return -1;

    if(index == 0){
        struct node *p =head;
        head = p->next;
        free(p);
        return 0;
    }

    struct node *prev = get(index-1);

    if(prev == NULL)
        return -1;

    struct node *p = prev ->next;
    prev->next = p->next;
    free(p);
    return 0;
}

int main()
{
    add_tail("홍길동", 2020001, 87);
    add_tail("임꺽정", 2020002, 63);
    add_tail("이순신", 2020003, 95);
    add_tail("김유신", 2020004, 94);
    print_list(head);

    del(2);
    print_list(head);

    del(0);
    print_list(head);

    del(1);
    print_list(head);
    return 0;
}
