#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	return 0;
//}
//���ͼ���-1.char-2.short/short int-3.int-4.long/long int-(unsigned/signed)
//�����ͼ���-1.float-2.double
//����������ڴ��д���ǲ���
//��С�˽���
//���(�洢)ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�
//С��(�洢)
// \566
// ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ���������ڴ�ĸߵ�ַ�У�
//int main()
//{
//	int a = 20;
//	return 0;
//}
//���һ�δ���������ǵ�ǰ�������ֽ���ʲô
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int* p=&a;//&aǿ������ת��Ϊchar*
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//��װ����
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//{
//	//	return 1;
//	//}
//	//else
//		//return 0;
//	return *p;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//ֱ�Ӷ�ǿ������ת���ĵ�ַ������
//}
//ָ�����͵�����
//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p;*p������1���ֽ�;int*p;*p������4���ֽ�
//2.
//int main()
//{
//	//���һ�δ���������ǵ�ǰ�������ֽ���ʲô
//	//����1��С��
//	//����0�����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
	//1000 0000 0000 0000 0000 0000 0000 0001
	//1111 1111 1111 1111 1111 1111 1111 1110
	//1111 1111 1111 1111 1111 1111 1111 1111  ����
	//1111 1111 char�ﴢ������� �ұ�
	//��ӡ ��������
	//1111 1111 1111 1111 1111 1111 1111 1111
	/*signed char b = -1;*/
	//1111 1111 
	//unsigned char c = -1;
	//1111 1111
	//��������
	//0000 0000 0000 0000 0000 0000 1111 1111
	//255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//
//}

//int main()
//{
	//char a = -128;//�з��ŵ�char�ķ�Χ�ǣ�-128~127//�޷���char�ķ�Χ�ǣ�0~255
	//1000 0000 0000 0000 0000 0000 1000 0000
	//1111 1111 1111 1111 1111 1111 0111 1111
	//1111 1111 1111 1111 1111 1111 1000 0000 -����
	//1000 0000 char�洢
	//��������
	//1111 1111 1111 1111 1111 1111 1000 0000-����
	//�޷��� ԭ����ڲ�����Ϊ����4294967168
	//printf("%u\n", a);
	//%u-��ӡʮ���Ƶ��޷�������
//	return 0;
//}
//int main()
//{
//	char a = 128;//�з��ŵ�charֻ�ܴ浽127��127+1Ϊ-128������������Ϊ4294967168
//	printf("%u\n",a);
//	return 0;
//}
#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//9 8 7 6 5 4 3 2 1 0 1 2....
//		Sleep(100);
//	}
	//-1
	//10000000 00000000 00000000 00000001
	//11111111 11111111 11111111 11111110 ����
	//11111111 11111111 11111111 11111111 ����-1
	//11111111 11111111 11111111 11111110 �²���
	//11111111 11111111 11111111 11111101 �·���
	//10000000 00000000 00000000 00000010 -2
//	return 0;
//}
//int main()
//{
//	char a[1000];//1���ֽڣ�0-255��
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//a[0]=-1-0=-1
		              //a[1]=-1-1=-2
		              //a[2]=-1-2=-3
		              //...
		              //a[127]=-1-127=-128//a[]��char����ֻ�ܴ洢��-128
		              //a[128]=-1-128=127
		              //...
		              //a[255]=-1-255=0
	//}
//	printf("%d", strlen(a));//strlen()���ַ�������Ҫ�ҵ�'\0'
//	return 0;
//}

//unsigned char i = 0;//��Χ�ǣ�0-255��
//int main()
//{
//	for (i = 0; i <= 255; i++)//��255+1=0��
//	{
//		printf("hello world\n");//��ѭ��
//	}
//	return 0;
//}

//���������ڴ��еĴ洢
//int main()
//{
//	double d = 1E10;//1*10^10
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	int n = 9;
	//0 00000000 000000000000000000001001 EȫΪ0 Ĭ��Ϊ����С������//��ӡС�������λ0.000000
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//"%d" "��ʮ������������ʽ���"  9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//*pFloat������//"%f""�����ȸ�����(Ĭ��float)��ʮ���Ƽ�����" 0.000000
	//��������ʽ�洢���Ը�������ʽȡ��
//	*pFloat = 9.0;
	//�洢��(-1)^0*1.001*2^3
	//0 10000010 001000000000000000000000 ����
	//ת��Ϊʮ���ƣ�1091567616
//	printf("num��ֵΪ��%d\n", n);//1091567616
	//�Ը�������ʽ�洢����������ʽȡ��
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.000000
//	return 0;
//}
//����˵����������ʽ�Ĵ洢��ʽ�����Ͳ�ͬ
//9.0
//1001.0 ��������ʽ
//(-1)^0*1.001*2^3
//(-1)^s*M(M�Ǵ��ڵ���1С��2������*2^E(E��ʾָ��λ)
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	return 0;
//}