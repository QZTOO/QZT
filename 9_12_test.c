#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	char ch = 'w';//字符指针
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组-数组-存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针-指向数组
//	//int* p3;//整形指针-指向整形的指针
//	//char* p4;//字符指针-指向字符的
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	int(*parr3[10])[5];
//	return 0;
//}
//数组参数、指针参数
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int* arr)//整形指针不可储存二维数组
//{} error
//void test3(int **arr)//二级指针地址是用来存放一级指针地址的，不能存放数组
//{}
//void test4(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };//二维数组
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	return 0;
//}
//一级指针传参
//void test1(int* p)
//{
//}
//void test2(char* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test2(p1);
//	char ch = 'w';
//	char* p = &ch;
//	
//	return 0;
//}
//二级指针传参
//void test(int** ptr)
//{
//}
//int main()
//{
//	int n = 10; 
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//1.二级指针变量本身
//	test(&p);//2.一级指针变量地址
//	int* arr[10];//3.存放一级指针数组的数组名
//	test(arr);
//	return 0;
//}
//数组指针-指向数组的指针
//函数指针-指向函数的指针
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a,b));
//	//printf("%p\n", &Add); //00007FF760191348
//	//printf("%p\n", Add);  //00007FF760191348
//	//&函数名与函数名 都是函数的地址
//	int(*pa)(int, int) = Add;
//	(*pa)(2, 3);
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}
//阅读两段有趣的代码
//*(void)(*)())0)();//(void)(*)()-函数指针类型
//(函数指针类型)0-把0强制类型转换成函数指针类型-0是函数指针
//(*0)() 调用0地址的函数
//代码意思为 调用0地址处返回类型为void的函数
//《c陷阱和缺陷》
//void(*signal(int, void(*)(int)))(int);//void(*)int-函数指针类型
//*signal(int,函数指针类型）-signal函数,第一个参数是int;第二个参数是函数指针类型;该函数指针指向的函数的参数是int,返回类型是void
//void(*   )(int)//函数指针
//简化
//typedef void(*pfun_t)(int);
//
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int uint;
// 
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));//5
//	printf("%d\n", Add(2, 3));//5
	//pa是地址 Add也是
	//printf("%d\n", (*pa)(2, 3));//5
	//printf("%d\n", (**pa)(2, 3));//5
	//printf("%d\n", (***pa)(2, 3));//5
	//*没用
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int*parr[5];//
//	int(*pa)(int,int) = Add;//Sub Mul Div
//	//需要函数指针数组存四个函数地址
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for(i = 0;i<4;i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
//写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);
//写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char*, const char*);//去掉函数指针数组名就是函数指针类型
//函数指针数组案例
//实现计算器
//void menu()
//{
//	printf("***************************************\n");
//	printf("************1.add      2.sub***********\n");
//	printf("************3.mul      4.div***********\n");
//	printf("************5.xor      6.exit**********\n");
//	printf("***************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor};//函数指针数组-转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);

//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else 
//		{
//			printf("选择错误\n");
//		}
//		switch (input)
//		{
//		case 1://case后面一定要加空格
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} 
//	while (input);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pfArr[4])(int, int);//pArr是一个数组-函数指针的数组
//	int(*(*ppfArr[4]))(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(print);
//
//	return 0;
//}
void BubbleSort(int arr[], int sz)
{
	//...
}
int main()
{
	//冒泡排序函数
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}
//qsort-可以排序任意类型的数据
