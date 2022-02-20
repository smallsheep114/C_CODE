#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(char));//1
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5 };//不完全初始化   剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b',99 };//不完全初始化
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";//数组的初始化
//	printf("%d\n", sizeof(arr4));//7   sizeof()----计算向内存申请的空间
//	printf("%d\n", strlen(arr4));//6   strlen()-----计算字符串长度，不计算\0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//随机值   因为arr2不知道c后面什么时候出现\0，所以是个随机值
//	return 0;
//}

//数组访问  []下标  从0开始
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)//(int)强制类型转换
//	{
//		printf("%c\n", arr[i]);//
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//二维数组创建
//int arr[3][4];//前行后列
//char arr[4][5];


//二维数组的初始化
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//二维数组的列不可以省略，行可以省略
//	return 0;
//}


//二维数组的访问
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d  ", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组的内存储存
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组作为函数参数
//冒泡排序函数
//void bubble_sort(int arr[], int sz)//接受的是arr的首个元素地址
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//冒泡的趟数
//	{
//		int flag = 1;//优化后的代码
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//交换的对数
//		{
//			if (arr[j] > arr[j + 1])//这里我是没有想到的，用了arr[j+1]
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数在主函数里计算
//	bubble_sort(arr, sz);//数组传上去的是首元素地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//但这种冒泡排序效率太低了---如果有一趟都没有一对数交换，说明已经是有序了(好好理解)
//这样的冒泡排序就会高效很多

//break只能由于终止  循环或switch语句中

//数组名---首元素地址(有两个例外)
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//例外1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//主函数中sizeof(数组名)计算的是整个数组的大小，单位是字节
//	return 0;
//}
//例外2
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", &arr);//&(数组名)，取出来的地址是数组的地址---数组开始的地址
//	printf("%p\n", &arr + 1);//这个加一，地址的编号增加了28，增加了一个数组
//	return 0;
//}

//三子棋       扫雷

int main()
{
	int n = 0;
	int i, j;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
	{
		ret = 1;
		for (i = 1; i <= j; i++)
		{
			ret *= i;
		}
		sum = sum + ret;
	}
	printf(" %d\n", sum);
	return 0;
}