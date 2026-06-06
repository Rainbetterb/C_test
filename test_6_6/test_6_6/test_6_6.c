#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}
//打印斐波那契数


//实现n的k次方
//int Func(int n, int m)
//{
//	if (m == 1)
//	{
//		return n;
//	}
//	if (m > 1)
//	{
//		return n * Func(n, m - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d",&n, &m);
//	printf("%d", Func(n, m));
//	return 0;
//}


//计算一个数的每位之和
//int Func (int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + Func(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Func(n);
//	printf("%d", Func(n));
//	return 0;
//}


//阶乘
//int Func(int n)
//{
//	if (n > 0)
//		return n * Func(n - 1);
//	if (n = 1)
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Func(n);
//	printf("%d", Func(n));
//	return 0;
//}

//打印整数的每一位
void Func(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}
	else
	{
		Func(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Func(n);
	return 0;
}