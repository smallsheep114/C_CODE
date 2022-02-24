#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("*******   1. play   *****\n");
	printf("*******   0. exit   *****\n");
	printf("*************************\n");
}


void game()
{
	//雷的信息存储 9*9    雷---1    不是雷---0
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 };//最好改成11*11的数组，这样排雷会方便很多
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard( mine,ROWS,COLS ,'0');//第四个参数很有必要
	Initboard(show, ROWS, COLS, '*');//第四个参数很有必要
	//打印棋盘
    //9*9是用户看到的，11*11是后台看的
	Displayboard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	Displayboard(mine, ROW, COL);
	//扫雷

	FindMine(mine,show,ROW,COL);//在mine数组中找信息，放到show数组里去
}

void test()
{
	srand((unsigned int)time(NULL));//随机数起点
	int input = 0;
	do
	{
		menu();
		printf("请选择->:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}