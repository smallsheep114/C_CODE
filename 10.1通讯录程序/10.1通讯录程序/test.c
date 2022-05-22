#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("****     1.add       2.del      ****\n");
	printf("****     3.search    4.modify    ***\n");
	printf("****     5.show      6.sort      ***\n");
	printf("****     7.save      0.exit      ***\n");
	printf("************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：data指针和size(记录当前元素个数)  capacity（容量）
	//初始化数组
	InitContact(&con);//传址   而且还要改造其中的值
	//再修改一下初始化的内容，上次保存的内容，这次就不用重新写了
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://把case的值进行改良一下，使用enum枚举,可读性增高
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
			SortContact(&con);
			break;
		case SAVE://把通讯录信息放到文件里面去
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//增加一个功能，销毁通讯录，释放动态内存
			DestoryContact(&con);
			printf("退出程序并保存\n");
			break;
		default:
			printf("选择错误请重新选择:\n");
			break;
		}
	} while (input);
	return 0;
}