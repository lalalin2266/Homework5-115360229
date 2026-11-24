#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]); //洗牌
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]); //發牌

int main(void)
{
	const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	const char* face[13] = {
		"Ace", "Deuce", "Three", "Four",
		"Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King"
	};

	int deck[4][13] = { 0 };//建立二微陣列方便擺放52位子

	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);

	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])
{
	int row; //隨機花色
	int column;  //隨機數
	int card;

	for (card = 1; card <= 52; card++) //有52個空位，做52次
	{
		do
		{
			row = rand() % 4; //0~3隨機數  min+rand()%(max-min+1)
			column = rand() % 13;//0~12隨機數
		} while (wDeck[row][column] != 0); //做完之後原本的deck[4][13]已經被改變
		wDeck[row][column] = card;
	}
}

void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) //把花色和數字填入
{
	int card;
	int row; //花色
	int column; //數字

	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c",
						wFace[column],
						wSuit[row],
						card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}