#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//���1-100֮�������
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

//���100-200֮�������
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
//			printf("%d������\n", i);
//	}
//	return 0;
//}

//����һ�������ж��Ƿ�������
//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			printf("%d��������", num);
//			break;
//		}
//	}
//	if (i > sqrt(num))
//		printf("%d������", num);
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

//ֻ��ӡ�����ַ������������ַ�
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

//����n�Ľ׳�
//��һ���ݹ�
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
//	printf("�����룺");
//	scanf("%d", &i);
//	func=Func(i);
//	printf("%d", func);
//	return 0;
//}
//�������ǵݹ�
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	printf("������:");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������
