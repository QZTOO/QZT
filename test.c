#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//д��1
//�ṹ��
//struct�ṹ��ؼ��� Stu-�ṹ���ǩ struct Stu-�ṹ������
//struct Stu
//{//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֱ���
//������һ����䣬�����ź�����Ҫ�ӷֺ�//����һ���ṹ������

//д��2
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef ����������ȡ��ΪStu��Stu������
//
//int main()
//{
//	struct Stu s2 = {"jesica",30,"12343243223","����"};//�����ṹ�����
//	Stu s1 = {"����",20,"152489287076","��"};//���ü���struct
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
//	Stu s = { "��˹",40,"12333213345","��"};
//	Print1(s);
//	Print2(&s);//ϵͳ����С����ô��ṹ��ĵ�ַ
//	return 0;
//}
//ѹջ
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
	//ջ�� �ֲ����� ��������ʽ���� ��������Ҳ���ٿռ�
	//���� ��̬�ڴ���� malloc/free realloc calloc
	//��̬�� ȫ�ֱ��� ��̬����
	return 0;
	//���ݽṹ
	//--�������ݽṹ --�������ݽṹ --ͼ*
	//˳���         ������
	//����      
	////����һ��Ԫ�أ�ѹջ
	////ɾ��һ��Ԫ�أ���ջ     
	//ջ���Ƚ�ȥ���������ȳ�
	//����
}