#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//用于测试问题
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//喝汽水问题
//int main()
//{
//	int n = 20;
//	int m, a = 0;//初始化瓶子数目
//	m = n;
//	int b = 0;
//	while (m > 0)
//	{
//		m = m / 2;
//		a = m;
//		b += a;
//	}
//	printf("%d\n", n + b);
//	return 0;
//}

//打印菱形

//void Func(int line)
//{
//	//处理上半部分
//	for (int i = 0; i < line; i++)
//	{
//		//1.先打印空格
//		for (int j = 0; j < line - 1 -i; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//处理下半部分
//	for (int i = 0; i < line - 1; i++)
//	{
//		//先打印空格
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (int k = 0; k < (i - 1) * ( - 2 ) + 9; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Func(7);
//	return 0;
//}



//打印水仙花数

//void shuixianhua(int n)
//{
//	//水仙花数一定得是三位数
//	int a = 0;
//	int b = 0;
//	int c = 0;//初始化这三个位的数字
//	a = n / 100;//百位
//	b = (n % 100) / 10;//十位
//	c = n % 10;//个位
//	//判断
//	if ((a * a * a) + (b * b * b) + (c * c * c) == n)
//	{
//		printf("是水仙花数");
//	}
//	else
//	{
//		printf("不是水仙花数");
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入: ");
//	scanf("%d", &n);
//	shuixianhua(n);
//	return 0;
//}

//求和题
void qiuhe(int n)
{
	int m = 0;
	m = n + (10 * n + n) + (100 * n + 10 * n + n) + (1000 * n + 100 * n + 10 * n + n) + (10000 * n + 1000 * n + 100 * n + 10 * n + n);
	printf("%d", m);
}
int main()
{
	int n = 0;
	printf("请输入 ");
	scanf("%d", &n);
	qiuhe(n);
	return 0;
}
