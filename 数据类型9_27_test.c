#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�Զ������ͣ��ṹ�壬ö�٣�����
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ��������-����+�绰+�Ա�
//struct Stu//Stu-�ṹ��ؼ���
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//	//��Ա����
//}s4,s5,s6;
//
//struct Stu s3;//ȫ�ֱ���
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	//�����ṹ�����s1/s2
//
//	return 0;
//}

//�ṹ��������
//struct Node
//{
//	int date;//4
//	//struct Node n;//�ṹ���ڲ��ܰ����Լ����޷��ж�Ҫ�������Ŀռ�
//	struct Node* next;//4/8//��ָ��ȥ����һ���ṹ�����
//}Node;
//int main()
//{
//	//sizeof(struct Node);
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//�ṹ���ʼ��
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

//�ṹ���ڴ����
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
//�ṹ��Ķ������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��-//����4����������С��4��a����4�ı�����
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������-//����1��4��1������������4
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�������
// ����������
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
//	struct S3 s3;//16-S3������������8��16+8=24
//	double d;//8-24+8=32
//	//�ṹ������������8.32��8��������
//};
//int main()
//{
//	struct S3 s3;
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//	return 0;
//}
//�ڴ����-�ռ任ȡʱ��
//��ʡ�ռ�ķ���
//1.�ÿռ�С�ĳ�Ա����������һ��
//2.�޸�Ĭ�϶�����
//#pragma//Ԥ����ָ��
#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8
//	//12
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
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
//	//offsetof()�����Ա��������ڽṹ���ƫ����
//	printf("%d\n", offsetof(struct S,c));//0
//	printf("%d\n", offsetof(struct S,i));//4
//	printf("%d\n", offsetof(struct S,d));//8
//
//	return 0;
//}

//�ṹ�崫��
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
//	Print1(s);//��ֵ
//	Print2(&s);//��ַ
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//
//	//printf("%d\n", s.a);
//	return 0;
//}

//λ��-��λ��ָ���Ƕ�����λ
//λ�ε������ͽṹ�����Ƶģ���������ͬ
//1.λ�εĳ�Ա������int,unsigned int��signed int��char
//2.λ�εĳ�Ա�������һ��ð�ź�һ������
//struct S 
//{
//	int _a : 2;//aֻ��Ҫ2������λ
//	int _b : 5;//bֻ��Ҫ5������λ
//	int _c : 10;//cֻ��Ҫ10������λ
//	int _d : 30;//dֻ��Ҫ30������λ
//	//47������λ-6���ֽ�48������λ
//};
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8���ֽ�
//	//λ�ε������ǽ�ʡ�ռ�
//    //λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ�����ٵġ�
//	//λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
//	return 0;
//}

//����
//struct S
//{
//	char a : 3;//һ���ַ�8��bitλ
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

//ö��
//ö�����͵Ķ���
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
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
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//��ʼֵ��0 1 2//�޸ĺ�2 4 8//0 9 10
//
//	return 0;
//}
//ʹ��ö�ٵ�ԭ��
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//3.��ֹ��������Ⱦ����װ��
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

//���ϣ������壩-����ͬһ��ռ�
//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա��
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
//	//����ͬһ��ռ�
//	return 0;
//}
//������Ĵ洢
//��С�˴洢��ʽ�жϷ���
// ����2.ʹ�ú���check_sys()
//check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
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
////����1.����intȡ��char
//	if (1 == *(char*)&a)
//	{
//		printf("С��\n");
//     }
//	else
//	{
//		printf("���\n");
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
//ö�ٵ��������ɱ�����������
//int main()
//{
//	enum Sex s = MALE;//һ�����εĴ�С 4���ֽ�
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//union Un
//{
//	int a;//4���ֽ� Ĭ�϶�������8����������4
//	char arr[5];//�����ܴ�С��5��ÿ��Ԫ�صĴ�С��1��Ĭ�϶�������8����������1
//	//���ϵĴ�С����������Ա�Ĵ�С����������Ա�Ĵ�С��5
//	//���������յĴ�С������������������������Ҳ����4��������
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}