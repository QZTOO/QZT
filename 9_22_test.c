#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int strncmp(const char* string1,const char* string2,size_t count);
//int main()
//{
//	//strncmp-字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret =strcmp(p1, p2);
//	int ret = strncmp(p1, p2,4);//各自比较前n个字符
//	printf("%d\n", ret);
//	return 0;
//}
//strstr-查找字符串
//NULL-空指针
//NUL/Null-'\0'
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret=strstr(p1, p2);//找到后返回地址,找不到返回空指针
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//模拟实现strstr
//KMP 算法
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)str1;//记录有可能匹配成功的位置
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;//要求查找的字符串为空字符串的情况
//	}
//
//	while (*cur)//*str1内容不为'\0'的情况下
//	{
//		s1 = cur;
//		s2 = (char*)str2;
//
//		while(*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	
//	char* ret = my_strstr(p1, p2);
//	
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strtok
//char* strtok(char* str, const char* sep)-sep参数是个字符串，定义了用作分隔符的字符集合
//int main()
//{
//	//192.168.31.121.
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech
//	//zpw bitedu tech
//	char arr[] = "apw@bitedu.tech";
//	char* p = "@.";
//	//zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret =strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}
//strerror//将错误码翻译成错误信息
//int main()
//{
//	//错误码-错误信息
//	//0     -No error
//	//1     -Operation not permitted
//	//2     -No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}

//字符分类函数
#include<ctype.h>

//int main()
//{
//	//char ch = '2';
//	////int ret=islower(ch);//判断ch是否为小写字符
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');//大写转小写
//	//char ch = toupper('q');//小写转大写
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if ((isupper)(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//内存函数
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);//类型不兼容-int->char *
//	//只能拷贝1
//
//	return 0;
//}
//memcpy
//void* memcpy(void* destination, const void* suorce, size_t num);
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//    while(num--)
//	{
//		*(char*)dest = *(char*)src;
//	    ++(char*)dest;
//		++(char*)src;//前置++
//	}
//	return ret;
//}
//重叠拷贝
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//if (dest < src || dest > (char*)src + num)
//	//{
//	//	//前->后
//	//}
//	//else
//	//{
//	//	//后->前
//	//}
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr,arr+2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//int arr1[] = {1,2,3,4,5};
//	//int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四", 30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1,sizeof(arr1));
//
//	return 0;
//}
//memcmp
//大于返回>0;小于返回<0;等于返回=0;
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret =memcmp(arr1, arr2,9);//比较前八个字节的大小
//	printf("%d\n", ret);//0
//	return 0;
//}
//memset-内存设置
//void* memset(void* dest,int c,size_t count);
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);//全部填入'#’
//	//int arr[10] = { 0 };
//	//memset(arr,1, 10);
//	//10个字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00....
//	return 0;
//}