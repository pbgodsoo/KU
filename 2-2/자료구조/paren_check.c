#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef char element;		// 교체!
							// 차후에 스택이 필요하면 여기만 복사하여 붙인다.
							// ===== 스택 코드의 시작 =====
#define MAX_STACK_SIZE 100
#define MAX_STR_SIZE   4096


typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

// 스택 초기화 함수
void init_stack(StackType *s)
{
    s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType *s)
{
    return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType *s)
{
    return (s->top==(MAX_STACK_SIZE-1));
}
// 삽입함수
void push(StackType *s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
	    s->data[++(s->top)] = item;
	
}
// 삭제함수
element pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else 
	    return s->data[(s->top)--];
}
// 피크함수
element peek(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
	    return s->data[s->top];
}
// ===== 스택 코드의 끝 =====
int check_matching(const char *in)
{
	StackType s;
	char ch, open_ch;
	int i, n = strlen(in);  	// n= 문자열의 길이
	init_stack(&s);			// 스택의 초기화

	for (i = 0; i < n; i++) {
		ch = in[i];		// ch = 다음 문자
		switch (ch) {
		case '(':   case '[':    case '{':
        push(&s, ch); 
            printf("삽입 : %c\n", ch); 
            break; 
		case ')':   case ']':    case '}':
        if (is_empty(&s)) //스택이 비어 있으면 오류 아니면 pop()실행 
                return 0; 
            else 
            { 
                open_ch = pop(&s); 
                printf("삭제 : %c\n", ch); 
                if ((open_ch == '(') && ch != ')' || (open_ch == '[') && ch != ']' || (open_ch == '{') && ch != '}') 
                    return 0; 
                 } 
                 break;
		}
	}
	if (!is_empty(&s)) return 0; // 스택에 남아있으면 오류
	return 1;
}

int main(void)
{
	char    *line = NULL;
	size_t     size;
	getline(&line, &size, stdin);
	if (check_matching(line) == 1)
		printf("%s 괄호검사성공\n", line);
	else
		printf("%s 괄호검사실패\n", line);
	return 0;
}
