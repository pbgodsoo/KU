#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    int no;
    char name[20];
    int price;
    struct item *next;
};

struct item *head = NULL;

void print_list(struct item *h)
{
    struct item *p = h;
    while (p != NULL) {
        printf("--> %s", p->name);
        p = p->next;
    }
    printf("\n");
}

void add_head(int no, char *name, int price)
{
    struct item *node;

    node = (struct item *) malloc(sizeof(struct item));
    node->no = no;
    strcpy(node->name, name);
    node->price = price;
    node->next = head;
    head = node;
}

void add_tail(int no, char *name, int price)
{
    struct item *p;

    p = (struct item *) malloc(sizeof(struct item));
    p->no = no;
    strcpy(p->name, name);
    p->price = price;
    p->next = NULL;

    if(head == NULL)
        head = p;
    else
    {
        struct item *q = head;
        while(q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

struct item *get(int index)
{
    struct item *p;
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
        struct item *p =head;
        head = head->next;
        free(p);
        return 0;
    }

    struct item *prev = get(index-1);

    if(prev == NULL)
        return -1;

    if(prev->next == NULL)
        return -1;

    struct item *q = prev ->next;
    prev->next = q->next;
    free(q);
    return 0;
}

int main()
{
    add_tail(10, "USB-stick", 8000);
    add_tail(20, "LAN-cable", 5000);
    add_tail(30, "mask", 1500);
    add_tail(40, "mouse", 10000);
    add_tail(50, "mouse-pad", 3000);
    print_list(head);

    del(2);
    print_list(head);

    del(0);
    print_list(head);

    del(1);
    print_list(head);
    return 0;
}
