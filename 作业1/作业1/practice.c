#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//高内聚，低偶合
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d  %d", sizeof(str), strlen(str));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	//strlen遇到\0才会停止，所以strlen(arr2)---随机值
//	printf("%d  %d", strlen(arr1), strlen(arr2));
//	return 0;
//}

//使用冒泡排序对一个整形数组进行排序
//void bubble_sort(int* arr,int sz)
//{
//	//冒泡的趟数
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{//每趟交换的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//创建一个整形数组，完成对整形数组的操作
//reverse
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-2d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	Reverse(arr,sz);
//	print(arr, sz);
//}

//数组a内容与数组b内容进行交换
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("数组arr1的内容->:\n");
//	print(arr1, sz);
//	printf("数组arr2的内容->:\n");
//	print(arr2, sz);
//
//	Swap(arr1, arr2, sz);
//	printf("\n交换之后\n");
//
//	printf("数组arr1的内容->:\n");
//	print(arr1, sz);
//	printf("数组arr2的内容->:\n");
//	print(arr2, sz);
//}
//易错点
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//易错点，这里是short*
//	short* p = (short*)arr;
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//解引用时，一次只能访问2个字节，所以只把1，2改了
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//倒着放 44 33 22 11
//	char* pc = (char*)&a;
//	*pc = 0;//改成了 00 33 22 11
//	printf("%x\n", a);//0x11223300   %x---打印16进制数
//	return 0;
//}
//unsigned int---无符号数--->=0
//int i  = 0;
//int main()
//{
//	i--; //-1
//	if (i > sizeof(i))//i>sizeof(i)  int与unsigned int 进行比较，所以int要转换成unsigned int
//		//-1---01111111111111111111111111111111---超级大
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
//	return 0;
//}

//统计二进制中1的个数
//int count(int n)---方法一
//{
//	int i = 0;
//	int re = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			re++;
//		}
//	}
//	return re;
//}
// ---方法二
//int count(unsigned int n)//unsigned int---把-1的补码的符号位，看作无符号位，进行计算
//{
//	int re = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			re++;
//		}
//		n = n / 2;
//	}
//	return re;
//}
//int count(int n)//---方法三---最精简的算法
//{
//	int re = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		re++;
//	}
//	return re;
//}
// 
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = count(num);
//	printf("二进制中1的个数为->:%d", ret);
//	return 0;
//}

//求两个整型数，同位不同数的位一共有多少个  用^---异或
//int Count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int c = m ^ n;
//	int count = Count_bit_one(c);
//	printf("count = %d\n", count);
//	return 0;
//}

//将一个整数的奇数位，偶数位进行打印
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位->:\n");
//	for (i = 30; i >= 2; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位->:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d  b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}


//使用指针访问数组内容，不允许使用下标
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int num = Fun(2);
//	printf("num = %d\n", num);
//}

//实现一个函数，判断一个数是不是素数
//int Is_prime(int i)
//{
//	int n = 0;
//	for (n = 2; n <= sqrt(i); n++)
//	{
//		if (i % n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if (Is_prime(i) == 1)//如果是素数，返回1
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//设计函数---判断闰年
//int Is_leap_year(int i)
//{
//	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (Is_leap_year(i) == 1)//是闰年就返回1，不是闰年返回0
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}


//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d  b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//递归方式---打印一个整数的每一位
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//		printf("%d ", a);
//}
//int main()
//{
//	int a = 12345;
//	print(a);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("n! = %d\n", ret);
//}
//int cal_rank(int n)
//{
//	if (n <=1)
//		return 1;
//	else
//		return n * cal_rank(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = cal_rank(n);
//	printf("n! = %d\n", ret);
//	return 0;
//}

//int my_strlen(int* pa)
//{
//	char* start = pa;
//	char* end = pa;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}

//int my_strlen(char* pa)//别写成int*
//{
//	if (*pa != '\0')
//	{
//		return 1 + my_strlen(pa + 1);
//	}
//	else
//		return 0;
//}
//int my_strlen(char* pa)
//{
//	int count = 0;//使用了临时变量
//	while (*pa != '\0')//这里使用的是循环而不是 if语句
//	{
//		count++;
//		pa++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("len = %d\n", len);*/
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}

//编写一个函数reverse_string(char* string)(递归实现)
//实现：将参数字符中的字符反向排列

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
// 
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
// 
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)//递归是要加条件
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//代码题---计算一个数的每位之和（递归实现）
//int Digitsum(unsigned int num)
//{
//	if (num <= 9)
//		return num;
//	else
//		return num % 10 + Digitsum(num / 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("len = %d\n", ret);
//	return 0;
//}

//编写一个函数，实现n的k次方（使用递归）
//double cal_power(int n, int k)
//{
//	if (k < 0)//还要讨论k<0的情况
//	{
//		return (1.0 / cal_power(n, -k));
//	}
//	else if (k == 0)//这里最好写0，不写1
//		return 1;
//	else
//		return n * cal_power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = cal_power(n, k);
//	printf("ret = %lf\n", ret);
//}
//效率太低
//int cal_num(int n)
//{
//	if (n <= 2)//1 1 2 3 5 8 13 21
//	{
//		return 1;
//	}
//	else
//		return cal_num(n - 1) + cal_num(n - 2);
//}
//所以计算斐波那契就不用递归了，效率太低，我们用c去接受第n个斐波那契数
//int cal_num(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = cal_num(n);
//	printf("第%d个斐波那契数是:%d\n", n, ret);
//	return 0;
//}