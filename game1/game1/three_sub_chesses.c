#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("***  1.play  0.exit   ****\n");
	printf("**************************\n");
	
}
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |     打印形状

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);//初始化棋盘   不可缺少的
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{
		//玩家下棋
		// PlaterMove(board,ROW,COL);
		PlayerMove(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'c')
		{
			break;//跳出while循环
		}
		//判断输赢
		//电脑下棋
		//ComputerMove(board,ROW,COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;//跳出while循环
		}
		//判断输赢
		//玩家赢---'*'
		//电脑赢---'#'
		//游戏继续---'c'
		//满了---'q'
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间起点只需要一次就够了
	do
	{
		menu();
		printf("请选择-->:");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}