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
	//�׵���Ϣ�洢 9*9    ��---1    ������---0
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//��øĳ�11*11�����飬�������׻᷽��ܶ�
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard( mine,ROWS,COLS ,'0');//���ĸ��������б�Ҫ
	Initboard(show, ROWS, COLS, '*');//���ĸ��������б�Ҫ
	//��ӡ����
    //9*9���û������ģ�11*11�Ǻ�̨����
	Displayboard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	Displayboard(mine, ROW, COL);
	//ɨ��

	FindMine(mine,show,ROW,COL);//��mine����������Ϣ���ŵ�show������ȥ
}

void test()
{
	srand((unsigned int)time(NULL));//��������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��->:\n");
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
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}