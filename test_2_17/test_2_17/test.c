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
//	//	printf("str1��str2��ͬ\n");
//	//else
//	//	printf("��ͬ\n");
//	//if (p1 == p2)
//	//	printf("p1��p2��ͬ\n");
//	//else
//	//	printf("��ͬ\n");
//	return 0;
//}

//ָ������
//����˼�壬ָ�������Ǵ洢ָ�������
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
//���ʣ�

//����ָ��--��ָ��
//int main()
//{
//	//int* p = NULL;		//p������ָ��-ָ�����͵�ָ��-���Դ�����͵ĵ�ַ
//	//char* pc = NULL;	    //pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	
//    //int arr[10] = { 0 };
//	//arr-----��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//arr-----����ĵ�ַ
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	//int(*p)[10] = &arr;	//����ĵ�ַҪ������
//	//p��������ָ��
//
//	//char* arr1[5];
//	//char* (*pa)[5] =&arr1;	//����ָ�����д
//	//int arr2[2];
//	//int(*pb)[2] = &arr2;
//
//	//����ָ����ô���أ�
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);	//�����*pa���൱��������
//	//	//printf("%d ", *(*pa+i));	//��������ͬ
//	//}
//	//����⼴��
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
			printf("%d ", *(*(p + i) + j));		//p+i-����i��  *(p+i)-�ҵ���һ�е�Ԫ��  *(p+i)+j-��һ��ĳ��Ԫ�صĵ�ַ 
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