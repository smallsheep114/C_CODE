#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	add();
//	max();
//	return 0;
//}
//
//int a = 0;

//  067--67是八进制      10
//  0x67--67十六进制
//  67
// 0 1 2 3 4 5 6 7 8 9 a b c d e f十六进制
// 0 1
// 0 1 2 3 4 5 6 7 8 9
//0x48a     a--16^0   8--16^1   4--16^2
//

//     ||     &&     !
//    ()||()      ()&&()
//   k =  (a<b) //--真1  假0
//   a<b<c    (a<b)<c   1<c

//int a[5]
//   a[0] ……a[4]
//for(i = 0;i<3;i++)
//      x += a[i + 1];    x += a;   x= x+a;   x = ()
// x = 1
//a[1]  a[2]  a[3]

//int main()
//{
//	//二维数组
//	//  2  3  5  7        a[0][0]
//	//  8  9  11  13    
//	//  15
//	int arr[][4] = { 2,3,5,7,8,9,11,13,15 };
//	return 0;
//}


//int main()
//{
//	
//	char ch[10] = "china";
//	//str--数组名--首元素地址          str = "good"--g地址给了str
//	char* p = "good";
//	ch[0] = 'g';
//	return 0;
//}

//   strcpy   --  string copy

//\n
//int main()
//{
//	printf("%s\n", "hello\0china");
//	printf("%s\n", "hello97china");
//	char ch = '1';
//	printf("%d\n", ch);
//	return 0;
//}

//   源文件    
//  源文件(.c)--编译器--编译--目标文件(.obj)   编译--预编译
//    目标文件--链接器--链接--可执行程序(.exe)
//    执行
//  a[0]   a[1]

//int add(int* x, int* y)
//{
//	(*x)++;
//	(*y)++;
//	return (*x) + (*y);
//	
//}//   x = a;  y = b;//临时拷贝
////  x = &a
//void print()
//{
//	printf("hello world\n");
//}
////
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = add(&a, &b);
//	printf("%d\n", c);
//	printf("%d\n", a);
//	print();//打印一个hello world
//	return 0;
//}
//数组名作为函数参数
//传数--这个数就不会变  
//传一个数的地址，你就可以在函数里面改变这个数的值

//   int float double char long 
//姓名，学号，年龄，地址
//struct student//类型
//{//lihua
//	char name[10];
//	int num;
//	int age;
//	char add[10];
//};
////struct student
//int main()
//{//int* p = &a;   char*   float*
//	int a;
//	struct student stu1;
//	struct student* p = &stu1;
//	(*p).num = 19;
//	p->num = 19;
//	scanf("%s", &stu1.name);
//	strcpy(stu1.name, "柯晨晨");
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},4,5,6,7,8,9,10,11 };
//	return 0;
//}

//   strlen   len    printf     print

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[] = "hello";//初始化
//	scanf("%s",ch);
//	
//	printf("%d\n", strlen(ch));
//	printf("%d\n", sizeof(ch));   
//	return 0;
//}
//     h  e  l  l  o  \0
//strlen--库函数
//   函数的调用   函数的声明


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int add(int x, int y);//函数的声明   
//	int c = add(a, b); //add();
//	printf("%d", c);
//	return 0;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	//取最大值
//	int a = 3;
//	int b = 5;
//	int c = 8;
//	//a,b,c的最大值
//	int d = max(a, b);
//	int e = max(d, c);
//	int f = max(c, max(a, b));//函数的嵌套
//	printf("%d", f);
//	return 0;
//}
//
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//    x>y?x:y;


//int main()
//{
//	int* p, a, b;
//	p = &b;
//	a = *p;
//	return 0;
//}

//      printf("%s", ch);   //字符串的起始地址，遇到\0停
//    char ch[10] = "abcdef"       a,     b
//    &ch[1]
//int main()
//{
//	char ch[10] = "abcdef";
//	printf("%s\n", &ch[1]);
//	return 0;
//}

//    p++     p = p+2   p = str+1
//  p->  A
//struct student
//{
//	char name[20];
//	int age;
//};

//struct student
//{
//	char name[10];
//	int age;
//}stu1,*p;
////stu1--变量--全局变量
//
//int a;
//
//int main()
//{
//	a = 5;
//	printf("%d\n", a);
//	return 0;
//}

//    ++(p->n); //->优先级高于++



//  "a"    'a''\0'
//   'a'
//   "  "

//int main()
//{
//	int x, y, z;
//	
//	return 0;
//}

//   (类型)--强制类型转换
//int main()
//{
//	float a = 0.0;//输入一个a的值
//	//一位小数   输出一个四舍五入的正数   3.4--3    3.6--4
//	scanf("%f", &a);
//	int b = 0;
//	b = (int)(a+0.5);    //0.4    (int)a--3
//	printf("%d", b);
//	return 0;
//}

//   a = 3.6   (int)a--3      (int)(a+0.5)--4
//    3.67          
//   36.7    （+0.5）  /10
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);//输入一个两位小数
//	float b = ((int)(a * 10 + 0.5))/10.0;    //3.67     36.7       37.3         3.7
//	printf("%.1f", b);
//	return 0;
//}

//   if    else     

//int main()
//{
//	int i = 0;
//	while (i < 5)  
//	{
//		i++;
//	}
//	return 0;
//}
//i = 0
//i = 1
// 2
// 3
// 4


//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };//选择进行升序
//	//k = 最值的下标
//	int i, j;
//	for (i = 0; i < 9; i++)//对比九次
//	{
//		int k = i;//记录最值的下标
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[j] < arr[k])
//				k = j;
//		}
//		if (i != k)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//(*p).na   p->na


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float ro = 0.3/12, rt = 2.0, g = 32.2;
//	float h = 0.0;
//	float time, vage;
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open test.txt:");
//	}
//	fprintf(pf," % -6s % -6s % -6s\n", "h", "vage", "time");
//	for (h = 1; h <= 10; h++)
//	{
//		vage = 0.5 * sqrt(2 * g * h);
//		time = (rt / ro) * (rt / ro) * h / vage;
//		fprintf(pf, "%-6.2f %-6.2f %-6.2f\n", h, vage, time/3600);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char c;
//	c = getchar();
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	c = getchar();
//	switch (c)
//	{
//	case 0:putchar(c);
//	case 1:putchar(c);
//	case 2:putchar(c);
//	default:
//		putchar(c + 2);
//	}
//	return 0;
//}


//int main()
//{
//	char c = 0;
//	while ((c = getchar())!='\n');
//	{
//		switch (c - 2)
//		{
//
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	char s[81], t[41];
	int i, j;
	printf("\n输入一个字符串：");
	gets_s(s, 81);
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0 && s[i] % 2 == 0)
		{
			t[j] = s[i]; j++;
		}
	}
	t[j] = '\0';
	for (i = 0; i < strlen(t) - 1; i++)
	{
		for (j = 0; j < strlen(t) - 1 - i; j++)
		{
			if (t[j] > t[j + 1])
			{
				int a;
				a = t[j];
				t[j] = t[j + 1];
				t[j + 1] = a;
			}
		}
	}
	printf("%s\n", t);
	return 0;

}
