#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	char name[10];
	char phone[15];
	char email[20];
	struct node *next;
};

struct node *head = NULL;

void print_list( struct node *h)
{
	struct node *p;

	p= h;
	while(p != NULL){
		printf("--> %s ", p->name);
		p = p->next;
	}
	printf("\n");
}

void add_head( char *name, char *phone, char *email)
{
	struct node *p;

	p = (struct node *) mlloc( sizeof(struct node) );

	strcpy(p->name, name);
	strcpy(p->phone, phone);
	strcpy(p->email, email);
	p->next = head;
	head = p;
}

int main()
{
	add_head("홍길동", "010-1111-1111", "gdhong@kku.ac.kr");
	print_list(head);

	add_head("임꺽정", "010-2222-2222", "kkjlim@naver.com");
	print_list(head);

	add_head("이순신", "010-3333-3333", "sslee@gmail.com");
	print_list(head);

	add_head("김유신", "010-4444-4444", "yskim@daum.net");
	print_list(head);

	return 0;
}
