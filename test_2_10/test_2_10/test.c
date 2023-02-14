#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = a > 5 ? 3 : -3;
//	printf("%d", b);
//	return 0;
//}

//struct Stu
//{
//
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = {"张三",20,"12345"};
//	printf("%d\n", s1.age);
//	//结构体变量.成员名
//	struct Stu* pa = &s1;
//	printf("%d\n", pa->age);
//	//结构体指针->成员名
//	printf("%d\n", (*pa).age);
//
//	return 0;
//}

//int main()
//{
//	int c = 1;
//	int b = c + (--c);		//	不合理
//	printf("%d", b);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));		//4
//	printf("%d\n", sizeof(int*));		//4
//	printf("%d\n", sizeof(double*));	//4
//	int a = 0x11223344;	//1个16进制位是四个二进制位，8个16进制位是32个二进制位
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p", pa);
//	printf("%p", pb);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	//char* pa = arr;				//只改两个半的数组
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;				//数组全改为1
//	}
//	return 0;
//}

//int main()
//{
//	int* p;		//野指针  指针未初始化/指针越界/指针指向的空间被释放
//	*p = 20;
//	return 0;
//}

//如何规避野指针
//int main()
//{
//	//1.指针要初始化
//	int a = 10;
//	int* pa = &a;		//初始化
//	int* pb = NULL;		//当不知道指针变量赋值什么时，给它赋值为空
//	//2.小心指针越界
//	//3.指针指向空间释放置为空
//	pa = NULL;			//不用它时置为空（加*是引用地址里的内容，解引用操作符。不加*是指针本身）
//	//4.指针使用之前检查是否有效性
//	if (pa != NULL)
//	{
//		*pa = 10;
//	}
//	return 0;
//}

//指针的运算
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	
//	return 0;
//}

//指针求字符串个数
//int my_strlen(char* arr[])
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;	//ppa就是二级指针
//	int*** pppa = &ppa;	//三级指针
//	***pppa = 30;
//	printf("%d\n", pa);
//	printf("%d", a);
//	return 0;
//}

//指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[3] = { pa,pb,pc };
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//
//	return 0;
//}
