#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//自定义类型：结构体，枚举，联合
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别
//struct Stu//Stu-结构体关键字
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//	//成员变量
//}s4,s5,s6;
//
//struct Stu s3;//全局变量
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	//创建结构体变量s1/s2
//
//	return 0;
//}

//结构体自引用
//struct Node
//{
//	int date;//4
//	//struct Node n;//结构体内不能包含自己，无法判断要创建多大的空间
//	struct Node* next;//4/8//用指针去找下一个结构体变量
//}Node;
//int main()
//{
//	//sizeof(struct Node);
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	//printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	printf("%lf\n",s.st.weight);
//	return 0;
//}

//结构体内存对齐
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//6(x)//12-3*4?
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//6(x)//8-
//
//	return 0;
//}
//结构体的对齐规则
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处-//例：4的整数倍最小是4，a放在4的倍数处
//对齐数=编译器默认的一个对齐数与该成员大小的较小值
//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍-//例：1，4，1中最大对齐数是4
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）
// 的整数倍。
//struct S3
//{
//	double d;
//	char c;
//	int i;
//}; 
////16
//struct S4
//{
//	char c1;//1
//	struct S3 s3;//16-S3的最大对齐数是8，16+8=24
//	double d;//8-24+8=32
//	//结构体最大对齐数是8.32是8的整数倍
//};
//int main()
//{
//	struct S3 s3;
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//	return 0;
//}
//内存对齐-空间换取时间
//节省空间的方法
//1.让空间小的成员尽量集中在一起
//2.修改默认对齐数
//#pragma//预处理指令
#pragma pack(4)//设置默认对齐数为4
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8
//	//12
//};
//#pragma pack()
////取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}
#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof()求出成员变量相对于结构体的偏移量
//	printf("%d\n", offsetof(struct S,c));//0
//	printf("%d\n", offsetof(struct S,i));//4
//	printf("%d\n", offsetof(struct S,d));//8
//
//	return 0;
//}

//结构体传参
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);//传值
//	Print2(&s);//传址
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//
//	//printf("%d\n", s.a);
//	return 0;
//}

//位段-“位”指的是二进制位
//位段的声明和结构是类似的，有两个不同
//1.位段的成员必须是int,unsigned int或signed int或char
//2.位段的成员名后边有一个冒号和一个数字
//struct S 
//{
//	int _a : 2;//a只需要2个比特位
//	int _b : 5;//b只需要5个比特位
//	int _c : 10;//c只需要10个比特位
//	int _d : 30;//d只需要30个比特位
//	//47个比特位-6个字节48个比特位
//};
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8个字节
//	//位段的意义是节省空间
//    //位段的空间上是按照需要以4个字节(int)或者1个字节(char)的方式来开辟的、
//	//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//	return 0;
//}

//例子
//struct S
//{
//	char a : 3;//一个字符8个bit位
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//枚举
//枚举类型的定义
//enum Sex
//{
//	//枚举的可能取值
//	MALE,
//	FEMALE=9,
//	SECRET
//};
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c= BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);//0 1 2
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//初始值：0 1 2//修改后：2 4 8//0 9 10
//
//	return 0;
//}
//使用枚举的原因
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染（封装）
//4.便于调试
//5.使用方便，一次可以定义多个常量

//联合（共用体）-共用同一块空间
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));//4
//
//	printf("%p\n", &u); //010FFD38
//
//	printf("%p\n", &(u.c));//010FFD38
//	printf("%p\n", &(u.i));//010FFD38
//	//共用同一块空间
//	return 0;
//}
//联合体的存储
//大小端存储方式判断方法
// 方法2.使用函数check_sys()
//check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;//
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret=check_sys();
////方法1.输入int取出char
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//     }
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//枚举的类型是由编译器决定的
//int main()
//{
//	enum Sex s = MALE;//一个整形的大小 4个字节
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//union Un
//{
//	int a;//4个字节 默认对齐数是8，对齐数是4
//	char arr[5];//数组总大小是5，每个元素的大小是1，默认对齐数是8，对齐数是1
//	//联合的大小至少是最大成员的大小；例如最大成员的大小是5
//	//联合体最终的大小是最大对齐数的整数倍，例如也就是4的整数倍
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}