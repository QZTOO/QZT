#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//void test(int arr[])//首元素地址
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//2 指针的大小是固定的4/8；元素的大小在整型中一个是4;
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
//	printf("%s\n", arr);//打印arr数组
//	printf("%s\n", pc);//打印arr数组
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串，把a的地址赋给了p
//	*p = 'w';//常量字符串不能被修改
//	printf("%s\n", p);
//	//printf("%s\n",p);//字符串。输出字符串中的字符直至字符串中的空字符'\0'
//	//printf("%c\n", *p);//以字符的形式输出，但只输出一个字符
//	return 0;
//}
//www.stackoverflow.com
//segmentfault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串 不是数组 有自己的地址 p1与p2存的都是相同常量字符串中a的地址
//	const char* p2 = "abcdef";
//	if (p1 == p2)//还是首元素地址不同-错误
//		//
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}
	//if (arr1 == arr2)//首元素地址不同
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");//haha 
	//}
//	return 0;
//}
//《剑指offer》

//指针数组-是数组-用来存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组
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
//	int* parr[] = { arr1,arr2,arr3 };//arr1,arr2,arr3都是首地址
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//依次输出arr1,arr2,arr3;再解引用首元素地址位移依次输出各数组的数据
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int* arr1[10];整型指针的数组
//char* arr2[4];一级字符指针的数组
//char** arr3[5];二级字符指针的数组

//数组指针-指向数组的指针-存放数组的地址
//int main()
//{
//	int* p = NULL;//p是整形指针-指向整形的指针-可以存放整形的地址
//	char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
//	int arr[10] = { 0 };
	//arr-首元素地址
	//&arr[0]-首元素地址
	//&arr-数组的地址

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;//数组的地址要存起来
	//
	//return 0;
//}

//int main()
//{
//	char* arr[5];//指针数组
//    char*(*pa)[5] = &arr;//数组指针
//	//char*-pa指向的数组类型//*pa-说明pa是指针//[5]pa指向的数组是5个元素的
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
//参数是数组的形式
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
//参数是指针的形式
void print2(int(*p)[5], int x, int y)//把二维数组想象成有x行元素的一维数组;*p代表第一行的数组地址，数组有五个元素；p+1跳过一行
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
	//print1(arr,3,5);//arr-数组名-数组名就是首元素地址
	//除了sizeof(arr)和&arr代表整个数组，其他情况下数组名都表示首元素地址	return 0;
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
//parr3是一个数组，该数组10个元素，每个元素是一个数组指针该数组指针指向的数组有5个元素，每个元素是int
//P34 (3)