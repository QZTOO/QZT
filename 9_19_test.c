#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>
//处理字符和字符串的库函数使用
//strlen()
//int main()
//{
//	//int len = strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };//找不到\0;
//	int len = strlen(arr);//随机值，0的位置随机
//
//	printf("%d\n", len);
//
//	return 0;
//}
//1.计数器方法
//2.递归
//3.指针-指针
//方法1
//int my_strlen(const char* str)//const修饰str指向的内容，该内容不可被改变
//{
//	int count = 0;
//	assert(str != NULL);//传递指针要避免空指针情况
//	while (*str!='\0')//while(*str)当*str是\0时，条件为假，循环结束
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");//传过去的是字符串首元素地址
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//3-6=-3//但两个值都是无符号数，无符号数相减也为无符号数
//		//用my_strlen则不会有这种问题//库函数strlen认为字符号长度不可能是负数
//	{
//		printf("hehe\n");//size_t==unsigned int
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//strcpy
//char* my_strcpy(char* dest,const char* src)//返回目的地的起始位置
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;//copy src指向的字符串到dest的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//	/*	*dest = *src;
//		dest++;
//		src++;*/
//		;
//	}
//	return ret;
//	//*dest = *src;//copy'\0'
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//目的地地址，源头地址
//	printf("%s\n", arr1);
//	return 0;
//}
//strcat//追加字符串
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//*dest = *src;//追加后不是0，可以合并
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//目的地空间必须足够大
//	char arr2[] = "world";//追加了\0
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp//比较函数
//int main()
//{
//	// >  1(>0)
//	//==  0
//	// < -1(<0)
//	char* p1 = "abc";
//	char* p2 = "sbc";
//	int ret = strcmp(p1, p2);
//
//	printf("%d\n", ret);//-1//比较的是字符串中元素的ASCII码值；依次比较
//
//	return 0;
//}
//int my_strcmp(const char* str1,const char* str2)//两个指针的内容都不可被修改
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
 //   if (*str1 > str2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "zabcd";
//	char* p2 = "qwert";
//	int ret=my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//长度不受限制，仍然能使用，但arr1[5]空间不够
//	printf("%s\n", arr1);
//    return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);//可限制字节,不拷贝'\0'
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);//空间富余时，自己补'\0'
//
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2,3);//补了'\0'
//	printf("%s\n", arr1);
//	return 0;
//}