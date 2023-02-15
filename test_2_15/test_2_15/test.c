#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//求n的阶乘之和
//非递归
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("n的阶乘之和为：%d", sum);
//	return 0;
//}
//递归
//int Fact(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int fact = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fact = Fact(i);
//		sum += fact;
//	}
//	printf("%d", sum);
//	return 0;
//}

////模拟字符串拷贝
//char* my_strcpy(char* arr1,const char* arr2)		//	加const目的是保护源头的数据不被修改
//{
//	//用下标实现字符串拷贝
//	//int i = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	arr1[i] = arr2[i];
//	//}
//	//printf("%s", arr1);
//	
//	//用指针来实现字符串拷贝
//	//int i = 0;
//	//while (*arr2 != '\0')		//防止越界访问
//	//{
//	//	*arr1 = *arr2;
//	//	arr1++;
//	//	arr2++;
//	//}
//	//*arr1 = *arr2;
//
//	//满分代码
//	char* ret = arr1;
//	assert(arr1 != NULL);//断言
//	assert(arr2 != NULL);//断言
//	//把arr2指向的字符拷贝到arr1指向的空间，包含‘\0’字符
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//printf("%d", sz);
//	//strcpy(arr1, arr2);
//	printf("%s",my_strcpy(arr1, arr2));
//	//printf("%s", arr1);				
//	return 0;
//	
//}

//模拟计算字符串个数
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = 0;
//	char arr[] = "12345";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//const与指针
//int main()
//{
//	//int n = 10;
//	//int* p = NULL;
//	//p = &n;
//	//*p = 20;
//	//printf("%d", n);
//
//	int num1 = 10;
//	int num2 = 100;
//	//const int* p = &num1;
//	//*p = 0;		报错，不可修改
//	//p = &num2;	可以执行
//	
//	int* const p = &num1;
//	//*p = 0;		可以执行
//	//p = &num2;	报错，不可修改
//	printf("%d", *p);
//	return 0;
//}

//写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//}

int main()
{
	char a = -1;
	//在内存中存补码
	//原码：10000000 00000000 00000000 00000001
	//反码：11111111 11111111 11111111 11111110
	//补码：11111111 11111111 11111111 11111111
	//因为是char类型，存取一个字节即8个比特位
	//11111111
	//以%d输出是要整型提升，11111111 11111111 11111111 11111111----1
	signed b = -1;

	unsigned char c = -1;
	//在内存中存补码
	//原码：00000000 00000000 00000000 00000001
	//反码：01111111 11111111 11111111 11111110
	//补码：01111111 11111111 11111111 11111111
	//因为是char类型，存取一个字节即8个比特位
	//11111111
	//以%d输出是要整型提升，由于是无符号字符类型，00000000 00000000 00000000 11111111---255
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}