#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ǰ��ع�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
	//ָ������
	//int* arr[10];
	//����ָ��
	//int* (*pa)[10] = &arr;
	//����ָ��
	//int(*pAdd)(int,int) = Add;//&Add��Add��ʱ��������һ��
	//int sum = (*pAdd)(1, 2);//*��ʱ����ʵ�ʼ�ֵ
	//int sum = pAdd(1, 2);//Add(1,2)
	//printf("sum=%d\n", sum);
	//����ָ�������
	//int(*pArr[5])(int, int);//ȥ��pArr[]���Ǻ���ָ�����ͣ�����Ǻ���ָ�������
	//ָ����ָ�������ָ��
//	int(*(*ppArr[5]))(int,int) = &pArr;
//
//	return 0;
//}
//�ص�����
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		//ȷ��һ��ð��������Ҫ���ж��ٶԱȽ�
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//void qsort(void* base,//�������������Ԫ�ص�ַ
//	       size_t num, //�����������Ԫ�ظ���
//	       size_t width, //����������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	       int(*cmp)(const void* e1, const void* e2)//�Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//                                                    ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//);
int cmp_int(const void* e1, const void* e2)//�����������͵�����
{
	//�����Ƚ���������ֵ��
    return *(int*)e1-*(int*)e2;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_float(const void* e1,const void* e2)
{
	//return *(float*)e1 - *(float*)e2;//���ظ�������������Ҫ��������
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ���ô���С�ڵ������Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3] = { {"����",20},{"wangwu",40},{"lisi",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//����Ա����֪��δ���Ƚϵ�����Ԫ����ʲô���͵�
void bubble_sort(void* base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
void test5()
{
	struct Stu s[3] = { {"����",20},{"wangwu",40},{"lisi",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	//bubble_sort(arr,sz);//ֻ��������������
	return 0;
}
//void*
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//���Ͳ�һ�»ᱨ����
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;//��void* ���͵�ָ�� ���ܽ��н����ò���
//	//p++;//��void*���͵�ָ�룬���ܽ��мӼ������Ĳ���
//
//	//p = &ch;
//	//void*���͵�ָ�� ���Խ����������͵ĵ�ַ
//	return 0;
//}