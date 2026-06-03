#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void meau()
{
	printf("------------------\n");
	printf("----1.开始游戏----\n");
	printf("----0.退出游戏----\n");
	printf("------------------\n");
}

void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//存放查找出雷的信息
	//写函数初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布雷
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//布置好雷的棋盘

	//排雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while(input);

	return 0;
}