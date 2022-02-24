#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)//�ó�������11*11��ֻ����9*9
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//����һ����count--
	while (count)
	{
		int x = rand() % row + 1;//1--9
		int y = rand() % col + 1;//1--9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
	
}
//'1'-'0'==1    '3'-'0'==3
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	printf("�������Ų��׵�����\n");
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.������
			else
			{
				//����x y������Χ�м�����
				int count = 0;
				count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//��������һ���ַ�
				Displayboard(show, row, col);//show�����Ǹ���ҿ���
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(mine, row, col);
	}
}