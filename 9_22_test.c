#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int strncmp(const char* string1,const char* string2,size_t count);
//int main()
//{
//	//strncmp-�ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret =strcmp(p1, p2);
//	int ret = strncmp(p1, p2,4);//���ԱȽ�ǰn���ַ�
//	printf("%d\n", ret);
//	return 0;
//}
//strstr-�����ַ���
//NULL-��ָ��
//NUL/Null-'\0'
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret=strstr(p1, p2);//�ҵ��󷵻ص�ַ,�Ҳ������ؿ�ָ��
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//ģ��ʵ��strstr
//KMP �㷨
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)str1;//��¼�п���ƥ��ɹ���λ��
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;//Ҫ����ҵ��ַ���Ϊ���ַ��������
//	}
//
//	while (*cur)//*str1���ݲ�Ϊ'\0'�������
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
//			return cur;//�ҵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
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
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strtok
//char* strtok(char* str, const char* sep)-sep�����Ǹ��ַ����������������ָ������ַ�����
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
//	//�и�buf�е��ַ���
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
//strerror//�������뷭��ɴ�����Ϣ
//int main()
//{
//	//������-������Ϣ
//	//0     -No error
//	//1     -Operation not permitted
//	//2     -No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
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

//�ַ����ຯ��
#include<ctype.h>

//int main()
//{
//	//char ch = '2';
//	////int ret=islower(ch);//�ж�ch�Ƿ�ΪСд�ַ�
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');//��дתСд
//	//char ch = toupper('q');//Сдת��д
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
//�ڴ溯��
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);//���Ͳ�����-int->char *
//	//ֻ�ܿ���1
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
//		++(char*)src;//ǰ��++
//	}
//	return ret;
//}
//�ص�����
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//if (dest < src || dest > (char*)src + num)
//	//{
//	//	//ǰ->��
//	//}
//	//else
//	//{
//	//	//��->ǰ
//	//}
//	if (dest < src)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
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
//	struct S arr3[] = { {"����",20},{"����", 30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1,sizeof(arr1));
//
//	return 0;
//}
//memcmp
//���ڷ���>0;С�ڷ���<0;���ڷ���=0;
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret =memcmp(arr1, arr2,9);//�Ƚ�ǰ�˸��ֽڵĴ�С
//	printf("%d\n", ret);//0
//	return 0;
//}
//memset-�ڴ�����
//void* memset(void* dest,int c,size_t count);
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);//ȫ������'#��
//	//int arr[10] = { 0 };
//	//memset(arr,1, 10);
//	//10���ֽ�
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00....
//	return 0;
//}