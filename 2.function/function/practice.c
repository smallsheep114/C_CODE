#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//������---дһ������ �ж��Ƿ�Ϊ����


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (n = 2; n < sqrt(i); n++)
//		{
//			if (i % n == 0)//Ҫ���������е�if
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

//�������ͷ���1�����������ͷ���0
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;//return 0 ��breakҪǿ
//	}
//	return 1;//����ǰ�����һ��if(i>sqrt(n))�����е���һ��
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

//������---дһ�������ж�һ���ǲ�������
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
//	else//û�м�else return 0�Ļ��𰸾�Ȼ��245
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


//������---дһ�������������������в������е�����λ��
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
//			printf("i find it,�±���%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//	printf("i find it,�±���%d\n", sub);
//	return 0;
//}

//teacher
//                  //������ָ��
//int binary_search(int arr[], int k,int sz)//�βκ�ʵ�ο���ͬ��   ����β�arr���ܵ����ⲿ����arr�ĵ�ַ
////arr1����Ҫ��[]����Ȼ�������Ϊ��Ҫ����һ��������arr1
//{
//	int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[0]) - 1;//��һ������ ����right == 1
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ҫ���������������ĸ�������Ϊ�����ڲ��޷�ʵ��
//	int k = 7;
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ������±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//������---ÿ����һ������������ͻὫnum��ֵ����һ
//void Add(int* p)
//{
//	(*p)++;//++�����ȼ�����*p������Ҫ������
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);//��Ҫ����num,����ʹ�ô�ַ
//	printf("num = %d\n", num);
//	Add(&num);//��Ҫ����num,����ʹ�ô�ַ
//	printf("num = %d\n", num);
//	Add(&num);//��Ҫ����num,����ʹ�ô�ַ
//	printf("num = %d\n", num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
// Ƕ�׵���---�����ͺ���֮������л��ؽ����һ��
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

//��ʽ����---��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//����ֵ�Ƕ�����   ����ֵ���ַ�������
//	//�ȴ�ӡ43----�����ַ�----�����ٴ�ӡ2----2��һ���ַ�----�����ٴ�ӡ1
//	return 0;
//}

//�����������Ͷ���


////��������:
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
////��������:
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//�����Ͷ�����ȷ��ʹ�÷�ʽ
//#include "add.h"//�����Լ�����" "  Ҫ��������ʹ��   ���ÿ����<>
////�����ķֹ��ͺ���ȷ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
