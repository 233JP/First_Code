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
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = {"����",20,"12345"};
//	printf("%d\n", s1.age);
//	//�ṹ�����.��Ա��
//	struct Stu* pa = &s1;
//	printf("%d\n", pa->age);
//	//�ṹ��ָ��->��Ա��
//	printf("%d\n", (*pa).age);
//
//	return 0;
//}

//int main()
//{
//	int c = 1;
//	int b = c + (--c);		//	������
//	printf("%d", b);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));		//4
//	printf("%d\n", sizeof(int*));		//4
//	printf("%d\n", sizeof(double*));	//4
//	int a = 0x11223344;	//1��16����λ���ĸ�������λ��8��16����λ��32��������λ
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
//	//char* pa = arr;				//ֻ�������������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;				//����ȫ��Ϊ1
//	}
//	return 0;
//}

//int main()
//{
//	int* p;		//Ұָ��  ָ��δ��ʼ��/ָ��Խ��/ָ��ָ��Ŀռ䱻�ͷ�
//	*p = 20;
//	return 0;
//}

//��ι��Ұָ��
//int main()
//{
//	//1.ָ��Ҫ��ʼ��
//	int a = 10;
//	int* pa = &a;		//��ʼ��
//	int* pb = NULL;		//����֪��ָ�������ֵʲôʱ��������ֵΪ��
//	//2.С��ָ��Խ��
//	//3.ָ��ָ��ռ��ͷ���Ϊ��
//	pa = NULL;			//������ʱ��Ϊ�գ���*�����õ�ַ������ݣ������ò�����������*��ָ�뱾��
//	//4.ָ��ʹ��֮ǰ����Ƿ���Ч��
//	if (pa != NULL)
//	{
//		*pa = 10;
//	}
//	return 0;
//}

//ָ�������
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

//ָ�����ַ�������
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

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;	//ppa���Ƕ���ָ��
//	int*** pppa = &ppa;	//����ָ��
//	***pppa = 30;
//	printf("%d\n", pa);
//	printf("%d", a);
//	return 0;
//}

//ָ������
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
