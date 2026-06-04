#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
//玩一把不过瘾可以一直玩继续玩
//封装一个函数
//void meau()
//{
//	printf("******************************\n");
//	printf("*********** 1. play **********\n");
//	printf("*********** 0. exit **********\n");
//	printf("******************************\n");
//}
//void game()
//{
//	//1.生成随机数
//	int r = rand() % 100 + 1;
//	//2.猜数字
//	int g = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &g);
//		if (g < r)
//		{
//			printf("猜小了");
//		}
//		else if (g > r)
//		{
//			printf("猜大了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));//调用一次就可以了
//	do
//	{
//		meau();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
//			break;
//
//
//		}
//	} while (input);
//	return 0;
//}


void meau()
{
	printf("***********************\n");
	printf("*******1. 猜数字 ******\n");
	printf("*******0. 退出游戏*****\n");
	printf("***********************\n");
}

void game()
{
	int g = 0;
	int r = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &g);
		if (g < r)
		{
			printf("猜小了\n");
		}
		else if (g > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		meau();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新选择");
			break;
		}
	} while (input);

	return 0;
}