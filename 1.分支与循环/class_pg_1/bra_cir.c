#define  _CRT_SECURE_NO_WARNINGS 1

//c语言 结构化 的程序设计语言
//1.顺序结构 2.选择结构 3.循环结构 （生活中）

//1.分支语句  if  switch  exp1?exp2:exp3;
//多分支   if(exp1) 语句1； else if(exp2) 语句2； else 语句3；
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("恭喜你还未解锁健康系统");
//	else
//		printf("啦啦啦，成年啦");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//	    if (age >= 18 && age <= 28)
//		printf("青年\n");
//		else if (age >= 28 && age <= 50)
//		printf("壮年\n");
//		else if (age >= 50 && age <= 90)
//		printf("老年\n");
//		else
//		printf("耄耋");
//	}
//		//if (18 <= age <= 28)//完全错误,不可以这样写，要用&&
//		//printf("青年\n");
//	return 0;
//}
//上下两种方法等价

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//要执行多条语句，要用代码块
//	else if (age >= 18 && age <= 28)
//		printf("青年\n");
//	else if (age >= 28 && age <= 50)
//		printf("壮年\n");
//	else if (age >= 50 && age <= 90)
//		printf("老年\n");
//	else
//		printf("耄耋");
//	//if (18 <= age <= 28)//完全错误,不可以这样写，要用&&
//	//printf("青年\n");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("hehe\n");
//        else
//			printf("haha\n");//else是就近远测，和离他最近的if匹配（比较重要）
//	return 0;//if-else 语句 算一个语句
//}
//要分清上下两段代码
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//判断相等，好的代码风格 常数放在左边，变量放在右边，不容易出错
//int main()
//{
//	int num = 4;
//	if (num ==5)//()里面的是表达式，要判断他的真假  而且=是复制，==是相等
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("这个数是奇数\n");
//	else
//		printf("不是奇数\n");
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d\n", num);
//		num+=2;
//	}
//		
//	return 0;
//}


//老师的
//int main()
//{
//	int i;
//	while (i <= 100)
//	{
//		if (i%2 ==1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//switch语句---用来实现多分支的  switch和case

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("Monday");
//	else if (2 == day)
//		printf("Tuesday");
//	else if (3 == day)
//		printf("Wednesday");
//	else if (4 == day)
//		printf("Thursday");
//	else if (5 == day)
//		printf("Friday");
//	else if (6 == day)
//		printf("Saturday");
//	else 
//		printf("Sunday"); 
//	return 0;
//}

//上下两段代码输出的结果一致
//今天又发现一个让人吐了的bug，注释忘记加了，结果那个bug显示真是让人头大
//int main()
//{
//	int day;//switch后面的只能是整式表达式，所以不能用char 或者 double
//	scanf("%d", &day);
//	switch (day)//根据day决定从哪进去 case决定入口,根据break决定从哪停止
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:
//		printf("tuesday\n");
//		break;
//	case 3:
//		printf("wednesday\n");
//		break;
//	case 4:
//		printf("thursday\n");
//		break;
//	case 5:
//		printf("friday\n");
//		break;
//	case 6:
//		printf("saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//		break;
//	}
//
//		return 0;
//}

//switch()括号里面要是整形表达式  case后面是整形常量表达式
//还可以这样写 case后面的break不一定需要
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//		//编程好习惯，加上break
//	default ://case都不匹配，就执行default的内容
//		printf("输入错误");
//		break;//case和default没有顺序之说，一般吧default放在后面
//	}
//	return 0;
//}


//switch语句我们要看他有没有break，如果没有我们是继续执行的
//int main()
//{
//	int n = 1;
//	int m = 2;//没有break就继续执行case
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;
//			n++;
//			break;//这个break是要我们跳出case里面的那个switch
//		}
//	case 4:m++;
//		break;//这个break意味着我们要跳出 整个 switch语句了
//	default :
//		break;
//
//	}
//	printf("m = %d   n = %d", m, n);//5  3 
//	return 0;
//}

//综上所述  分支语句有  1.if-else if-else语句   2.switch-case语句（要注意有没有case哦）

//循环语句 while    for    do-while

//int main()
//{
//	while (1)
//	{
//		
//		printf("0  ");
//		printf("1  ");
//		system("color 2");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//system()---执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入我是猪，则取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("真乖，我的猪宝贝，电脑已经取消关机\n");
//	}
//	else
//	{
//		printf("想清楚哦，到底谁是猪\n");
//		goto again;
//	}
//	return 0;
//}
