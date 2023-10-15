#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//1.存放1000个好友信息
//-名字
//-电话
//-性别
//-住址
//-年龄
//2.增加好友信息
//3.删除指定名字的好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印
void menu()
{
	printf("***********************************************************\n");
	printf("*****************1.add               2.del   **************\n");
	printf("*****************3.search            4.modify**************\n");
	printf("*****************5.show              6.sort  **************\n");
	printf("*****************0.exit                      **************\n");
	printf("***********************************************************\n");

}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里边包含1000个元素的数组和size
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//自主实现
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
