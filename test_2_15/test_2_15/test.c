#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��n�Ľ׳�֮��
//�ǵݹ�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	printf("�����룺");
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
//	printf("n�Ľ׳�֮��Ϊ��%d", sum);
//	return 0;
//}
//�ݹ�
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

////ģ���ַ�������
//char* my_strcpy(char* arr1,const char* arr2)		//	��constĿ���Ǳ���Դͷ�����ݲ����޸�
//{
//	//���±�ʵ���ַ�������
//	//int i = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	arr1[i] = arr2[i];
//	//}
//	//printf("%s", arr1);
//	
//	//��ָ����ʵ���ַ�������
//	//int i = 0;
//	//while (*arr2 != '\0')		//��ֹԽ�����
//	//{
//	//	*arr1 = *arr2;
//	//	arr1++;
//	//	arr2++;
//	//}
//	//*arr1 = *arr2;
//
//	//���ִ���
//	char* ret = arr1;
//	assert(arr1 != NULL);//����
//	assert(arr2 != NULL);//����
//	//��arr2ָ����ַ�������arr1ָ��Ŀռ䣬������\0���ַ�
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

//ģ������ַ�������
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

//const��ָ��
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
//	//*p = 0;		���������޸�
//	//p = &num2;	����ִ��
//	
//	int* const p = &num1;
//	//*p = 0;		����ִ��
//	//p = &num2;	���������޸�
//	printf("%d", *p);
//	return 0;
//}

//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
//	return 0;
//}

int main()
{
	char a = -1;
	//���ڴ��д油��
	//ԭ�룺10000000 00000000 00000000 00000001
	//���룺11111111 11111111 11111111 11111110
	//���룺11111111 11111111 11111111 11111111
	//��Ϊ��char���ͣ���ȡһ���ֽڼ�8������λ
	//11111111
	//��%d�����Ҫ����������11111111 11111111 11111111 11111111----1
	signed b = -1;

	unsigned char c = -1;
	//���ڴ��д油��
	//ԭ�룺00000000 00000000 00000000 00000001
	//���룺01111111 11111111 11111111 11111110
	//���룺01111111 11111111 11111111 11111111
	//��Ϊ��char���ͣ���ȡһ���ֽڼ�8������λ
	//11111111
	//��%d�����Ҫ�����������������޷����ַ����ͣ�00000000 00000000 00000000 11111111---255
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}