#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 1;
//	while (num<=10)
//	{
//		if (num == 5)
//			break;//这break这里直接停止，循环不再继续(永久终止循环）
//		printf("%d\n",num);
//		num++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num <= 10)
//	{
//		num++;
//		if (num == 5)
//			continue;//跳过本段循环后面的代码，回到判断部分
//
//		printf("%d\n", num);//
//		
//	}
//
//	return 0;
//}


//总结：
//continue是用来终止本次循环的，也就是本次循环中continue后边的代码不会再次执行
//而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
//不想打印其中的某个值可以用continue

//而break是用来终止整个循环的

//getchar()  输入一个字符   putchar  输出一个字符（比printf方便）
//int main()
//{
//	char ch = 'w';
//	printf("%c\n", ch);
//	return 0;
//}

//另一种写法
//有时候编译器没有报错，但是运行的时候，报一个无法解析该函数，我们可以试试重新启动该项目
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("    %c", ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//结束程序ctrl + z
//	//EOF---end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	
//	//int ch = 0;
//	////EOF---end of file---文件结束标志
//	////实际价值:
//	//while ((ch = getchar())!=EOF)
//	//{
//	//	putchar(ch);
//	//}
//	
//
//	return 0;
//}


//下面那段代码多看看
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:->\n");//123456\n(空格）     123456 ABCD
//	scanf("%s", password);
//	//这个时候缓冲区还有一个\n,要清空    这个时候缓冲区还有空格+ABCD\n需要好多getchar()，这个时候我们要用到循环
//	//getchar();
//	while ((ch = getchar()) != '\n');
//	{
//		;//不需要循环里面的内容，我们可以不打
//	}
//	printf("请确认（y/n）\n");
//	
//	ret = getchar();
//	if (ret == 'y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	//printf("%d", '\n');
//	return 0;
//}
////scanf  getchar 输入函数---输入缓冲区---:123456\n(回车enter)  
////123456被scanf读走了，\n被getchar读走了  所以我们需要清空缓冲区，把\n除去



//又被自己整除一个bug，putchar和getchar弄混了
// 还有别把0和o弄混了
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//for循环 for(exp1;exp2;exp3)  exp1:初始化部分 exp2:条件判断部分  exp3:调整部分
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//for循环的执行流程  1.先exp1 i=1 2.再判断exp2是否为真 3.如果为真再进入循环体 4.接着执行exp3i++
//接着再判断exp2是否为真 以此类推，直到判断命题为假，循环结束

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//错误示例1
//不可在for循环体内修改循环变量，防止for循环失去控制
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)//在循环体内改变了i值
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//建议2   建议for语句的循环控制变量采用“前闭后开区间”写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//这种情况，i<10的写法比i<=9要好
//	{
//		printf("%d ", arr[i]);//i做下标，下标从零开始
//	}
//	return 0;
//}

//for的变种    1.for(;;)
//1.for循环的初始化，调整，判断 都可以省略  
//但是：for循环的 判断部分如果被省略 ，那判断条件就是：恒为真
//2.如果不是非常熟练，不要随便省略
//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}

//错误例子
//for循环镶嵌
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//i=0时，j的循环使得j成为10.之后i的九次循环就不打印呵呵，因为j一直为10
//		{
//			printf("hehe\n");
//		}
//	}
//	//输出结果为10个hehe
//	return 0;
//}


//变种2---两个循环变量放到了一个for()里面
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//注意哦，for（）里面是三个分号
//		//判断语句x<2和y<5必须同时满足，所以最终只输入两遍hehe
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//以下这段代码循环多少次呢
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//0为假,k=0,循环零次  如果赋值k非零，这段代码就是死循环
// 即k=1或其他
//	{
//		k++;
//	}
//	return 0;
//}
////循环零次


//do-while循环
//do   循环语句；  while(表达式)；
//先进行一次循环，再判断表达式真假，直到为假，停止循环
//int main()
//{
//	int num = 1;
//	do
//	{
//		if (num == 5)
//			continue;//num++没执行，所以进入了死循环
//		printf("%d\n", num);
//		num++;
//	}
//	while (num <= 10);
//	return 0;
//}
////do-while循环至少执行一次循环
//
