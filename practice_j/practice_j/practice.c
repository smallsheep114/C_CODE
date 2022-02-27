#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int num1=0;
//	printf("hehe");
//	scanf("%d", &num1);
//	printf("%d", num1);
//	return 0;
//
//	//newc++file.cpp
//}
//'\0'字符0
//
//


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}




//int main()
//{
//	int max = 0;
//	int num1 = 10;
//	int num2 = 20;
//	max = MAX(num1, num2);
//	printf("max = %d", max);
//}
//
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//arr前面的int指数组里面的元素时int类型，每个元素的大小是一样的
//	printf("%d,", sizeof(a));//4
//	printf("%d,", sizeof(int));//4
//	printf("%d", sizeof(arr));//24,计算数组大小，单位是字节
//	return 0;
//}


//




////--，++ 
////1.后置加加，减减
//int main()
//{
//	int a = 10;
//	int b = a++;//先使用，再加1
//	int c = a--;//先使用，再减一
//	printf("%d,%d\n", b, c);
//	return 0;
//}
////2.前置加加，减减

//减法在计算机里，相比于加法会复杂些
//int main()
//{
//	int a = 10;
//	int c = --a;申请变量，放在开始行，不然可能会出错
//	int b = ++a;//11,先加一，再使用
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}


////简介访问操作符*
////强制类型转换
//int main()
//{
//	int a =(int) 3.14;//强制类型转换
//	printf("%d", a);
//	return 0;
//}


//关系操作符 != --- 不等于
//= --- 赋值  ，  >=  <= --- 不要和数学的符号弄混了
//== --- 这才是相等


//逻辑操作符
//  &&逻辑与,都为真才能为真   ||逻辑或，只要有一个为真，就是真    0表示假，非0就是真（不要和按位弄混了，&是按位与，|是按位或，^是按位异或）
//试着理解逻辑运算，计算机一般真输出1
//




//条件操作符（也叫三目操作符）  exp1（表达式） ?  exp2 : exp3 ;---表达式，这也是整个表达式
//Ctrl + K + C ：注释代码  Ctrl + K + U ：取消注释代码


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1 --- a>b?  exp2 --- a   exp3 --- b
//	printf("max=%d", max);
//	return 0;
//}

//要看的地方是   (a>b? a:b);
//exp1? exp2 : exp3; --- 表达式1对的吗，如果对的，输出表达式二，如果不对，输出表达式三；








//int Max(int x, int y)//括号里面我么们要把int 和 x y 分开写，不然计算机以为我们申请的标量是intx和inty
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = Max(a, b);
//	printf("%d", max);
//	return 0;
//}



//逗号表达式   exp1,exp2,exp3……

//[]---下标引用操作符    ()---函数调用操作符   . -> 以后再讲
//复习一遍，自定义函数，加法函数



//int Add(int x, int y)//有时候出错误，可能并不是自己出错了，可能是编译器发脾气
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = Add(a, b);
//	printf("c=%d", c);
//	return 0;
//}

//常见关键字 enum枚举  extern引用外部函数 
// register
//计算机 存储数据 硬盘-内存-高速缓存-寄存器(从这拿，从cpu那计算)  速度越来越快，空间越来越小
//寄存器-register
//int main()
//{
//	register int a = 10;//建议将a放到寄存器里去
//	return 0;
//}
//signed-有符号的 unsigned-无符号的   union联合体 void-无/空   volatile
//变量名不可以和关键字冲突


//typedef- 类型定义-类型重定义
//


//static-
void test()
{
	static int a = 1;//没有加static的话，a出来后就会自动销毁，所以答案是五个2
	//加了static a 之后就没有销毁了，静态的局部变量
	a++;
	printf("a=%d\n", a);
}



int main()
{
	int i = 0;
	while (i < 5)
	{
		test();//这个表示我要开始调用test函数了
		i++;
	}
	return 0;
}