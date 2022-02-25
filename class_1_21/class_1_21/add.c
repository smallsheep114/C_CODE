#define  _CRT_SECURE_NO_WARNINGS 1
static int g_val = 2022;//现在这个变量只能在这个源文件内部使用


static int Add(int x, int y)
{
	int z = x + y;
	return z;
}