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
//	struct S arr[n];//50��struct S ���͵�����
//
//	//30-�˷�
//	//60-����
//	return 0;
//}

//c�����ǿ��Դ����䳤����-C99��������
#include<string.h>
#include<errno.h>
//malloc ���ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ��
// //free//calloc//ralloc
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//    int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}
//calloc ���ٿռ䲢��Ԫ�ظ�Ϊ0
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
//	//�ͷſռ�
//	
//	free(p);
//	return 0;
//}
//realloc
//������̬�����ڴ�ռ�Ĵ�С


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
	//������ʹ��malloc���ٵ�20���ֽڿռ�
	//����20���ֽڲ�������ʹ��Ҫ��
	//ϣ����40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�

	//reallocע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ����ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿���
	//���ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* p2 = realloc(p, INT_MAX);//p�п��ܻᷢ���仯
//	if (p2 != NULL)//׷��ʧ�ܵ����
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
//	//�ͷ��ڴ�
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
	////ʹ��
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}
	//reallocֱ�ӿ��ٿռ�
	
	//int* p = realloc(NULL, 40);//malloc(40)

	//return 0;
//}
#include<windows.h>

//������̬�ڴ����
//int main()
//{
//	//1.�Կ�ָ����н����ò���
//	int* p = (int*)malloc(40);
//	//���mallocʧ�ܣ�p�ͱ���ֵΪNULL
//	//Ҫ��malloc���з���ֵ���ж�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
// 2.�Զ�̬���ٵ��ڴ��Խ�����
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
	
	//3.�ԷǶ�̬�����ڴ��free�ͷ�
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;

	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//p�������˱仯,p�Ѿ�ָ�������Ĳ��֣��޷�free�ռ�
	////���տռ�
	//free(p);
	//p = NULL;
	
	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��
	////�ͷ�
	//free(p);
	//p = NULL;//������仰�Ϳ��Ա��������������
	////...
	//free(p);

	//6.�Զ�̬�����ڴ������ͷţ��ڴ�й©��
//	while (1)
//	{
//		malloc(1);
//		sleep(1000);
//	}
//��̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ�ͷ�
//	return 0;
//}

//void  getmemory(char* *p)
//{
//	p = (char*)malloc(100);//��̬���ٵĿռ�û���ͷţ��ڴ�й©
//	//str��ֵ����ʽ���ݸ�p��p��getmemory�������βΣ�ֻ�ܺ����ڲ���Ч
//	//getmemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ����ڴ�й©
//}
//void test(void)
//{
//	char* str = null;
//	getmemory(&str);//ԭgetmemory(str);
//	strcpy(str, "hello,world");//str�ǿ�ָ�룬�����ڴ�ʧ�ܣ��������
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
//����2
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

//����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�����ڲ��������뿪�������ռ�����
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//�ռ������Ѿ����ģ��ٴη����������
//}
//int main()
//{
//	Test();
//
//	return 0;
//}
//�Ƿ������ڴ棬������ֵ

//����ջ�ռ��ַ������2
//int* test()
//{
//	//static int a = 10;//����static a������
//    int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;
//	return 0;
//}

//��������C++��̡�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);//*p=(char*)malloc(100)
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");//�����ͷŶ�̬�����ڴ棬�����ڴ�й©
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
//	free(str);//freeʹstr��ΪҰָ�뵫����ʹstr��Ϊ��ָ��
//	//str=NULL(free���ʹָ��Ϊ�գ�
//	if (str != NULL);
//	{
//		strcpy(str, "world");//�Ƿ�����
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
//	int arr[];//δ֪��С
//};
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//û�а��������С��n��4���ֽڣ�����������4
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
//	//�ͷ�
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
	//������С
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
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}