#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//int main()//有借有还
//{
//	//开辟一块内存为10个int的空间
//	int* p = (int*)malloc(INT_MAX);//32位平台就会内存不够，内存和你的地址先有关（猜测）
//	if (p == NULL)
//	{
//		perror("Allocates memory blocks:");
//	}
//	else
//	{
//		//输入十个元素
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//即使这个时候释放了，p这个时候还是很危险的
//	p = NULL;//加了这一步就更安全了，让它没有能力再找到那块空间
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("allovates memory blocks:");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc，用来扩容？
//int main()
//{
//	int* p = malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("allovates memory blocks:");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//
//	//实现扩容--有很多的风险性
//	int* str = realloc(p, 10*sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else
//	{
//		perror("reallovates memory blocks:");
//	}
//
//	//依然得释放内存
//	free(p);
//	p = NULL;
//	str = NULL;
//	return 0;
//}

//int *p = realloc(NULL,80);--realloc实现malloc的功能
//1.几道经典的动态内存笔试题
//int main()
//{
//
//	return 0;
//}
//1.没有对p进行判断
//2.没有对空间进行释放
//3.函数是单项值传递，不会改变str的内容（值传递）

//strcpy(null,"abcdef");--这样写会造成，程序崩溃

//没有指针能够找到动态内存空间了，那么这块空间就不能维护了，可能也会造成内存泄露
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);    //堆区
//	return p;
//}
//
//int Check(char* p)
//{
//	if (p != NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//str的内容还是NULL
//	if (Check(str) == 1)
//	{
//		printf("开辟内存成功\n");
//	}
//	else
//	{
//		perror("allovacts memory blocks:");
//	}
//	strcpy(str, "hello world");//程序崩溃
//	printf(str);//这种写法也是可以的
//	free(str);//因为str也知道动态内存的位置，所以这块内存依旧可以维护
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//2.这个题还真没看出来
//非法访问，程序会崩溃   ??
//char* GetMemory(void)
//{
//	char p[] = "hello world";     //栈区，出了函数，这个数组空间就消失了，数组里面的值也变成了随机值
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();      //即使得到了数组的首元素地址，但是数组内容已经成为了随机值
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改良
//char* GetMemory(void)
//{
//	static char p[] = "hello world";     //静态区，出函数空间没有释放
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();     
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//改良
//int* test()
//{
//	static int a = 10;//静态区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//3.
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	if (str == NULL)
//	{
//		perror("allovates memory blocks:");
//	}
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//4.非法访问内存，即使输出了world，但内存很大
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为空指针
//	str = NULL;
//	if (str != NULL)
//	{
//		//所以指针这个东西是很不安全的，即使那块空间不属于你了，你还是可以操作那块空间，非法
//		strcpy(str, "world");//错误，这块空间已经释放,不属于你了
//		printf(str);
//	}
//}
////
//int main()
//{
//	Test();
//	return 0;
//}
//所以释放一块空间之后，咱们还要讲维护这块空间的指针赋值为空指针


//1.柔性数组
//typedef struct
//{
//	int n;
//	int arr[];//--arr指针，指向紧连着n空间后面的首地址（理解）
//}student;
//
//int main()
//{
//	//student stu; --- 连变量都不需要创建，就可以使用
//	//printf("%d\n", sizeof(student));//柔性数组的大小不算入结构体类型的空间大小
//	student* pf = malloc(sizeof(student) + sizeof(int) * 5);//数组长度为5
//	if (pf == NULL)
//	{
//		perror("allovacts memory blocks:");
//		return 0;
//	}
//	pf->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		pf->arr[i] = i;
//	}
//	//调整柔性数组的长度
//	student* ptr = realloc(pf,sizeof(student) + 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		pf = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		pf->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pf->arr[i]);
//	}
//	//释放
//	free(pf);
//	pf = NULL;
//	return 0;
//}

//写法二    区别方法一柔性数组的arr不占空间，开辟动态内存空间是连接在一起的
//int num,int arr他们是一体的
//方法二，空间是分开的
//typedef struct
//{
//	int num;
//	int* arr;
//}student;
//
//int main()
//{
//	student* ps = (student*)malloc(sizeof(student));//放int num    放int*指针
//	if (ps == NULL)
//	{
//		perror("allovates memory blocks :");
//		return 0;
//	}
//	int i = 0;
//	ps->num = 100;
//	ps->arr = (int*)malloc(sizeof(int) * 5);
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//说什么是，数组访问的时候下标没有加上去的垃圾bug
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	//调整空间
//	int* ptr = (int*)realloc(ps->arr, 10*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放空间时，要特别注意，这里有两块动态内存空间
//	//一块装着  int num,int*
//	//一块装着数组,应该先释放数组空间，要是先释放第一块空间，第二块空间的位置就找不到了
//	free(ps->arr);
//	free(ps);
//	ps = NULL;//谁开辟，谁释放
//	return 0;
//}