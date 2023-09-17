#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//整形数组
//数组名是首元素的地址
//例外
//1.sizeof(数组名）-数组名表示整个数组
//2.&数组名-数组名是整个数组
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//16是错误的，答案是4/8；（a+0),此时a不是单独的，数字名表示首元素的地址，因此地址字节长度是4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a+1));//4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8-&a取出的是数组的地址，但是数组的地址也是4/8个字节
//	printf("%d\n", sizeof(*&a));//16-*解引用与&取地址抵消了，等同于第一种写法 
//	printf("%d\n", sizeof(&a+1));//4/8  &a是整个数组，&a+1虽然跳过整个数组但还是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//
//	return 0;
//}
//字符数组
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n",strlen(arr));//6是错误的，答案是随机值；数组名是首元素地址，在数组中寻找时找不到'\0'，因此是随机值
//	printf("%d\n",strlen(arr + 0));//随机值
	//printf("%d\n",strlen(*arr));//1是错误的，strlen（）需要传一个地址过去，*arr是'a',ASCALL码是97，程序会崩溃
	//printf("%d\n",strlen(arr[1]));//同上，arr[1]是98,程序崩溃
//	printf("%d\n",strlen(&arr));//随机值 不知道什么时候遇到'\0'
//	printf("%d\n",strlen(&arr+1));//随机值 -6
//	printf("%d\n",strlen(&arr[0] + 1));//随机值-1
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//寻找到'\0'时停止 6
//	printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//错误 传过去的是97 0X000016所代表的地址里并没有数组
	//printf("%d\n", strlen(arr[1]));//错误 传过去的是98
	//printf("%d\n", strlen(&arr));//取出整个数组的地址-数组的地址-数组指针 char(*p)[7]=&arr;strlen(char*) 二者不兼容
	//printf("%d\n", strlen(&arr+1));//跳过整个数组找不到\0 随机值
	//printf("%d\n", strlen(&arr[0] + 1));//取出第二个元素的地址往后数找到\0 5

	//printf("%d\n", sizeof(arr));//7 abcdef\0
	//printf("%d\n", sizeof(arr+0));//首元素地址 4/8
	//printf("%d\n", sizeof(*arr));//首元素地址解引用 1
	//printf("%d\n", sizeof(arr[1]));//第二个元素的大小 1
	//printf("%d\n", sizeof(&arr));//整个数组的地址 4/8
	//printf("%d\n", sizeof(&arr+1));//跳过整个数组的地址 4/8
	//printf("%d\n", sizeof(&arr[0]+1));//第二个元素的地址 4/8
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";//常量字符串，p里存的是a的地址，并不是字符串的地址

	//printf("%d\n", strlen(p));//p是a的地址 abcdef 6;\0不算
	//printf("%d\n", strlen(p+1));//b的地址  bcdef  5
	////printf("%d\n", strlen(*p));//*p是a a转化为地址里没有数组 error 
	////printf("%d\n", strlen(p[0]));//同上
	//printf("%d\n", strlen(&p));//p里面放的是a的地址 &p-取的是p的地址，p的地址里遇到0的时候就停止 随机值
	//printf("%d\n", strlen(&p+1));//随机值
	//printf("%d\n", strlen(&p[0]+1));//同上 5

	//printf("%d\n", sizeof(p));//p是a地址 4/8
	//printf("%d\n", sizeof(p+1));//b的地址 4/8
	//printf("%d\n", sizeof(*p));//p是a的地址，*p就是a，1
	//printf("%d\n", sizeof(p[0]));//元素a的大小 1
	//printf("%d\n", sizeof(&p));//p的地址 4/8
	//printf("%d\n", sizeof(&p+1));//b的地址 4/8
	//printf("%d\n", sizeof(&p[0]+1));//b的地址 4/8

//	return 0;
//}
//二维数组
//int main()
//{
//    int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//传过去的是整个数组 3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//第一个元素 4
//
//	printf("%d\n", sizeof(a[0]));//a[0]可以表示第一行的数组名 传过去的是第一行数组 4*4=16
//
//	printf("%d\n", sizeof(a[0]+1));//表示第一行的第二个元素的地址 4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//第一行第二个元素 4
//
//	printf("%d\n", sizeof(a+ 1));//二维数组的首元素地址是二维数组的第一行 a+1是第二行的地址 4/8
//	printf("%d\n", sizeof(*(a + 1)));//第二行数组 16
//
//	printf("%d\n", sizeof(&a[0] + 1));//取出第一行的地址+1 取出了第二行的地址 4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//第二行数组 16
//
//	printf("%d\n", sizeof(*a));//a是第一行的地址 第一行地址解引用 16
//	printf("%d\n", sizeof(a[3]));//sizeof()不参与真实计算 只是根据类型去判断大小 a[3]与a[0]相同 都是16
//	return 0;
//}
//看代码是内存
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a是数组的地址，+1跳过数组
//	printf(("%d,%d\n"), * (a + 1), * (ptr - 1));//a+1是2；ptr-1意思是向前挪动一位是a[5]=5;
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//假设p的值为0x100000.如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);//0x00100014/20
//	printf("%p\n", (unsigned long)p + 0x1);//0x0010001 p转化成了整形数据 1048576+1=1048577 转化成16进制为0x0010001
//	printf("%p\n", (unsigned int*)p + 0x1);//无符号整形+1跳过一个整形4个字节 0x0010004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };//01 00 00 00-02 00 00 00-03 00 00 00-04 00 00 00
//	int *ptr1= (int *)(&a + 1);
//	int *ptr2 =(int *)((int)a + 1);
//	printf("%x,%x",ptr1[-1], *ptr2);//%x-十六进制数形式输出整数
//	//ptr1[-1]=4=0x4;*ptr2取00 00 00-02即0x02000000 
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式{1，3，5}
//	int* p;
//	p = a[0];//a[0]表示第一行首元素的地址 1
//	printf("%d", p[0]);//1
//
//	return 0;
//}

int main()
{
	int a[5][5];//二维数组
	int(*p)[4];//指向四个整形元素数组的指针
	p = a;//把数组a第一行的地址给了p
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//p[4][2]=*(*(p+4)+2);把p当成二维数组来看，p一行有四个元素，取第四行第二个元素
	//指针减去指针得到了元素个数之差；-4
	//10000000 00000000 00000000 00000100原码
	//11111111 11111111 11111111 11111011反码
	//11111111 11111111 11111111 11111100补码 fffffc -4
	return 0;
}