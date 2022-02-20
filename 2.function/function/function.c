#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int Add(int x, int y)    //ret_type fun_name (para1,*)
//                            {
//                               statement;      
//                             }
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//1.库函数   学习--参照文档
// io函数     字符串操作函数    字符操作函数	内存操作函数	时间日期函数time()   数学函数sqrt()  其他……
//int main()
//{
//	//strlen--- string length 字符串长度
//	//strcpy--- string copy   字符串拷贝
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	//\0 字符串的结束标志，所以没有再继续打印后面的###了
//	printf("arr2=%s\n", arr2);
//	return 0;
//}

//memset---memory(内存)set()设置
//int main()
//{
//	char arr[] = "hello world\n";
//	memset(arr, '*', 5);//一定程度上 char==int
//	printf("%s\n", arr);
//	return 0;
//}

//2.自定义函数  函数名  函数参数  返回类型

//int MAX(int x,int y)
//{
//	if (x > y )
//		return x;
//	else 
//		return y;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//}

//void空，代表没有返回值
// wrong:
// 当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改不会改变实参
//void Swap(int x, int y)//x y 和 a b 不是同一地址   即自定义函数和主函数的值无关系
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d\n", a, b);
//	Swap(a, b);
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//right---使用指针   int会直接向内存申请空间，而int*申请空间后会再接收地址，这样x,y与a,b就有联系了
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d\n", a, b);
//	Swap(&a, &b);//接收地址，所以是传入&a,&b
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//函数参数：
//实际参数---实际传给函数的参数，实参可以是：常量，变量，表达式，函数等，但在进行函数调用时，它们都必须有确定的值    
//形式参数---函数名后面的参数，形参只有在函数调用的过程中才实例化，在函数调用完成后会自动销毁
//函数的调用：
//传值调用---实参和形参反别占有不同的内存块，对形参的修改不会影响实参  
//传址调用---把函数外部创建变量的内存地址传递给函数参数，可以让函数和函数外部的变量建立起真正的联系

//如果要改变函数外部的值，考虑传址调用
//如果只需要获取一个值，不需要改变的话，考虑传值调用

