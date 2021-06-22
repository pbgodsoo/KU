#include <stdio.h>

struct student {
	char name[8];
	int hakbun;
	float grade;
};


struct student s1 = { "홍길동", 2020006, 3.2 };
struct student s2 = { "임꺽정", 2020004, 2.7 };
struct student s3 = { "이순신", 2020002, 4.3 };
struct student s4 = { "김유신", 2020001, 3.3 };
struct student s5 = { "강감찬", 2020003, 3.8 };
struct student s6 = { "김선달", 2020005, 1.5 };

struct student* student[6] = { &s1, &s2, &s3, &s4, &s5, &s6 };

struct student* search(int hakbun)
{
	//학번이 일치하는 원소를 찾아 반환한다.
	//일치하는 학번이 없으면 NULL을 반환한다.
	for (int i = 0; i < 6; i++)
	{
		if (student[i]->hakbun == hakbun)
			return student[i];
		else
			continue;
	}
	return NULL;
};

void sort()
{
	//student[] 배열을 학번순으로 정렬
	//작은 값 -> 큰 값 순으로
	struct student tmp;
	for (int i = 0; i < 5; i++)
	{
		int minj = i;
		for (int j = i + 1; j < 6; j++)
		{
			if (student[minj]->hakbun > student[j]->hakbun)
				minj = j;
		}

		tmp = *student[i];
		*student[i] = *student[minj];
		*student[minj] = tmp;
	}
};

int main()
{
	struct student* p;

	p = search(2020003);
	if (p == NULL)
		printf("탐색 실패\n\n");
	else
		printf("탐색 성공: %s %d %f\n\n", p->name, p->hakbun, p->grade);

	sort();

	for (int i = 0; i < 6; i++)
		printf("%s %d %f\n", student[i]->name, student[i]->hakbun, student[i]->grade);
	return 0;
}
