//오답임
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[10];
    int score;
    struct node *next;
};

struct node *head = NULL;

void print_list(struct node *h)
{
    struct node *p;
    p = h;
    while (p != NULL)
    {
        printf("--> %s ", p->name);
        p = p->next;
    }
    printf("\n");
}

int insert(int index, char*name, int score)
{
    struct node *p;
    int i = 0;

    if(index < 0)
        return -1;

    if(index == 0)
    {
        p = (struct node*) malloc(sizeof(struct node));
        strcpy(p->name, name);
        p->score = score;
        p->next = head;
        head = p;
        return 0;
    }

    while(p->next != NULL && i<index)
    {
        p = p->next;
        i++;
    }
    if(i == index)
    {
        p = (struct node*) malloc(sizeof(struct node));
        strcpy(p->name, name);
        p->score = score;
        p->next = NULL;

        struct node *q = head;
        int j = i-1;
        int t =0;
        while(t == j)
            q = q->next;
            t++;
        q->next = p;
        return 0;
    }
    else
        return -1;

}

int main()
{
    printf("%d ", insert(0, "홍길동", 87));
    printf("%d ", insert(0, "임걱정", 63));
    printf("%d ", insert(-1, "이순신", 95));
    printf("%d ", insert(3, "이순신", 95));
    printf("%d ", insert(1, "이순신", 95));
    print_list(head);
}
