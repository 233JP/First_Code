#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//p80 (1)
//int main()
//{
//	double r = 0.07;
//	double p = pow((1 + r), 10);
//	printf("%.2lf\n", p);
//	return 0;
//}

//�����ʽ1-1/2+1/3-1/4+...+1/99-1/100��ֵ
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1+= 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	printf("%lf", sum1 - sum2);
//	return 0;
//}
//int main()
//{
//	int sign = 1;			//��sign����������
//	int deno = 2;
//	double sum = 1.0;
//	while (deno <= 100)
//	{
//		sign = -sign;
//		sum += 1.0*sign / deno;
//		deno++;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//��������������Fibonacci��������  1 1 2 3 5 8 13...
//int main()
//{
//	int f[20] = { 1,1 };
//	int i = 0;
//	for (i = 2; i < 20; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("\n");
//		}
//		printf("%12d", f[i]);
//	}
//	return 0;
//}

//��10������Ҫ�����ǰ���С�����˳���������
//int main()
//{
//	int a[10];
//	int i = 0,j,temp;
//	int flag = 0;
//	printf("input 10 numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		flag = 0;
//		for (j = 9; j > i; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				flag = 1;
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}
//			if (flag == 0)
//			{
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//������ת�á���һ��������к��л���
//int main()
//{
//	int a[2][3] = { {1,2,3} ,{4,5,6} };
//	int b[3][2];
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��һ��3*4�ľ���Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�
//int main()
//{
//	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2 } };
//	int i, j,max,row,colum=0;
//	max = a[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max <= a[i][j])
//			{
//				max = a[i][j];
//				row = i;
//				colum = j;
//			}
//		}
//	}
//	printf("%d %d %d", max,row+1,colum+1);
//	return 0;
//}

//��������������m��n���������Լ������С������
// ��һ
//int main()
//{
//	int  a, b;
//	int t = 1;	//��1��ʼ�ж�
//	int reg = 0;	//�Ĵ湫Լ��
//	printf("���룺");
//	scanf("%d %d", &a, &b);
//	while (t <= min(a, b))
//	{
//		if (a % t == 0 && b % t == 0)
//			reg = t;
//		t++;
//	}
//	printf("�����%d", reg);
//
//	return 0;
//}
//int min(int x, int y)    //����������Сֵ
//{
//	int min = 0;
//	min = (x > y ? y : x);
//	return min;
//}
//���� շת�����
int main()
{
	int a = 18;
	int b = 24;
	int c = 0;

	while (c = a % b)
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);
	return 0;
}