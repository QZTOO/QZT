#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//写法1
//结构体
//struct结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//struct Stu
//{//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局变量
//声明是一条语句，大括号后面需要加分号//定义一个结构体类型

//写法2
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef 给类型重新取名为Stu，Stu是类型
//
//int main()
//{
//	struct Stu s2 = {"jesica",30,"12343243223","保密"};//创建结构体变量
//	Stu s1 = {"张三",20,"152489287076","男"};//不用加上struct
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100,'w',"hello world",3.14}, arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "里斯",40,"12333213345","男"};
//	Print1(s);
//	Print2(&s);//系统开销小，最好传结构体的地址
//	return 0;
//}
//压栈
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	//栈区 局部变量 函数的形式参数 函数调用也开辟空间
	//堆区 动态内存分配 malloc/free realloc calloc
	//静态区 全局变量 静态变量
	return 0;
	//数据结构
	//--线性数据结构 --树形数据结构 --图*
	//顺序表         二叉树
	//链表      
	////插入一个元素：压栈
	////删除一个元素：出栈     
	//栈：先进去后出，后进先出
	//队列
}