#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
	//*(p+2)==p[2]==>*(arr+2)==arr[2]
	
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	////ǿ������ת����int *��
	//int *ptr1 = (int *)(& aa + 1);//&aa��ȡ��������aa�ĵ�ַ��&aa+1��ȡ������������aa�ĵ�ַ
	//int *ptr2 = (int *)(*(aa + 1));//aa��������aa��һ�еĵ�ַ��aa+1,����aa�ڶ��еĵ�ַ��*(aa+1),ȡ��aa����ڶ��е�����(6,7,8,9,10)

	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//ptr1-1��aa�������һ��Ԫ�صĵ�ַ��10��ptr2-1��aa�����һ�����һ��Ԫ�صĵ�ַ��5��
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//�����������ַ�������Ԫ�ص�ַ������a[]�У��ֱ���'w';'a';'a';
//	char** pa = a;//pa�����a����Ԫ�ص�ַ
//
//	pa++;//ָ����a[]�еڶ����ַ����е���Ԫ��'a'��ַ
//	printf("%s\n", *pa);//��'a'�ĵ�ַΪ��ͷ��ӡ��һ���ַ�������"at"
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";//�����ַ��������ַ�������Ԫ��a�ĵ�ַ������p��
//	return 0;
//}
//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};//�Ѹ��ַ�����Ԫ�ص�ַ������char*�У��ֱ���'E','N','P','F';
//	char** cp[] = { c + 3,c + 2,c + 1,c };//ָ���ĸ���Ԫ�ص�ַ������'F','P','N','E'
//	char*** cpp = cp;//ָ��cp[]����Ԫ�صĵ�ַ 'F'
//
//	printf("%s\n", **++cpp);//ǰ��++����++��ʹ�ã�"POINT"
//	//printf()�������м���ı仯��
//	printf("%s\n", *-- * ++cpp + 3);//*++cpp�õ�ָ��'P'�ĵ�ַ�ĵ�ַ��--�õ�ָ��'F'�ĵ�ַ�ĵ�ַ,*�õ�'F'�ĵ�ַ��+3ָ�� //ER
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2]=*(cpp-2)��**(cpp-2)=c[-2]��c[-2]+3=c[1]='E'��"ENTER"//ST
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1=*(cp[-1]-1)+1=c[-5]+1=c[-1];//EW
//	return 0;
//}
//��ҵ
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
//�ַ�������
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
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("�������ַ����ǣ�%s\n", arr);
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
//ˮ�ɻ���
//������
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1.����i��λ�� nλ��
//		int n = 1;//����дһ��������������1λ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//123/10 n++
//		// 12/10 n++
//		// 1/10 
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��ӡ���ε�ͼ��
//������
int main()
{
	int line = 0;
	scanf("%d" ,&line);//7
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <line-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    //��ӡ�°벿��
	for (i = 0; i < line-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i;j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (j = 0; j <2*(line-1-i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//д�Ĵ���Ҫͨ��