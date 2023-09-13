#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//前情回顾
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
	//指针数组
	//int* arr[10];
	//数组指针
	//int* (*pa)[10] = &arr;
	//函数指针
	//int(*pAdd)(int,int) = Add;//&Add与Add此时表达的意义一致
	//int sum = (*pAdd)(1, 2);//*此时并无实际价值
	//int sum = pAdd(1, 2);//Add(1,2)
	//printf("sum=%d\n", sum);
	//函数指针的数组
	//int(*pArr[5])(int, int);//去掉pArr[]就是函数指针类型；因此是函数指针的数组
	//指向函数指针数组的指针
//	int(*(*ppArr[5]))(int,int) = &pArr;
//
//	return 0;
//}
//回调函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		//确定一趟冒泡排序需要进行多少对比较
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

//void qsort(void* base,//待排序数组的首元素地址
//	       size_t num, //待排序数组的元素个数
//	       size_t width, //待排序数组每个元素的大小-单位是字节
//	       int(*cmp)(const void* e1, const void* e2)//是函数指针，比较两个元素所用函数的地址-这个函数使用者自己实现
//                                                    函数指针的两个参数是：待比较的两个元素的地址
//);
int cmp_int(const void* e1, const void* e2)//接收任意类型的数据
{
	//用来比较两个整形值得
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
	//return *(float*)e1 - *(float*)e2;//返回浮点数但函数的要求是整形
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
	//比较名字就是比较字符串
	//字符串比较不能直接用大于小于等于来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3] = { {"张三",20},{"wangwu",40},{"lisi",10}};
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
//程序员并不知道未来比较的两个元素是什么类型的
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
				//交换
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
	struct Stu s[3] = { {"张三",20},{"wangwu",40},{"lisi",10} };
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
	//bubble_sort(arr,sz);//只能排序整形数组
	return 0;
}
//void*
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//类型不一致会报警告
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;//对void* 类型的指针 不能进行解引用操作
//	//p++;//对void*类型的指针，不能进行加减整数的操作
//
//	//p = &ch;
//	//void*类型的指针 可以接受任意类型的地址
//	return 0;
//}