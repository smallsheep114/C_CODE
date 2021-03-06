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

void Displayboard(char board[ROWS][COLS], int row, int col)//拿出来的是11*11，只操作9*9
{
	int i = 0;
	int j = 0;
	//打印列号
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
	//布置一个，count--
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
	printf("请输入排查雷的坐标\n");
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.不是雷
			else
			{
				//计算x y坐标周围有几个雷
				int count = 0;
				count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//这样才是一个字符
				Displayboard(show, row, col);//show数组是给玩家看的
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		Displayboard(mine, row, col);
	}
}