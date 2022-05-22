#define  _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	printf("Hello Nowcoder");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("     **\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 12; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		printf("    *  *\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%.3f", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 3 - 2 * i; j++)
//		{
//			printf("%c",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%ch", &ch);
//	printf("%d", ch);//因为字符在内存中以ASC||的形式存储，所以我们只需要以整形的方式输出即可
//	return 0;
//}

//四舍五入
//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%.0f", a);
//	return 0;
//}


//四舍五入的思路，其实只需要会判断正负数即可
//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	if (a > 0)
//	{
//		
//		 a = (a + 0.5);//理解这种写法的意思
//		printf("%d", (int)a);
//	}
//	else
//	{
//		 a = (a - 0.5);
//		printf("%d", (int)a);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}