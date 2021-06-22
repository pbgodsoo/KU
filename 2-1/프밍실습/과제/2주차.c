#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card
{
	int face;
	int suit;
} CARD;

void init_deck(CARD arr[]);
void shuffle_deck(CARD arr[]);
void print_card(CARD *c);
void print_deck(CARD arr[]);
void sort(CARD arr[]);

int main()
{
	CARD deck[52];

	init_deck(deck);

	shuffle_deck(deck);
	print_deck(deck);
	printf("\n");

	sort(deck);
	print_deck(deck);
	printf("\n");

	return 0;
}
void init_deck(CARD arr[])
{
	int i, fc, st;

	i = 0;
	for (st = 0; st < 4; st++)
	{
		for (fc = 1; fc <= 13; fc++)
		{
			arr[i].suit = st;
			arr[i].face = fc;
			i++;
		}
	}
}
void shuffle_deck(CARD arr[])
{
	int first, second;
	CARD s;

	srand(time(NULL));
	for (first = 0; first < 52; first++)
	{
		second = rand() % 52;
		s = arr[first];
		arr[first] = arr[second];
		arr[second] = s;
	}
}

void print_card(CARD *c)
{
	char *faces[] = { "", "A", "2", "3", "4","5", "6", "7", "8", "9", "10","J", "Q", "K" };
	char *suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	printf("%s-%s \t", faces[c->face], suits[c->suit]);
}

void print_deck(CARD arr[])
{
	//한 벌의 카드를 출력하시오.
	//print_card() 함수를 이용하시오.
	int i;
	for (i = 0; i < 52; i++)
	{
		print_card(&arr[i]);
		if (i % 4 == 3)
		{
			printf("\n");
		}
	}

}

void sort(CARD arr[])
{
	//arr[]을 정렬하시오.
	//첫번째 기준: 숫자
	//두번째 기준 (숫자가 동일할 때): 무늬
	//HDCS
	int i, j, index;
	CARD s;


	for(i=0; i<51; i++)
	{
		index=i;
        for(j=i+1; j<52; j++)
        {
            if (arr[index].face != arr[j].face)
            {
                if (arr[index].face > arr[j].face)
                    index = j;
            }
            else if(arr[index].face == arr[j].face)
            {
                if (arr[index].suit > arr[j].suit)
                    index = j;
            }
        }
        s = arr[i];
        arr[i] = arr[index];
        arr[index] = s;

        }

}
