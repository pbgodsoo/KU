#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
typedef struct person {
    char name[SIZE];
    char address[SIZE];
    char mobilephone[SIZE];
    char desc[SIZE];
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp);
void delete_record(FILE *fp);
void print_all_records(FILE *fp);

int main()
{
    FILE *fp;
    int select;

    if((fp=fopen("address.dat", "wb+"))==NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }

    while(1){
        menu();
        printf("번호를 입력하시오: ");
        scanf("%d", &select);
        switch(select)
        {
            case 1: add_record(fp); break;
            case 2: update_record(fp); break;
            case 3: search_record(fp); break;
            case 4: delete_record(fp); break;
            case 5: print_all_records(fp); break;
            case 6: fclose(fp); return 0;
        }
    }
}

void menu()
{
    printf("\n");
    printf("================\n");
    printf("1. 추가\n");
    printf("2. 수정\n");
    printf("3. 검색\n");
    printf("4. 삭제\n");
    printf("5. 전체 출력\n");
    printf("6. 종료\n");
    printf("================\n");
}

PERSON get_record()
{
    PERSON data;
    fflush(stdin);
    printf("이름: "); gets(data.name);
    printf("주소: "); gets(data.address);
    printf("휴대폰: "); gets(data.mobilephone);
    printf("특징: "); gets(data.desc);
    return data;
}


void print_record(PERSON data)
{
    printf("\n");
    printf("<이름> %s\n", data.name);
    printf("<주소> %s\n", data.address);
    printf("<휴대폰> %s\n", data.mobilephone);
    printf("<특징> %s\n", data.desc);
}

void add_record(FILE *fp)
{
    PERSON data;
    data = get_record();
    fseek(fp, 0, SEEK_END);
    fwrite(&data, sizeof(data), 1, fp);
}

void search_record(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    fseek(fp, 0, SEEK_SET);
    fflush(stdin);
    printf("\n검색할 사람의 이름: ");
    gets(name);

    while(!feof(fp))
    {
        fread(&data, sizeof(data), 1, fp);
        if(strcmp(data.name, name)==0)
        {
            print_record(data);
            break;
        }
    }
}

void update_record(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    fseek(fp, 0, SEEK_SET);
    fflush(stdin);
    printf("\n데이터를 수정할 사람의 이름: ");
    gets(name);

    while(!feof(fp))
    {
        fread(&data, sizeof(data), 1, fp);
        if(strcmp(data.name, name)==0)
        {
            print_record(data);
            printf("\n새로운 데이터를 입력하세요.\n");
            data = get_record();
            fseek(fp, -sizeof(data), SEEK_CUR);
            fwrite(&data, sizeof(data), 1, fp);
            break;
        }
    }
}

void delete_record(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    fflush(stdin);
    printf("\n삭제할 사람의 이름: ");
    gets(name);

    fseek(fp, 0, SEEK_SET);
    while(!feof(fp))
    {
        fread(&data, sizeof(data), 1, fp);
        if(strcmp(data.name, name)==0)
        {
            print_record(data);
            fseek(fp, -sizeof(data), SEEK_CUR);
            strcpy(data.name, " ");
            fwrite(&data, sizeof(data), 1, fp);
            break;
        }
    }
    printf("위 연락처를 삭제합니다.\n");
}

void print_all_records(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    fseek(fp, 0, SEEK_SET);
    while(1)
    {
        fread(&data, sizeof(data), 1, fp);
        if(strcmp(data.name, " ")==0)
            continue;
        if(feof(fp))
            break;
        print_record(data);
    }

}
