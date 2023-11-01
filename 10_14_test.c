#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	struct S arr[n];//50个struct S 类型的数据
//
//	//30-浪费
//	//60-不够
//	return 0;
//}

//c语言是可以创建变长数组-C99中增加了
#include<string.h>
#include<errno.h>
//malloc 向内存申请一块连续可用的空间，并返回指向这块空间的指针
// //free//calloc//ralloc
//int main()
//{
//	//向内存申请10个整形的空间
//    int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for(i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}
//calloc 开辟空间并把元素改为0
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	
//	free(p);
//	return 0;
//}
//realloc
//调整动态开辟内存空间的大小


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//
//	}
	//就是在使用malloc开辟的20个字节空间
	//假设20个字节不能满足使用要求
	//希望有40个字节的空间
	//这里就可以使用realloc来调整动态开辟的内存

	//realloc注意事项：
	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的清内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟
	//的内存空间地址
	//3.得用一个新的变量来接受realloc函数的返回值
//	int* p2 = realloc(p, INT_MAX);//p有可能会发生变化
//	if (p2 != NULL)//追加失败的情况
//	{
//		p = p2;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p+ i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d ", *(p + i));
//	}
//
//	//释放内存
//	free(p);
//	return 0;
//}
//int main()
//{
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//  printf("%s\n", strerror(errno));
	//}
	////使用
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}
	//realloc直接开辟空间
	
	//int* p = realloc(NULL, 40);//malloc(40)

	//return 0;
//}
#include<windows.h>

//常见动态内存错误
//int main()
//{
//	//1.对空指针进行解引用操作
//	int* p = (int*)malloc(40);
//	//如果malloc失败，p就被赋值为NULL
//	//要对malloc进行返回值的判断
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
// 2.对动态开辟的内存的越界访问
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;
	
	//3.对非动态开辟内存的free释放
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;

	//4.使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//p自身发生了变化,p已经指向了最后的部分，无法free空间
	////回收空间
	//free(p);
	//p = NULL;
	
	//5.对同一块动态内存的多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	////释放
	//free(p);
	//p = NULL;//加上这句话就可以避免这种情况发生
	////...
	//free(p);

	//6.对动态开辟内存忘记释放（内存泄漏）
//	while (1)
//	{
//		malloc(1);
//		sleep(1000);
//	}
//动态开辟的空间一定要释放，并且正确释放
//	return 0;
//}

//void  getmemory(char* *p)
//{
//	p = (char*)malloc(100);//动态开辟的空间没有释放，内存泄漏
//	//str以值的形式传递给p，p是getmemory函数的形参，只能函数内部有效
//	//getmemory函数返回之后，动态开辟内存尚未释放，并且无法找到，内存泄漏
//}
//void test(void)
//{
//	char* str = null;
//	getmemory(&str);//原getmemory(str);
//	strcpy(str, "hello,world");//str是空指针，访问内存失败；程序崩溃
//	printf(str);
//
//	free(str);
//	str = null;
//}
//int main()
//{
//	test();
//	return 0;
//}
//改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(&str);
//	strcpy(str, "hello,world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//返回栈空间地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//函数内部创建，离开函数，空间销毁
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//空间内容已经更改，再次访问内容随机
//}
//int main()
//{
//	Test();
//
//	return 0;
//}
//非法访问内存，输出随机值

//返回栈空间地址的问题2
//int* test()
//{
//	//static int a = 10;//加上static a不销毁
//    int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;
//	return 0;
//}

//《高质量C++编程》
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);//*p=(char*)malloc(100)
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");//忘记释放动态开辟内存，导致内存泄漏
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free使str成为野指针但不会使str成为空指针
//	//str=NULL(free完后使指针为空）
//	if (str != NULL);
//	{
//		strcpy(str, "world");//非法访问
//		printf(str);//world
//	}
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//未知大小
//};
//struct S
//{
//	int n;
//	int arr[0];//未知大小-柔性数组成员-数组的大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//没有包含数组大小，n是4个字节，输出结果就是4
//	struct S* ps = malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int *ptr=realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}