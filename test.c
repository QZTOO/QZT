#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ϵ� F9������ȡ���ϵ�
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
//ջ����Ĭ��ʹ�ã�
// ��ʹ�øߵ�ַ���Ŀռ�
// ��ʹ�õ͵�ַ���Ŀռ�
// //2013yu2022�ƺ���ͬ
//��ݼ�ѧϰ 
// F5-�������Ժ�F9���ʹ��
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
//F10 ����� ������һ�κ������� ������һ�����
//F11 ����� ÿ��ִ��һ����� �����Խ��뺯���ڲ�
//CTRL+F5��ʼִ�в�����
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
// �����Ż�
//д����������
// 1.д��1.6��
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//++���ȼ�����*�����ã��������Ǻ���++����ʹ����++
//		//src++;
//		//dest++;
//	}
//	*dest = *src;
//}
//2.д��1���װ�.7��
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//�ǹ������ķ��� �������׷�����������
//	{
//		while (*dest++ = *src++)//����������\0����ʱ�����0��0Ϊ�٣�����ѭ��12
//		{
//			;
//		}
//	}
//}
//3.д��1�Ż����װ�.8��
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 4.д��1���Ż����װ档9��
//void my_strcpy(char* dest,const char* src)//const ���������������޸ģ������ɱ���ֵ
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//5.д��1�ռ��档10��
//char* my_strcpy(char* dest, const char* src)//char* �Ǻ����ķ������� ʹ�ú������÷����ӷḻ//��ȫ��⺯��strcpy������
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcopy
//	//�ַ�������
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1,arr2));//��������ֵ����Ϊprintf�����Ĳ������д�ӡ-��ʽ����
//
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;//const����ָ��
//	*p = 20;//const ����ָ�������*���ʱ�����ε���*p:����ͨ��p���ı�*p(num)��ֵ
//	int n = 100;
//	p = &n;//const ����ָ�������*�ұ�ʱ�����ε���p:���ܸı�p��ֵ�����Ըı�*p(num)��ֵ
//	printf("%d\n",num);
//	return 0;
//}

//ʵ������stelen()����
//1.
//int my_strlen(const char* str)//*str��const���Σ�strָ������ݲ��ɸı䣬���ֵ�2
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч�ԣ����ֵ�1
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

//�����ʹ���-һ���Ǳ�ʶ�������ڻ���ƴд����
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