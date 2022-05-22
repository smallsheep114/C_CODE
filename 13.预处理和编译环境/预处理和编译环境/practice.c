#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\nc = %d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//写日志文件
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s function:%s i = %d\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define max "hehe" //加分号，相当于一个空语句
//#define stc 100
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	do_forever
//	{
//		printf("%d",1);
//	}
//	reg int a;
//	printf("%s\n", max);
//	printf("%d\n", stc);
//	return 0;
//}

//c语言   c语言实现数据结构：顺序表，链表，栈，队列，二叉树及相关面试题  c语言实现MYSQL通讯录   c++  高级数据结构   Linux系统  MYSQL
//网络 + 网络编程（？）  
//#define SQUARE(X) X*X//替换
//int main()
//{
//	int ret = SQUARE(5);
//	int sum = SQUARE(5 + 1);
//	printf("ret = %d\n", ret);
//	printf("sum = %d\n", sum);//5+1*5+1 == 11
//	return 0;
//}
//#define SQUARE(X) (X)*(X)

//#define DOUBLE(x) x+x
//int main()
//{
//	int ret = 10 * DOUBLE(5);
//	printf("%d\n", ret);
//	return 0;
//}
//改进  #define DOUBLE(x) (x+x)


//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");//多加了一个" "
//	printf("he" "llo " "world\n");//又加了一个" "
//	printf("he" "llo " "a"" world");//多个字符串会天然的连接在一起
//    return 0;
//}

//#define PRINT(x) printf("The value of "#x" is %d\n",x);//#x -- 表示"x"的意思
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//	return 0;
//}

//#define CAT(x,y) x##y
//int main()
//{
//	int Class84 = 100;
//	printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//副作用参数
//	//实质  int max = (a++)>(b++)?(a++):(b++);
//	printf("max = %d\n", max);//12
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//13
//	
//	//int max = Max(a++, b++);//11 12
//	//printf("max = %d\n", max);//12
//	//printf("a = %d\n", a);//11
//	//printf("b = %d\n", b);//13
//	return 0;
//}

//######5.宏相比于函数的优缺点：
//1. 不同类型的数据，用同一个宏都可以实现，而用函数的话，要写好多个函数--使用灵活
//2. 宏在预处理阶段就完成了替换，没有函数的调用和返回的开销---时间更短
//3. 宏的参数可以是一个类型
//```c
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}
//```
//```c
//#define MALLOC(num,type) (type*)malloc(num*sizeof(int))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}
//```
//
//缺点
//1. 预处理过程完成宏的替换，除非宏比较短，否则会大大增加代码长度
//2. 宏是没法进行调式的（调试是在可执行程序完成的，而宏在预处理阶段就完成替换了）
//3. 宏由于类型无关，也就不够严谨
//4. 宏可能会带来运算符优先级问题（函数--计算好传进去，宏--完完全全的替换）

//gcc test.c -D SZ = 10
//#define DEBUG 
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//#if !0
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//条件编译
// 1.
//#ifdef DEBUG如果被定义了，里面的代码就参与编译
//#endif
// 对立面  `#ifndef DEBUG`
//判断是否被定义
//#if defined(symbol)
//等价于#ifdef symbol
//
//
//######2.`#if` `#endif`
//#if  常量表达式(为真，参与编译)
//#endif
//
//######3.多个分支的条件编译 类似于if-else语句
//#if
//#elif
//#else
//#endif
//
//```c
//int main()
//{
//#if 1==2//必须要有#endif,这是一对，不能少
//	printf("hehe\n");
//#elif 2==1
//	printf("haha\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}
//```
//
//#####4.嵌套指令
//#####5.文件包含
//* `#include<>` --库文件--直接去标准路径底下查找
//* `#include""`--本地文件--查找策略：首先去源文件所在目录下查找，如果未找到，就像查找库函数头文件一样，在标准位置查找头文件，再找不到显示编译错误
//库函数引用也可以用""，但浪费了时间

//一个大程序可能包含了多份相同的头文件
// 写法一
//#ifndef __ADD_H__//如何文件中没有定义add.h就定义一个     如果定义过了，就不执行下面语句
//#define __ADD_H__
//int ADD(int x, int y);
//#endif
//
//写法二
//#pragma once
//int ADD(int x, int y);

//实现offsetof的宏--计算结构体成员变量的其实偏移量
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)//0地址为起始地址   成员地址就是偏移量
////&不可以掉
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));//运用了宏可以讲类型当作参数
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}
//实现咱们自己的offsetof    减去初始地址,0地址为起始地址

//内容回顾，计算位段的内存大小
//存数据，低位向低位存
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;//用puc[0]的那个字节
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;//用puc[1]的那个字节
//	}*pstPimData;
//	memset(puc, 0, 4);
//	pstPimData = (struct tagPIM*)puc;
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;  //00000000 -- 0000 0001//因为只能用一个比特位，所以改了最后一个比特位--这个比较关键
//	pstPimData->ucData1 = 4;  //0000 0 00 1
//	pstPimData->ucData2 = 5;  //00 101 00 1    0010 1001--29
//	printf("%02x %02x %02x %02x", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}



//联合体也存在这对齐--数组的对齐数是以其中元素对齐数为准
//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//小端--低位数据放在低地址，高位数据放到高地址
//数组地址  下标为0地址最小

//malloc(0)--语法支持，但是返回的指针不可用--野指针
//找出单身狗-- 只有两个数是出现一次
//按位异或  ^--相同为0，相异为1   异或找单身狗


//1.只有一个单身狗，直接异或就可以了，异或结果就是单身狗的数字
//2.两个单身狗，先将所有的数异或得到一个结果，这个结构的二进制数哪一位是1，就按哪一位进行分组，再分别异或
//先异或，再分组，再异或
//3.三个单身狗
//int main()
//{
//	int arr[9] = { 1,2,3,4,1,2,3,4,6 };
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 9; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("单身狗是%d\n", ret);
//	return 0;
//}

//如何分组呢？   %2就可以得到最后一位       /2%2
//int main()
//{
//	int arr[10] = { 1,2,3,5,1,2,3,4,4,6 };
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int ret = 0;
//	int i = 0;
//	int count = 1;
//	int ret1 = 0, ret2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ret ^= arr[i];
//	}
//	//判断ret的哪一位是1
//	while (ret)
//	{
//		if (ret % 2 == 1)
//			break;
//		count++;
//		ret = ret >> 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] >> count) % 2 == 1)
//		{
//			arr1[i] = arr[i];
//		}
//		else
//		{
//			arr2[i] = arr[i];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ret1 ^= arr1[i];
//		ret2 ^= arr2[i];
//	}
//	printf("两个单生狗是%d  %d\n", ret1, ret2);
//	return 0;
//}