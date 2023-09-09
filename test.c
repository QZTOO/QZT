#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//断点 F9创建或取消断点
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//栈区的默认使用：
// 先使用高地址处的空间
// 再使用低地址处的空间
// //2013yu2022似乎不同
//快捷键学习 
// F5-启动调试和F9配合使用
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}
//F10 逐过程 可以是一次函数调用 或者是一条语句
//F11 逐语句 每次执行一条语句 但可以进入函数内部
//CTRL+F5开始执行不调试
//
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
// 代码优化
//写出拷贝函数
// 1.写法1.6分
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//++优先级高于*解引用，但这里是后置++，先使用再++
//		//src++;
//		//dest++;
//	}
//	*dest = *src;
//}
//2.写法1进阶版.7分
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//是规避问题的方法 但不容易发现问题所在
//	{
//		while (*dest++ = *src++)//当拷贝到’\0’的时候代表0，0为假，跳出循环12
//		{
//			;
//		}
//	}
//}
//3.写法1优化进阶版.8分
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 4.写法1再优化进阶版。9分
//void my_strcpy(char* dest,const char* src)//const 声明常量，不可修改，即不可被赋值
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//5.写法1终极版。10分
//char* my_strcpy(char* dest, const char* src)//char* 是函数的返回类型 使得函数的用法更加丰富//完全理解函数strcpy的特性
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcopy
//	//字符串拷贝
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1,arr2));//函数返回值可作为printf（）的参数进行打印-链式访问
//
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;//const修饰指针
//	*p = 20;//const 放在指针变量的*左边时，修饰的是*p:不能通过p来改变*p(num)的值
//	int n = 100;
//	p = &n;//const 放在指针变量的*右边时，修饰的是p:不能改变p的值，可以改变*p(num)的值
//	printf("%d\n",num);
//	return 0;
//}

//实现满分stelen()函数
//1.
//int my_strlen(const char* str)//*str被const修饰，str指向的内容不可改变，满分点2
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性，满分点1
//
//		while (*str != '\0')
//		{
//			count++;
//			str++;
//		}
//		return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//链接型错误-一般是标识符不存在或者拼写错误
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}