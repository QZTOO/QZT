#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>
//�����ַ����ַ����Ŀ⺯��ʹ��
//strlen()
//int main()
//{
//	//int len = strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };//�Ҳ���\0;
//	int len = strlen(arr);//���ֵ��0��λ�����
//
//	printf("%d\n", len);
//
//	return 0;
//}
//1.����������
//2.�ݹ�
//3.ָ��-ָ��
//����1
//int my_strlen(const char* str)//const����strָ������ݣ������ݲ��ɱ��ı�
//{
//	int count = 0;
//	assert(str != NULL);//����ָ��Ҫ�����ָ�����
//	while (*str!='\0')//while(*str)��*str��\0ʱ������Ϊ�٣�ѭ������
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");//����ȥ�����ַ�����Ԫ�ص�ַ
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//3-6=-3//������ֵ�����޷��������޷��������ҲΪ�޷�����
//		//��my_strlen�򲻻�����������//�⺯��strlen��Ϊ�ַ��ų��Ȳ������Ǹ���
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
//char* my_strcpy(char* dest,const char* src)//����Ŀ�ĵص���ʼλ��
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;//copy srcָ����ַ�����dest�Ŀռ䣬����'\0'
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
//	my_strcpy(arr1, arr2);//Ŀ�ĵص�ַ��Դͷ��ַ
//	printf("%s\n", arr1);
//	return 0;
//}
//strcat//׷���ַ���
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//*dest = *src;//׷�Ӻ���0�����Ժϲ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//Ŀ�ĵؿռ�����㹻��
//	char arr2[] = "world";//׷����\0
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp//�ȽϺ���
//int main()
//{
//	// >  1(>0)
//	//==  0
//	// < -1(<0)
//	char* p1 = "abc";
//	char* p2 = "sbc";
//	int ret = strcmp(p1, p2);
//
//	printf("%d\n", ret);//-1//�Ƚϵ����ַ�����Ԫ�ص�ASCII��ֵ�����αȽ�
//
//	return 0;
//}
//int my_strcmp(const char* str1,const char* str2)//����ָ������ݶ����ɱ��޸�
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
//	strcpy(arr1, arr2);//���Ȳ������ƣ���Ȼ��ʹ�ã���arr1[5]�ռ䲻��
//	printf("%s\n", arr1);
//    return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);//�������ֽ�,������'\0'
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);//�ռ主��ʱ���Լ���'\0'
//
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2,3);//����'\0'
//	printf("%s\n", arr1);
//	return 0;
//}