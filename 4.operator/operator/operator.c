#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//  除法---/---得商       取模---%---得余数
//int main()
//{
//	int a = 5 / 2;
//	int b = 5 % 2;//左右操作数必须是整数
//	double c = 5 / 2.0;
//
//	printf("a = %d\nb = %d\n", a, b);
//	printf("c = %lf", c);
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	int b = -15;
//	a >> 1;//这个时候a还是16
//	a = a >> 1;//这个时候a是16
//	b = b >> 1;//算数移位
//	printf("a = %d\nb = %d\n", a,b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = -7;
//	a = a << 1;
//	b = b << 1;
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("c = %d\nd = %d\ne = %d\n", c, d, e);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//每行
//	{
//		for (j = 1; j <= i; j++)//每列
//			printf("%d*%d =%-2d ",i,j,i*j);
//		printf("\n");
//	}
//	return 0;
//}


//左右对齐问题
//int main()
//{
//	double a = 2.5284394;
//	printf("a = %.2lf\n", a);
//	printf("a = %-5.2lfhello world", a);
//	return 0;
//}

//代码题---不适用临时变量，交换两个值
//当年使用函数
//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d,b = %d", a, b);
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//加减法---可能会溢出
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d  b = %d\n", a, b);
//	a = a + b;
//	b = a - b;//原a
//	a = a - b;
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//代码题---求一个整数存储在内存中二进制中1的个数---内存中---所以是补码中1的个数
//以下代码算负数出现问题
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("二进制中1的个数是%d", count);
//	return 0;
//}


//打印出一个数的每一位---用递归
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//		printf(" %d", x % 10);
//	}
//	else
//	{
//		printf("%d", x);
//	}
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//按位与1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//不好理解的优化后的代码
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//复合赋值符
// a = a+1;   与  a + = 1 等价       a = a>>1  与  a>>=1   等价

//单目操作符---一个操作数   !--逻辑反操作  - +  &   sizeof   *  (类型)---强制类型转换
//int main() 
//{
//	int a = 0;
//	if (a)//条件：如果a为真
//	{
//		printf("哈哈\n");
//	}
//	if (!a)//条件：如果a为假
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %d", a);
//	return 0;
//}

//int main()
//{
//	int ch = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof ch);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//无论a和5是什么整形，只要是放在s中，就要遵守s的规则---2
//	printf("%d\n", s);//sizeof(表达式)---表达式是不会实际进行运算滴
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	printf("%d\n", ~a);*/
//	int a = 11;
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	a = 11 | (1<<2);//运用或运算，很容易将数的任何一位改成1 0     最好不要写4   写成1<<2
//	printf("%d\n", a);
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
////|---或运算（逢一得一），可以将二进制的某位的数换成1
////&---与运算（逢零得零），可以将二进制得某位得数换成0
////某些需要的数可以用过<<---左移 >>---右移  ~---按位取反得到

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//先a加加，再使用a
//	//printf("%d\n", a);
//	printf("%d\n", a++);//先使用a，再a++   所以这个是10
//	
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//&&---逻辑与   //||---逻辑或

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	/*i = a++ && ++b && d++;*/  //1-2-3-4   
//	i = a++ || ++b || d++;    //1-3-3-4   因为到了++b才是真，所以b也加1了
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//}

//exp1 ? exp2 : exp3;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);//--- 3,-3是整个表达式的值
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int bigger = (a > b ? a : b);
//	printf("The bigger is %d", bigger);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c = %d", c);//13
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//商务处理
//		a = get_val();
//		count_val(a);
//
//	}
//	return 0;
//}
//用逗号表达式优化
//int main()
//{
//	int a = 0;
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//商务处理
//	}
//	return 0;
//}

//下标引用操作符[]   ---操作数：一个数组名+一个索引值  arr[4]   操作数：arr、4
//函数调用操作符()   ---操作数：函数名+参数
//
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//这个括号是函数调用操作符   操作数get_max , a, b
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	char name[20] = "张三";//中文汉字占两个bite
//	char id[20] = "202103008";
//	return 0;
//}

//创建一个结构体类型，struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct stu这个类型创建了一个学生对象，并初始化
//	struct stu s1 = { "柯晨晨",18,"202103008" };
//	struct stu* ps = &s1;
//	printf("%s\n", ( * ps).name);
//	printf("%s\n", ps->name);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//表达式求值
//1.隐式类型转换
//2 4 8 16 32 64 128
//int main()
//{
//	char a = 3;
//	//a为整形，原本a应为00000000000000000000000000000011
//	//由于char，所以要发生截断0000000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	char c = a + b;
//	printf("%d\n", c);//-126
//}
//在计算a+b时和打印%d是，进行了整形提升
//整形提升，高位补充符号位
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//发生了运算，进行了整型提升
//	printf("%u\n", sizeof(!c));//1  !c---逻辑反操作---不进行整型提升
//	return 0;
//}

//2.算数转换
//long double---double---float---unsigned long int---long int---unsigned int---int
//从右至左，两个不同类型的数相运算，都会转换为左边那个数的类型，再进行转换


//复杂表达式的求职有三个影响的因素
//1.操作符的优先级
//a*b + c*d + e*f  不能确定第三个*与第一个+的计算顺序
// a + --a   不能确定左侧的a值
//2.操作符的结合性
//3.是否控制求值顺序

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a = %d\n", i);
//	return 0;
//}

