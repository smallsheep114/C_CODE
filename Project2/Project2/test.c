#define  _CRT_SECURE_NO_WARNINGS 1
//#define inin 100
//#define max 100
//#include<stdio.h>
#include<stdio.h>
#include<string.h>

//标识符使用注意：
//不能使用一些基本类别    int  double  else  user
//不能使用下划线命名

//#define asd_2 100

//int main()
//{
//	add();
//	del();
//	return 0;
//}

/*#define N 5*///N --标识符
//标识符   规则
//1.基本类型   int double  else
//2.  sadjklasj123213213_   $^&
//

//   NULL--空指针--里面不放东西
//int main()
//{
//	int* p = NULL;
//	return 0;
//}



//int main()
//{
//	int* p;
//
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//  a *= a;   a =  a*a;//a的值变了  a = 36
//	return 0;
//}


//#define BK "abc"     //宏    完完全全替换
//int main()
//{
//	printf("%s",BK );
//	return 0;
//}

//

//#define N 4
//int main()
//{
//	int arr[][N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//	int i, j;
//	printf("原始数组:\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i < N; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//
//	printf("修改之后的数组:\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//   1  2  3  4
//   5  6  7 15
//   6  10 11 8
//   13 15  12 16

//#include<stdio.h>
//struct student
//{
//	int num;
//	char name[20];
//	float score;
//}student1, student2;
//int main()
//{
//	scanf("%d %s %f",&student1.num, student1.name, &student1.score);
//	scanf("%d %s %f",&student2.num, student2.name, &student2.score);
//	printf("%d,%s,%6.2f\n", student1.num, student1.name, student1.score);
//	printf("%d,%s,%6.2f\n", student2.num, student2.name, student2.score);
//	return 0;
//}


//int main()
//{
//	char str[50] = "";
//	int i, j,line,k,len;
//	char tmp;
//	scanf("%s", str);
//	//输入一串字符串，#放在前面去，后面的部分再排序
//	//1.找非字母并放到前面去，使用j
//	for (i = 0, j = 0; str[i] != '\0'; i++)
//	{
//		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
//		{
//			tmp = str[j];
//			str[j++] = str[i];
//			str[i] = tmp;
//		}
//	}
//	line = j;
//	len = strlen(str);//len就直接用整个长度的len就可以了，只需要改起始地点
//	//排序后面的部分
//	for (i = line; i<len-1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < len; j++)
//		{
//			if (str[k] > str[j])
//				k = j;
//		}
//		if (k != i)
//		{
//			tmp = str[i];
//			str[i] = str[k];
//			str[k] = tmp;
//		}
//	}
//	//3.打印
//	printf("%s\n", str);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = ' ';
//	printf("%d", ch);
//	return 0;
//}


//100个人报数，报到3的人退出，并且再次从1开始报数，求最后留下的人是几号
//第一个报数的人
//count--用来报数，那个位置有人，就++
//i--用来记座位数
//quit_num--用来记已经淘汰多少人了
//#define N 100
//int main()
//{
//	int arr[N];
//	int i = 0,count = 0,quit_num = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//1.输入对应的编号
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = i+1;
//	}
//	i = 0;
//	//2.开始报数
//	while (quit_num != N-1)
//	{
//		if (arr[i] != 0)
//			count++;
//		if (count == num)
//		{
//			arr[i] = 0;
//			quit_num++;
//			count = 0;
//		}
//		i++;
//		if (i == N)
//			i = 0;
//	}
//	//3.最后留下的那个人就是你
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d", arr[i]);
//	}
//	return 0;
//}