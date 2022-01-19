#include <stdio.h>

typedef struct list {
    char data;
    struct list *link;
} List;


void printList(List *h)
{
    while (h != NULL) {
        printf("%c ", h->data);
        h = h->link;
    }
    printf("\n");
}

int main()
{
    List item1, item2, item3;
    
    item1.data = 'a';
    item2.data = 'b';
    item3.data = 'c';
    item1.link = &item2;
    item2.link = &item3;
    item3.link = NULL;

    printList(&item1);
}
