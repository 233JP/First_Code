#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	const char str1[] = "abc";
//	const char str2[] = "abc";
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	printf("%p\n", &str1);
//	printf("%p\n", &str2);
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	//if (str1 == str2)
//	//	printf("str1和str2相同\n");
//	//else
//	//	printf("不同\n");
//	//if (p1 == p2)
//	//	printf("p1和p2相同\n");
//	//else
//	//	printf("不同\n");
//	return 0;
//}

//指针数组
//顾名思义，指针数组是存储指针的数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int i = 0;
//	int* parr[] = { arr1,arr2,arr3,};
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//精彩！

//数组指针--是指针
//int main()
//{
//	//int* p = NULL;		//p是整型指针-指向整型的指针-可以存放整型的地址
//	//char* pc = NULL;	    //pc是字符指针-指向字符的指针-可以存放字符的地址
//	
//    //int arr[10] = { 0 };
//	//arr-----首元素地址
//	//&arr[0]-首元素地址
//	//arr-----数组的地址
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	//int(*p)[10] = &arr;	//数组的地址要存起来
//	//p就是数组指针
//
//	//char* arr1[5];
//	//char* (*pa)[5] =&arr1;	//数组指针的书写
//	//int arr2[2];
//	//int(*pb)[2] = &arr2;
//
//	//数组指针怎么用呢？
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);	//这里的*pa就相当于数组名
//	//	//printf("%d ", *(*pa+i));	//与上面相同
//	//}
//	//简单理解即可
//	return 0;
//}
//

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", (*p+i)[j]);
			printf("%d ", *(*(p + i) + j));		//p+i-跳过i行  *(p+i)-找到这一行的元素  *(p+i)+j-这一行某个元素的地址 
			//printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}