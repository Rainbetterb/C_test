#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//arr 查找数组
//left 左下标
//right 右下标
//key 我们需要找的
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (mid < key)
//		{
//			left = mid + 1;
//		}
//		else if (mid > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, 0, 8, 6);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了");
//	}
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	for (int i = 0;i <= 9;i++)
//	{
//		for (int j = 0;j <= 9;j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//函数形式
//void Func(int n)
//{
//	for (int i = 1;i <= n;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%d * %d = %d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Func(m);
//	return 0;
//}
//判断闰年
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("是润年");
//	}
//	return 0;
//}
//函数解决
//int panduan(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int ret = panduan(m);
//	if (ret == 1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//}

//判断素数函数
//int is_prime(int n)
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);;
//	int ret = is_prime(m);
//	if (ret == 1)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	printf("100-200之间");
//	for (int i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//		int aet = is_prime(i);
//		if (aet == 1)
//		{
//			printf("是\n");
//		}
//		else
//		{
//			printf("不是\n");
//		}
//	}
//	return 0;
//}


void Init(int arr[], int len)
{
	for (int i = 0;i < len; i++)
	{
		arr[i] = i;
	}
}

void Print(int arr[], int len)
{
	for (int i = 0;i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int len)
{
	int tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);
	Print(arr, len);
	Reverse(arr, len);
	Print(arr, len);
	return 0;
}