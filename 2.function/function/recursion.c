#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//递归---程序调用自身的变成技巧  把大事化小
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//会一直递归下去，最后导致栈溢出

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//代码题---按顺序打印一个多位数的每一位数字
// 太妙了
//1234   个位%10==4       十位/10%10==3     百位/100%10==2    
//1234----123  4     123----12   3     12----1   2
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123)   4
//	//print(12)    3    4
//	//print(1)     2     3    4
//	return 0;
//}

//代码题---编写函数不允许创建临时变量，求字符串的长度
//编译器报错---系统找不到指定文件---看看是不是哪个显示窗口没关
//要分清strcpy  strcmp的作用
// 使用临时变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//这个是我没想到的，下一次传入的就是第二个元素的地址，第三个元素的地址……
//	}
//	return count;
//}

//使用递归
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr是数组，，数组传参，传过去的不是一整个数组，而是第一个元素的地址(指针变量)
//	printf("len = %d", len);
//	return 0;
//}

//递归与迭代
//代码题----求n的阶乘（不考虑溢出）
//普通
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//函数
//int Fac1(int n)
//{
//	int i = 0;
//	int re = 1;
//	for (i = 1; i <= n; i++)
//	{
//		re = re * i;
//	}
//	return re;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//递归---有时候要去逆向思维
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1); 
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("n! = %d\n", ret);
//	return 0;
//}

//代码题---求第n个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34 55
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//计算第50的斐波那契数的时候，会发现耗时很久，效率很低，太多的重复计算了
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--; 
//	}
//	return b;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("第%d个斐波那契数是%d\n", n, ret);
//	/*printf("\ncount = %d\n", count);*/
//	return 0;
//}
//所以递归不能很好的解决这个问题

//void test(int num)
//{
//	if (num < 10000)
//	{
//		test(num + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//两个递归的经典题目
//1.汉诺塔问题----找个规律让计算机也会挪(广联达)
//2.青蛙跳台阶问题


//1.汉诺塔问题
//void Move(int n, char A ,char B , char C)
//{
//	if (n == 1)
//	{
//		printf("%d# from %c to %c\n", n, A, C);//如果只是一个盘子，直接从a移到c即可
//	}
//	else
//	{
//		Move(n - 1, A, C, B);//1.将1~n-1个盘子，从a移到b
//		printf("%d# from %c to %c\n", n, A, C);//将第n号盘子，从a移到c
//		Move(n - 1, B, A, C);//将1~n-1个盘子，从b移到c
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入盘子数：\n");
//	scanf("%d", &n);
//	printf("移动步骤如下：\n");
//	Move(n, 'A', 'B', 'C');
//	return 0;
//}

//2.青蛙跳台问题---一直青蛙一次可以跳一个台阶，或者两个台阶，求青蛙跳到第n个台阶有多少种情况
//int Move(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Move(n);
//	printf("一共有%d种跳法\n", ret);
//	return 0;
//}

//水仙花数(1-1000)
int main()
{
	int i = 0;
	for (i = 1; i < 1000; i++)
	{
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d ",i);
	}
	return 0;
}