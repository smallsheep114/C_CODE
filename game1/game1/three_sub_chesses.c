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
//   |   |     ��ӡ��״

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);//��ʼ������   ����ȱ�ٵ�
	DisplayBoard(board,ROW,COL);//��ӡ����
	while (1)
	{
		//�������
		// PlaterMove(board,ROW,COL);
		PlayerMove(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'c')
		{
			break;//����whileѭ��
		}
		//�ж���Ӯ
		//��������
		//ComputerMove(board,ROW,COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;//����whileѭ��
		}
		//�ж���Ӯ
		//���Ӯ---'*'
		//����Ӯ---'#'
		//��Ϸ����---'c'
		//����---'q'
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ�����ֻ��Ҫһ�ξ͹���
	do
	{
		menu();
		printf("��ѡ��-->:");
	    scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}