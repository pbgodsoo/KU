// 해시를 사용한 단어 빈도

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <ctype.h>
#include <time.h>

#define MAX_NAME        100
#define MAX_WORDS       10000
#define MAX_WORD_SIZE   100
#define TRUE            1
#define FALSE           0

// 해시 테이블 크기
#define TABLE_SIZE      1000

// 데이터 형식
typedef struct {
   char    key[MAX_WORD_SIZE];      // 키필드 (단어)
    int     count;                  // 단어 빈도
} element;

// 연결 리스트 (오버플로우 영역)
struct list {
    element item;
    struct list *list;
};

// 해시 테이블 선언 (연결 리스트에 대한 포인터들의 배열)
struct list *hash_table[TABLE_SIZE];
// 전역 변수의 경우 0 (=NULL) 으로 자동 초기화됨 



// 디스크 파일로부터 한 개 단어를 읽는다.
int getword(FILE *fd, char *word)
{
    char    ch;
    int    i;

    do {
        ch = getc(fd);
        if (ch == EOF)
            return FALSE;
    } while (!isalpha(ch)); // 첫번째 알파벳 문자가 나올때까지 읽는다.
    i = 0;
    do {    // 단어 1개를 읽는다.
        ch = tolower(ch);   // 소문자로 변환
        word[i++] = ch;
        ch = getc(fd);
    } while (isalpha(ch));  // 알파벳 문자이면 계속 읽는다.
    word[i] = '\0';
    return TRUE;
}

// 문자열에 대한 해시 함수값 계산: 강의자료 hashCode()
unsigned int hashCode(char *key)
{
    const int g = 31;
    unsigned int h = 0;
    int i = 0;
    while (key[i] != '\0') 
        h = g * h + key[i++];
    return h;
}

// 해시값을 테이블 크기 내로 맞춤
unsigned int hash_function(char *key)
{
    return hashCode(key) % TABLE_SIZE;
}

// item을 해시 테이블에 삽입 (이미 있는 경우 count 증가)
// 교재 프로그램 14.9 hash_chain_add() 참고
void hash_chain_update(element item, struct list *ht[])
{
    int hash_value = hash_function(item.key);
    struct list *ptr;
    struct list *node_before = NULL, *node = ht[hash_value];
    
    // strcmp() 함수 이용하여 각 노드의 키와 비교
    // 키가 일치하는 노드 발견 시, count 증가 후 return
    for (; node; node_before = node, node = node->list) {
        if (strcmp(node->item.key, item.key) == 0) {
            node->item.count++;
            return;
        }
    }
    ptr = (struct list *)malloc(sizeof(struct list));
    ptr->item = item;
    ptr->list = NULL;
    if (node_before)
        node_before->list = ptr;
    else
        ht[hash_value] = ptr;    
}

// 해시 테이블에 들어 있는 모든 자료 출력
// 출력 형식: 문자열1 카운트1 문자열2 카운트2 ...
// 교재 프로그램 14.10 hash_chain_print() 참고
void hash_chain_print(struct list *ht[])
{
    struct list *node;
    int i;

    for (i=0; i<TABLE_SIZE; i++) {
        for (node = ht[i]; node; node = node->list) {
            printf("%s %d ", node->item.key, node->item.count);
        }
    }
    printf("\n");
}

// 해시 테이블을 사용한 단어 빈도 계산
void main()
{
   FILE        *fd;

   char        fname[MAX_NAME];
   element     item;
   int         flag;
   int         i;
    clock_t     start, finish;
    double      duration;

   printf("파일 이름: ");
   scanf("%s", fname);
   if( (fd = fopen(fname,"r")) == NULL ){
      fprintf(stderr, "파일을 열수없습니다.\n");
      return;
   }
    start = clock();    // 시간 측정 시작
    item.count = 1;
    do {
        flag = getword(fd, item.key);  // 단어 1개 읽기
        if (flag == FALSE)
            break;

        // item을 해시 테이블에 삽입(이미 있는 경우 count 증가)
        hash_chain_update(item, hash_table);

    } while(1);
    finish = clock();   // 시간 측정 종료
    duration = (double)(finish - start) / CLOCKS_PER_SEC;

    // 해시 테이블 내용 출력
    hash_chain_print(hash_table);

    printf("\n%.6f 초입니다.\n", duration);
}
