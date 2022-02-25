#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d", g_val);
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define定义的常量和宏

//1.#define定义的标识符常量  宏---参数
//# define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}

//宏

//#define MAX(X,Y)(X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//指针   生活中通过地址找位置   
//计算机中如何产生地址： 一个内存单元是一个字节  32 64
//就以我们的64位为例，就会有2^64种情况（二进制），对应着这么多个空间，“门牌号”都是那些组成数字


//下面一段代码一定要多看呀  运行内存
//指针是个变量，是用来存放地址的
//int main()
//{
//	int a = 10;
//	int* p = &a;//p的类型是int*，将a的地址存到了p里面 &取地址操作符
//	printf("a申请的空间地址是%p\n", &a);//%p表示打印的是一个地址(打印出来的地址是十六进制的转换成二进制即可)
//	printf("a申请的空间地址是%p\n", p);
//	*p = 20;//*--解引用操作符   通过这个地址找到a，将a的值换成20
//	return 0;
//}
////输出结果00000051E77EF6F4            转换成二进制就是他的“门牌号”101 0001 1110 0111 0111 1110 1111 0110 1111 0100也就是指针啦
//

//举个栗子
//int main()
//{
//	char ch = 'w';
//	printf("ch的地址是%p\n", &ch);
//	char* p = &ch;
//	*p = 'a';
//	printf("ch = %c\n", ch);
//	printf("%d", sizeof(p));
//	return 0;
//}

//结论：指针大小在32位平台是4个字节，在64位平台是8个字节


//switch语言  define不是关键字 是一种声明
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p是指针变量，类型是int*    地址经常会发生变化  *意味着告诉我们p是指针变量
//	printf("%p\n", p);
//	*p = 20;//*-解引用操作符
//	printf("a=%d", a);
//	return 0;
//}

//打印double类型，用%lf
//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 5.55;
//	printf("a = %lf\n", a);
//	printf("a = %.1lf\n", a);//想保留X位小数，就在%后面打个.X即可
//	printf("a = %.1lf\n", *pd);
//	printf("%d", sizeof(*pd));//32位4个字节，64位8个字节
//	return 0;
//}



//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




//新鲜玩意儿，多看看    
//结构体  表示一个人？   人 书 …… ----复杂对象 --- 这个时候我们用结构体
//人--- 性别 年龄 身高 身份证     书 --- ……
//结构体 --- 我们自己创造出来的一种类型
//创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};//分号不可缺少，他是用来结束这个类型的

//int main()
//{
//	//利用结构体类型-创建一个该类型的变量
//	struct Book b1 = {"c语言程序设计",55};//名字是字符串用双引号
//	struct Book* pb = &b1;
//	/*printf("书名：%s\n", (*pb).name);
//	printf("价格：%d元\n", (*pb).price);*/
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d元\n", pb->price);
//	//printf("书名：%s\n", b1.name);//打印字符串用%s
//	//printf("价格：%d元\n", b1.price);
//	//b1.price = 15;
//	//printf("清仓大甩卖啦，现在只需要%d", b1.price);
//	return 0;
// }

//int main()
//{
//	struct Book b1 = {"c语言程序设计",55};//name不是变量，是数组名,是一个地址
//	strcpy(b1.name, "C++");//strcpy--string copy ---字符串拷贝
//	//要把内容拷贝到b1.name  需要拷贝的内容：C++
//	printf("这个时候书名为：%s\n",b1.name);
//	return 0;
//}



