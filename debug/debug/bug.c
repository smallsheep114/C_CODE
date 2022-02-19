#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//bug---臭虫
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	
//	system("pause");
//}

//Debug版本报错
//release版本没报错，它优化了一部分代码的功能

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//15596668862


//vs2013环境下，以下代码会循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//i的地址应该比arr的地址高，可能是编译器做了一些代码优化
//	printf("  i的地址是：%p\n", &i);
//	printf("arr的地址是：%p\n", arr);
//	
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//}

//strcpy---字符串拷贝
//满分10分，以下代码6分
//void my_strcpy(char* dest,char* src)
//{
//	while(*src !='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//将'\0'从arr2拷贝到arr1
//}
//7分
//void my_strcpy(char* dest, char* src)
//{
//	//传上去一个空指针，再拿来使用的话，系统会崩
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)//最后一次将\0放在了*dest中，并且\0正好可以让while循环停下来
//		{
//			;
//		}
//	}
 // }
//8分
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言（明确自己的主张）---如果断言内容的正确的，什么事都不发生，如果是错误的，就会报错---断言失败
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)//最后一次将\0放在了*dest中，并且\0正好可以让while循环停下来
//	{
//		;
//	}
//}
//9分
//char* my_strcpy(char* dest, const char* src)//*src不能改变
////如果函数类型是char*---返回的是dest的从起始位置到\0的内容
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目的地的起始地址---有点不理解
//}
//
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "hello bit";
//	printf("arr1变成了%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int num1 = 10;
//	int n = 100;
//	//  const int* p = &num1;//加了const,修饰指针变量
//	 //error:const放在指针变量的*左边时，修饰的是*p，不能通过p来改变*p（num1）的值(不能解引用操作了，但可以换地址）
//	//  int* const p = &num1;
//	  //const仿作指针变量*的右边时，修饰的是指针变量p本身，p不能被改变了
//	int* const p = &num1;
//	*p = 0;
//	//最牛逼  const int*const p = &num1;//不能换地址，不能解引用
//
//
//	printf("%d\n", num1);
//	return 0;
//}

//模拟实现strlen函数
//int my_strlen(const char* str)//字符串不容修改,指针的保护
//{
//	int count = 0;
//	assert(str != NULL);//断言，保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
