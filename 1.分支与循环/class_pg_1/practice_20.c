#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//鹏哥的课，除了时长多得吓人，其他都挺好

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//这个时候把i改成了5---赋值,所以判断条件恒成立，死循环
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//int func(int a)//自定义函数
//{
//	int b;
//	switch (a)//没有看到break的话，我们会一直往下走哦
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//char --- ascii码值，char也可以算作整型常量表达式
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first\n");
//		case 1:
//			printf("second\n");
//			break;
//		default:printf("hello");
//		}
//	case 2:
//		printf("third\n");
//	}
//	return 0;
//}

//代码题---输出三个数，将他们从大到小进行排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	//注意如果写成这样：scanf("%d,%d,%d",&a,&b,&c);那我们在输入的时候也必须要加逗号
//	//算法实现，a放最大值，b次之，c放最小值
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//代码题--打印1-100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//除三之后的余数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//代码题---给定两个数，求这两个数的最大公因数
//我写的代码
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	scanf("%d%d", &num1, &num2);
//	for (a = 1; a <= num1; a++)
//	{
//		if (num1 % a == 0&&num2 % a == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//老师---辗转相除法(目前还不太理解这种原理，先用着吧)
//求77，28的最大公因数 77/28=2……21  28/21=1……7  21/7=3  所以最大公因数是7
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
// 所以有时候while循环里的判断也可以是m%n等一些东西
//	while (r=m % n)//这里写的很好，当m%n==0那一刻，循环结束了，而且最大公因数也出来了
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//代码题--打印1000-2000年之间的闰年
//闰年分为世纪闰年(除以400)  与   普通闰年（除以4并且不能被100整除）
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		//另一种写法---一句话
//		if ((year%4==0) && (year%100!=0) || (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//代码题--写一个代码打印100-200之间的素数

//myself
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)//错误原因，素数它不会进入该循环，无法在该循环中打印
//			{
//				count++;
//				if (count == 0)
//				{
//					printf("%d ", i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//teacher
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)//这个地方是我想不到的地方j=i
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//优化代码
//i=a*b 16=2*8=4*4  a和b中至少有一个数字<=开平方i的
//即我们要找i的约数，如果在2-i的开平方  之间的数字都没找到的话，说明已经找不到了
//sqrt--开平方的数学库函数   squt(i)

//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 101; i < 200; i+=2)//偶数不可能是素数，所以可以继续修改
//	{
//		for (j = 2; j <=sqrt(i); j++)//数学库函数sqrt，要加头文件#include<math.h>
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))//这个地方是我想不到的地方j=i
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//<素数求解的n种境界>一篇文章

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//代码题---编写程序数一下1到100的所有整数中出现多少个数字9
//myself
//个位---%10==     十位--/10==
//如果用if 和 else-if  if成功了的话，else-if是没有机会的  所以我们可以考虑用if的⭐并列⭐
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//	    if ((i / 10 != 9) && (i % 10 == 9))
//		{
//		count++;
//		printf("%d ", i);
//		}
//		else if ((i / 10 == 9) && (i % 10 != 9))
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//		else if ((i / 10 == 9) && (i % 10 == 9))
//		{
//			count += 2;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//teacher
//if的并列的话两个if就都有机会一起运行了
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//代码题---分数求和计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf ", sum);
//	return 0;
//}


//代码题--是个整数的最大值  班主任好像讲过
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//接受最大值,先猜测arr[0]是最大值,关键
//	int i = 0;//作为下标
//	int sz = sizeof(arr) / sizeof((arr[0]));
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//代码题--让屏幕上输出一个乘法口诀表
// 下面的乘法口诀表更容易些
//1*1=1
//2*1=2 2*2=4
//……
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 9; i++)//确定打印9行 n
//	{
//		for (n = 1; n <=i; n++)//打印1行的信息
//		{
//			printf("%d*%d=%-2d ", i, n, i * n);
//			
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int k = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left++;
//		}
//		else if (arr[mid] > k)
//		{
//			right--;
//		}
//		else
//		{
//			printf("i find it,下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到啦");
//	}
//	return 0;
//}

//猜数字游戏  1.生成随机数   2.猜数字


//多看几遍
//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play   0.exit   ***\n");
//	printf("***************************\n");
//}
//
////随机数起点只需要设置一次就够了
//void game()
//{
//	int ret = 0;//每次生成的随机数一样，我们要设置一个，动的随机数起点
//	int guess = 0;
//     ret = rand()%100+1;//time()---获取系统时间   NULL空指针
//	 //%100 范围是0-99，%100范围是1-100
//	 while (1)
//	 {
//		 printf("猜数字\n");
//		 scanf("%d", &guess);//用scanf函数时，不要再%d后面价格\n,会出问题
//		 if (guess > ret)
//		 {
//			 printf("猜大了\n");
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("猜小了\n");
//		 }
//		 else
//		 {
//			 printf("恭喜你，猜对了\n");
//			 break;
//		 }
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//需要时刻发生变化，时间戳   void srand(unsighed int seed)
//	do
//	{
//		menu();//调用menu函数
//		printf("请选择->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//调用game函数，这才是这个游戏的主角
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句  
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//goto例题---猪猪定理
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//shut down -s -t 60
//	//system()---执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在你分钟内关机，如果输入我是猪，则取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("真乖，电脑已经取消关机\n");
//	}
//	else
//	{
//		printf("想清楚哦，到底谁是猪\n");
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//	//shut down -s -t 60
//	//system()---执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在你分钟内关机，如果输入我是猪，则取消关机\n请输入");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("真乖，电脑已经取消关机\n");
//			break;
//		}
//	}
//	
//	return 0;
//}