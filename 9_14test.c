#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//��������
//����������Ԫ�صĵ�ַ
//����
//1.sizeof(��������-��������ʾ��������
//2.&������-����������������
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//16�Ǵ���ģ�����4/8����a+0),��ʱa���ǵ����ģ���������ʾ��Ԫ�صĵ�ַ����˵�ַ�ֽڳ�����4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a+1));//4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8-&aȡ����������ĵ�ַ����������ĵ�ַҲ��4/8���ֽ�
//	printf("%d\n", sizeof(*&a));//16-*��������&ȡ��ַ�����ˣ���ͬ�ڵ�һ��д�� 
//	printf("%d\n", sizeof(&a+1));//4/8  &a���������飬&a+1��Ȼ�����������鵫���ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//
//	return 0;
//}
//�ַ�����
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
//	printf("%d\n",strlen(arr));//6�Ǵ���ģ��������ֵ������������Ԫ�ص�ַ����������Ѱ��ʱ�Ҳ���'\0'����������ֵ
//	printf("%d\n",strlen(arr + 0));//���ֵ
	//printf("%d\n",strlen(*arr));//1�Ǵ���ģ�strlen������Ҫ��һ����ַ��ȥ��*arr��'a',ASCALL����97����������
	//printf("%d\n",strlen(arr[1]));//ͬ�ϣ�arr[1]��98,�������
//	printf("%d\n",strlen(&arr));//���ֵ ��֪��ʲôʱ������'\0'
//	printf("%d\n",strlen(&arr+1));//���ֵ -6
//	printf("%d\n",strlen(&arr[0] + 1));//���ֵ-1
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//Ѱ�ҵ�'\0'ʱֹͣ 6
//	printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//���� ����ȥ����97 0X000016������ĵ�ַ�ﲢû������
	//printf("%d\n", strlen(arr[1]));//���� ����ȥ����98
	//printf("%d\n", strlen(&arr));//ȡ����������ĵ�ַ-����ĵ�ַ-����ָ�� char(*p)[7]=&arr;strlen(char*) ���߲�����
	//printf("%d\n", strlen(&arr+1));//�������������Ҳ���\0 ���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//ȡ���ڶ���Ԫ�صĵ�ַ�������ҵ�\0 5

	//printf("%d\n", sizeof(arr));//7 abcdef\0
	//printf("%d\n", sizeof(arr+0));//��Ԫ�ص�ַ 4/8
	//printf("%d\n", sizeof(*arr));//��Ԫ�ص�ַ������ 1
	//printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ�صĴ�С 1
	//printf("%d\n", sizeof(&arr));//��������ĵ�ַ 4/8
	//printf("%d\n", sizeof(&arr+1));//������������ĵ�ַ 4/8
	//printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�صĵ�ַ 4/8
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";//�����ַ�����p������a�ĵ�ַ���������ַ����ĵ�ַ

	//printf("%d\n", strlen(p));//p��a�ĵ�ַ abcdef 6;\0����
	//printf("%d\n", strlen(p+1));//b�ĵ�ַ  bcdef  5
	////printf("%d\n", strlen(*p));//*p��a aת��Ϊ��ַ��û������ error 
	////printf("%d\n", strlen(p[0]));//ͬ��
	//printf("%d\n", strlen(&p));//p����ŵ���a�ĵ�ַ &p-ȡ����p�ĵ�ַ��p�ĵ�ַ������0��ʱ���ֹͣ ���ֵ
	//printf("%d\n", strlen(&p+1));//���ֵ
	//printf("%d\n", strlen(&p[0]+1));//ͬ�� 5

	//printf("%d\n", sizeof(p));//p��a��ַ 4/8
	//printf("%d\n", sizeof(p+1));//b�ĵ�ַ 4/8
	//printf("%d\n", sizeof(*p));//p��a�ĵ�ַ��*p����a��1
	//printf("%d\n", sizeof(p[0]));//Ԫ��a�Ĵ�С 1
	//printf("%d\n", sizeof(&p));//p�ĵ�ַ 4/8
	//printf("%d\n", sizeof(&p+1));//b�ĵ�ַ 4/8
	//printf("%d\n", sizeof(&p[0]+1));//b�ĵ�ַ 4/8

//	return 0;
//}
//��ά����
//int main()
//{
//    int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//����ȥ������������ 3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//��һ��Ԫ�� 4
//
//	printf("%d\n", sizeof(a[0]));//a[0]���Ա�ʾ��һ�е������� ����ȥ���ǵ�һ������ 4*4=16
//
//	printf("%d\n", sizeof(a[0]+1));//��ʾ��һ�еĵڶ���Ԫ�صĵ�ַ 4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//��һ�еڶ���Ԫ�� 4
//
//	printf("%d\n", sizeof(a+ 1));//��ά�������Ԫ�ص�ַ�Ƕ�ά����ĵ�һ�� a+1�ǵڶ��еĵ�ַ 4/8
//	printf("%d\n", sizeof(*(a + 1)));//�ڶ������� 16
//
//	printf("%d\n", sizeof(&a[0] + 1));//ȡ����һ�еĵ�ַ+1 ȡ���˵ڶ��еĵ�ַ 4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//�ڶ������� 16
//
//	printf("%d\n", sizeof(*a));//a�ǵ�һ�еĵ�ַ ��һ�е�ַ������ 16
//	printf("%d\n", sizeof(a[3]));//sizeof()��������ʵ���� ֻ�Ǹ�������ȥ�жϴ�С a[3]��a[0]��ͬ ����16
//	return 0;
//}
//���������ڴ�
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a������ĵ�ַ��+1��������
//	printf(("%d,%d\n"), * (a + 1), * (ptr - 1));//a+1��2��ptr-1��˼����ǰŲ��һλ��a[5]=5;
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
//����p��ֵΪ0x100000.���±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);//0x00100014/20
//	printf("%p\n", (unsigned long)p + 0x1);//0x0010001 pת�������������� 1048576+1=1048577 ת����16����Ϊ0x0010001
//	printf("%p\n", (unsigned int*)p + 0x1);//�޷�������+1����һ������4���ֽ� 0x0010004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };//01 00 00 00-02 00 00 00-03 00 00 00-04 00 00 00
//	int *ptr1= (int *)(&a + 1);
//	int *ptr2 =(int *)((int)a + 1);
//	printf("%x,%x",ptr1[-1], *ptr2);//%x-ʮ����������ʽ�������
//	//ptr1[-1]=4=0x4;*ptr2ȡ00 00 00-02��0x02000000 
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ{1��3��5}
//	int* p;
//	p = a[0];//a[0]��ʾ��һ����Ԫ�صĵ�ַ 1
//	printf("%d", p[0]);//1
//
//	return 0;
//}

int main()
{
	int a[5][5];//��ά����
	int(*p)[4];//ָ���ĸ�����Ԫ�������ָ��
	p = a;//������a��һ�еĵ�ַ����p
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//p[4][2]=*(*(p+4)+2);��p���ɶ�ά����������pһ�����ĸ�Ԫ�أ�ȡ�����еڶ���Ԫ��
	//ָ���ȥָ��õ���Ԫ�ظ���֮�-4
	//10000000 00000000 00000000 00000100ԭ��
	//11111111 11111111 11111111 11111011����
	//11111111 11111111 11111111 11111100���� fffffc -4
	return 0;
}