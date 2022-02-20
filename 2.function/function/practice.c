#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//代码题---写一个函数 判断是否为素数


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (n = 2; n < sqrt(i); n++)
//		{
//			if (i % n == 0)//要用两个并列的if
//			{
//				break;
//			}
//		    
//		}
//		if (n > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//是素数就返回1，不是素数就返回0
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;//return 0 比break要强
//	}
//	return 1;//再在前面加上一个if(i>sqrt(n))，就有点多此一举
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <=200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//代码题---写一个函数判断一年是不是闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else//没有加else return 0的话答案居然是245
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//代码题---写一个函数，在有序数组中查找其中的数的位置
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int k = 10;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left++;
//		}
//		else if (arr[mid] > k)
//		{
//			right++;
//		}
//		else
//		{
//			printf("i find it,下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//myslef
//int Find(int n)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left=mid+1;
//		}
//		else if (arr[mid] > n)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sub = Find(k);
//	printf("i find it,下标是%d\n", sub);
//	return 0;
//}

//teacher
//                  //本质是指针
//int binary_search(int arr[], int k,int sz)//形参和实参可以同名   这个形参arr接受的是外部数组arr的地址
////arr1后面要加[]，不然计算机以为你要申请一个变量叫arr1
//{
//	int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[0]) - 1;//这一步错了 所以right == 1
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//要在外面求号数组里的个数，因为函数内部无法实现
//	int k = 7;
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到啦，下标是：%d\n", ret);
//	}
//	return 0;
//}

//代码题---每调用一次这个函数，就会将num的值增加一
//void Add(int* p)
//{
//	(*p)++;//++的优先级高于*p，所以要加括号
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);//需要操作num,所以使用传址
//	printf("num = %d\n", num);
//	Add(&num);//需要操作num,所以使用传址
//	printf("num = %d\n", num);
//	Add(&num);//需要操作num,所以使用传址
//	printf("num = %d\n", num);
//	return 0;
//}

//函数的嵌套调用和链式访问
// 嵌套调用---函数和函数之间可以有机地结合在一起
//void new_life()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		new_life();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//链式访问---将一个函数的返回值作为另一个函数的参数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//返回值是多少呢   返回值是字符的数量
//	//先打印43----两个字符----所以再打印2----2是一个字符----所以再打印1
//	return 0;
//}

//函数的声明和定义


////函数声明:
//int Add(int, int);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
////函数定义:
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//声明和定义正确的使用方式
//#include "add.h"//引用自己的用" "  要先声明后使用   引用库的用<>
////这样的分工就很明确
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
