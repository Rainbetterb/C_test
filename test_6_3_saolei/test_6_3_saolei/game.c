#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void InitBoard(char board[ROWS][COLS], int r, int c, char set)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	for (int j = 0; j <= r; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1; i <= r; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void Setmine(char board[ROWS][COLS], int r, int c)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')//0不是雷
		{
			board[x][y] = '1';//1是雷
			count--;
		}
	}
}

//排查雷
static size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r*c - 10)
	{
		printf("请输入要排查的坐标");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] != '*')
			{
				printf("已经排查过，不用重复排查\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);//显示所有雷的坐标
					break;
				}
				else
				{
					size_t count = GetMineCount(mine, x, y);
					show[x][y] = (char)count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入");
		}
	}
	if (win == r * c - 10)
	{
		printf("扫完了\n");
	}
}