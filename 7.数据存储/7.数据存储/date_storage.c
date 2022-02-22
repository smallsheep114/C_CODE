#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	double d = 10.0;
//	printf("%d\n%f\n%lf", a, f, d);
//	return 0;
//}
//1.开辟空间的大小    2.看待内存空间的大小
// 1  2  4  8  16  32  64  128
// 
//整形家族  (unsigned  signed)char   short [int]   int   long[int]
//浮点型家族  folat---单精度浮点型     double---双精度浮点型

//自定义类型
//1.构造类型   数组类型int arr[10]---int[10]    结构体类型struct stu s1   枚举  联合
//2.指针类型   int*   struct stu*   float*
//空类型void---函数的返回类型   函数的参数   指针类型---void* pv
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}

//int main()
//{
//	int a = 20;//0x 00 00 00 16
//	int b = -10;//0x ff ff ff f6
//	return 0;
//}

//设计一个小程序---判断机器编译器的字节序
//低地址                                               高地址
//int main()
//{
//	int a = 1;
//	int b = 20;
//	char* pa = (char*) & a;//char* pa决定了pa访问a的时候只能访问第一个字节
//	char* pb =(char*) & b;
//	printf("a的第一个字节的内容是：%d\n", *pa);
//	printf("b的第一个字节的内容是：%d", *pb);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (1 == *pa)
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//*pa是1返回1，*pa是0返回0
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//要强制类型转换成char*，才可以访问第一个字节，不然四个字节一起访问了
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	*&a = 100;//把int* pa = &a;   pa = 100;结合成了一句话
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//因为是无符号数，所以11111111---255
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//}
//int main()
//{
//	char a = -128;//先转换成补码，再截断,放128也是一样的结果
//	printf("%u\n", a);//要进行整形提升
//	return 0;
//}

//char一共有256中情况  10000000直接规定成-128    所以我们说有符号的char的范围是 -128~127
//char分类  正数部分00000001 00000010……01111111    负数部分10000000 10000001……1111111 
//int main()
//{
//	char a = 127;
//	char b = a + 1;
//	printf("%d\n", b);
//	return 0;
//}
