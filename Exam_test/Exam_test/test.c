#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//输出100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d是素数\n", i);
//	}
//	return 0;
//}

//输入一个数，判断是否是素数
//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			printf("%d不是素数", num);
//			break;
//		}
//	}
//	if (i > sqrt(num))
//		printf("%d是素数", num);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;			//2 3 4 6 7 8 9 10 11
//		if (i == 5)
//			continue;			
//		printf("%d ", i);
//	}
//	return 0;
//}

//只打印数字字符，跳过其他字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}	
//	return 0;
//}

//计算n的阶乘
//法一：递归
//int Func(int i)
//{
//	if (i == 1 || i == 0)
//		return 1;
//	else
//		return i * Func(i - 1);
//}
//int main()
//{
//	int i = 0;
//	int func = 0;
//	printf("请输入：");
//	scanf("%d", &i);
//	func=Func(i);
//	printf("%d", func);
//	return 0;
//}
//法二：非递归
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	printf("请输入:");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字
