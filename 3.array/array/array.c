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
//	int arr1[10] = { 1,2,3,4,5 };//����ȫ��ʼ��   ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b',99 };//����ȫ��ʼ��
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";//����ĳ�ʼ��
//	printf("%d\n", sizeof(arr4));//7   sizeof()----�������ڴ�����Ŀռ�
//	printf("%d\n", strlen(arr4));//6   strlen()-----�����ַ������ȣ�������\0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//���ֵ   ��Ϊarr2��֪��c����ʲôʱ�����\0�������Ǹ����ֵ
//	return 0;
//}

//�������  []�±�  ��0��ʼ
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)//(int)ǿ������ת��
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


//��ά���鴴��
//int arr[3][4];//ǰ�к���
//char arr[4][5];


//��ά����ĳ�ʼ��
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//��ά������в�����ʡ�ԣ��п���ʡ��
//	return 0;
//}


//��ά����ķ���
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

//��ά������ڴ洢��
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

//������Ϊ��������
//ð��������
//void bubble_sort(int arr[], int sz)//���ܵ���arr���׸�Ԫ�ص�ַ
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//ð�ݵ�����
//	{
//		int flag = 1;//�Ż���Ĵ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//�����Ķ���
//		{
//			if (arr[j] > arr[j + 1])//��������û���뵽�ģ�����arr[j+1]
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ����������������
//	bubble_sort(arr, sz);//���鴫��ȥ������Ԫ�ص�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//������ð������Ч��̫����---�����һ�˶�û��һ����������˵���Ѿ���������(�ú����)
//������ð������ͻ��Ч�ܶ�

//breakֻ��������ֹ  ѭ����switch�����

//������---��Ԫ�ص�ַ(����������)
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//����1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������sizeof(������)���������������Ĵ�С����λ���ֽ�
//	return 0;
//}
//����2
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", &arr);//&(������)��ȡ�����ĵ�ַ������ĵ�ַ---���鿪ʼ�ĵ�ַ
//	printf("%p\n", &arr + 1);//�����һ����ַ�ı��������28��������һ������
//	return 0;
//}

//������       ɨ��

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