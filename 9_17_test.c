#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
	//*(p+2)==p[2]==>*(arr+2)==arr[2]
	
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	////强制类型转换（int *）
	//int *ptr1 = (int *)(& aa + 1);//&aa，取出了数组aa的地址；&aa+1，取出了跳过数组aa的地址
	//int *ptr2 = (int *)(*(aa + 1));//aa，是数组aa第一行的地址，aa+1,数组aa第二行的地址，*(aa+1),取出aa数组第二行的内容(6,7,8,9,10)

	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//ptr1-1是aa数组最后一个元素的地址是10；ptr2-1是aa数组第一行最后一个元素的地址是5；
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//把三个常量字符串的首元素地址传入了a[]中；分别是'w';'a';'a';
//	char** pa = a;//pa里放着a的首元素地址
//
//	pa++;//指向了a[]中第二个字符串中的首元素'a'地址
//	printf("%s\n", *pa);//以'a'的地址为开头打印出一个字符串，即"at"
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";//常量字符串，把字符串的首元素a的地址传到了p中
//	return 0;
//}
//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};//把各字符串首元素地址存入了char*中；分别是'E','N','P','F';
//	char** cp[] = { c + 3,c + 2,c + 1,c };//指向四个首元素地址的数组'F','P','N','E'
//	char*** cpp = cp;//指向cp[]的首元素的地址 'F'
//
//	printf("%s\n", **++cpp);//前置++，先++再使用；"POINT"
//	//printf()保留其中计算的变化；
//	printf("%s\n", *-- * ++cpp + 3);//*++cpp得到指向'P'的地址的地址；--得到指向'F'的地址的地址,*得到'F'的地址；+3指向 //ER
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2]=*(cpp-2)；**(cpp-2)=c[-2]；c[-2]+3=c[1]='E'；"ENTER"//ST
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1=*(cp[-1]-1)+1=c[-5]+1=c[-1];//EW
//	return 0;
//}
//作业
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//
//	return 0;
//}
//字符串逆序
#include<string.h>
#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right =str+len-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcded-->fedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串是：%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum +=ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//水仙花数
//自幂数
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1.计算i的位数 n位数
//		int n = 1;//任意写一个数，它至少是1位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//123/10 n++
//		// 12/10 n++
//		// 1/10 
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//打印菱形的图案
//奇数行
int main()
{
	int line = 0;
	scanf("%d" ,&line);//7
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <line-1-i; j++)
		{
			printf(" ");
		}
		//打印*号
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    //打印下半部分
	for (i = 0; i < line-1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i;j++)
		{
			printf(" ");
		}
		//打印*号
		for (j = 0; j <2*(line-1-i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//写的代码要通用