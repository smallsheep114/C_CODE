#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//���ھۣ���ż��
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
//	//strlen����\0�Ż�ֹͣ������strlen(arr2)---���ֵ
//	printf("%d  %d", strlen(arr1), strlen(arr2));
//	return 0;
//}

//ʹ��ð�������һ�����������������
//void bubble_sort(int* arr,int sz)
//{
//	//ð�ݵ�����
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{//ÿ�˽����Ķ���
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
//����һ���������飬��ɶ���������Ĳ���
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

//����a����������b���ݽ��н���
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
//	printf("����arr1������->:\n");
//	print(arr1, sz);
//	printf("����arr2������->:\n");
//	print(arr2, sz);
//
//	Swap(arr1, arr2, sz);
//	printf("\n����֮��\n");
//
//	printf("����arr1������->:\n");
//	print(arr1, sz);
//	printf("����arr2������->:\n");
//	print(arr2, sz);
//}
//�״��
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//�״�㣬������short*
//	short* p = (short*)arr;
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//������ʱ��һ��ֻ�ܷ���2���ֽڣ�����ֻ��1��2����
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
//	int a = 0x11223344;//���ŷ� 44 33 22 11
//	char* pc = (char*)&a;
//	*pc = 0;//�ĳ��� 00 33 22 11
//	printf("%x\n", a);//0x11223300   %x---��ӡ16������
//	return 0;
//}
//unsigned int---�޷�����--->=0
//int i  = 0;
//int main()
//{
//	i--; //-1
//	if (i > sizeof(i))//i>sizeof(i)  int��unsigned int ���бȽϣ�����intҪת����unsigned int
//		//-1---01111111111111111111111111111111---������
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

//ͳ�ƶ�������1�ĸ���
//int count(int n)---����һ
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
// ---������
//int count(unsigned int n)//unsigned int---��-1�Ĳ���ķ���λ�������޷���λ�����м���
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
//int count(int n)//---������---�����㷨
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
//	printf("��������1�ĸ���Ϊ->:%d", ret);
//	return 0;
//}

//��������������ͬλ��ͬ����λһ���ж��ٸ�  ��^---���
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

//��һ������������λ��ż��λ���д�ӡ
//void print(int n)
//{
//	int i = 0;
//	printf("����λ->:\n");
//	for (i = 30; i >= 2; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//
//	printf("ż��λ->:\n");
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


//ʹ��ָ������������ݣ�������ʹ���±�
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

//ʵ��һ���������ж�һ�����ǲ�������
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
//		if (Is_prime(i) == 1)//���������������1
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//��ƺ���---�ж�����
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
//		if (Is_leap_year(i) == 1)//������ͷ���1���������귵��0
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


//�ݹ鷽ʽ---��ӡһ��������ÿһλ
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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

//int my_strlen(char* pa)//��д��int*
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
//	int count = 0;//ʹ������ʱ����
//	while (*pa != '\0')//����ʹ�õ���ѭ�������� if���
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

//��дһ������reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ��е��ַ���������

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
//	if (my_strlen(arr + 1) >= 2)//�ݹ���Ҫ������
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

//������---����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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

//��дһ��������ʵ��n��k�η���ʹ�õݹ飩
//double cal_power(int n, int k)
//{
//	if (k < 0)//��Ҫ����k<0�����
//	{
//		return (1.0 / cal_power(n, -k));
//	}
//	else if (k == 0)//�������д0����д1
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
//Ч��̫��
//int cal_num(int n)
//{
//	if (n <= 2)//1 1 2 3 5 8 13 21
//	{
//		return 1;
//	}
//	else
//		return cal_num(n - 1) + cal_num(n - 2);
//}
//���Լ���쳲������Ͳ��õݹ��ˣ�Ч��̫�ͣ�������cȥ���ܵ�n��쳲�������
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
//	printf("��%d��쳲���������:%d\n", n, ret);
//	return 0;
//}