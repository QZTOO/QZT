#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//void test(int arr[])//��Ԫ�ص�ַ
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//2 ָ��Ĵ�С�ǹ̶���4/8��Ԫ�صĴ�С��������һ����4;
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));//4
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//��ӡarr����
//	printf("%s\n", pc);//��ӡarr����
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ�������a�ĵ�ַ������p
//	*p = 'w';//�����ַ������ܱ��޸�
//	printf("%s\n", p);
//	//printf("%s\n",p);//�ַ���������ַ����е��ַ�ֱ���ַ����еĿ��ַ�'\0'
//	//printf("%c\n", *p);//���ַ�����ʽ�������ֻ���һ���ַ�
//	return 0;
//}
//www.stackoverflow.com
//segmentfault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//�����ַ��� �������� ���Լ��ĵ�ַ p1��p2��Ķ�����ͬ�����ַ�����a�ĵ�ַ
//	const char* p2 = "abcdef";
//	if (p1 == p2)//������Ԫ�ص�ַ��ͬ-����
//		//
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}
	//if (arr1 == arr2)//��Ԫ�ص�ַ��ͬ
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");//haha 
	//}
//	return 0;
//}
//����ָoffer��

//ָ������-������-�������ָ��
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };//arr1,arr2,arr3�����׵�ַ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//�������arr1,arr2,arr3;�ٽ�������Ԫ�ص�ַλ��������������������
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int* arr1[10];����ָ�������
//char* arr2[4];һ���ַ�ָ�������
//char** arr3[5];�����ַ�ָ�������

//����ָ��-ָ�������ָ��-�������ĵ�ַ
//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	int arr[10] = { 0 };
	//arr-��Ԫ�ص�ַ
	//&arr[0]-��Ԫ�ص�ַ
	//&arr-����ĵ�ַ

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;//����ĵ�ַҪ������
	//
	//return 0;
//}

//int main()
//{
//	char* arr[5];//ָ������
//    char*(*pa)[5] = &arr;//����ָ��
//	//char*-paָ�����������//*pa-˵��pa��ָ��//[5]paָ���������5��Ԫ�ص�
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
	//int (*pa)[10] = &arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(*pa + i));//*pa==arr
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);
	//}
//	return 0;
//}
//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for(i=0;i<x;i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}
//������ָ�����ʽ
void print2(int(*p)[5], int x, int y)//�Ѷ�ά�����������x��Ԫ�ص�һά����;*p�����һ�е������ַ�����������Ԫ�أ�p+1����һ��
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		/*	printf("%d ", *(p + i)[j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);*/

		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr,3,5);//arr-������-������������Ԫ�ص�ַ
	//����sizeof(arr)��&arr�����������飬�������������������ʾ��Ԫ�ص�ַ	return 0;
	print2(arr,3,5);
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i=0;i<10;i++)
	//{
	//	//printf("%d ", *(p + i));
	//	//printf("%d ", *(arr + i));
	//	//printf("%d ", arr[i]);//arr[i]=*(arr=i)=*(p+i)==p[i]
	//	//printf("%d ", p[i]);
	//}
	//return 0;
}
//int(*parr3[10])[5]; 
//parr3��һ�����飬������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
//P34 (3)