#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ݹ�---�����������ı�ɼ���  �Ѵ��»�С
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//��һֱ�ݹ���ȥ�������ջ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//������---��˳���ӡһ����λ����ÿһλ����
// ̫����
//1234   ��λ%10==4       ʮλ/10%10==3     ��λ/100%10==2    
//1234----123  4     123----12   3     12----1   2
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123)   4
//	//print(12)    3    4
//	//print(1)     2     3    4
//	return 0;
//}

//������---��д��������������ʱ���������ַ����ĳ���
//����������---ϵͳ�Ҳ���ָ���ļ�---�����ǲ����ĸ���ʾ����û��
//Ҫ����strcpy  strcmp������
// ʹ����ʱ����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//�������û�뵽�ģ���һ�δ���ľ��ǵڶ���Ԫ�صĵ�ַ��������Ԫ�صĵ�ַ����
//	}
//	return count;
//}

//ʹ�õݹ�
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
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
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr�����飬�����鴫�Σ�����ȥ�Ĳ���һ�������飬���ǵ�һ��Ԫ�صĵ�ַ(ָ�����)
//	printf("len = %d", len);
//	return 0;
//}

//�ݹ������
//������----��n�Ľ׳ˣ������������
//��ͨ
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����
//int Fac1(int n)
//{
//	int i = 0;
//	int re = 1;
//	for (i = 1; i <= n; i++)
//	{
//		re = re * i;
//	}
//	return re;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�---��ʱ��Ҫȥ����˼ά
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1); 
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("n! = %d\n", ret);
//	return 0;
//}

//������---���n��쳲��������������������
//1 1 2 3 5 8 13 21 34 55
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)//���Ե�3��쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//�����50��쳲���������ʱ�򣬻ᷢ�ֺ�ʱ�ܾã�Ч�ʺܵͣ�̫����ظ�������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--; 
//	}
//	return b;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("��%d��쳲���������%d\n", n, ret);
//	/*printf("\ncount = %d\n", count);*/
//	return 0;
//}
//���Եݹ鲻�ܺܺõĽ���������

//void test(int num)
//{
//	if (num < 10000)
//	{
//		test(num + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//�����ݹ�ľ�����Ŀ
//1.��ŵ������----�Ҹ������ü����Ҳ��Ų(������)
//2.������̨������


//1.��ŵ������
//void Move(int n, char A ,char B , char C)
//{
//	if (n == 1)
//	{
//		printf("%d# from %c to %c\n", n, A, C);//���ֻ��һ�����ӣ�ֱ�Ӵ�a�Ƶ�c����
//	}
//	else
//	{
//		Move(n - 1, A, C, B);//1.��1~n-1�����ӣ���a�Ƶ�b
//		printf("%d# from %c to %c\n", n, A, C);//����n�����ӣ���a�Ƶ�c
//		Move(n - 1, B, A, C);//��1~n-1�����ӣ���b�Ƶ�c
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("��������������\n");
//	scanf("%d", &n);
//	printf("�ƶ��������£�\n");
//	Move(n, 'A', 'B', 'C');
//	return 0;
//}

//2.������̨����---һֱ����һ�ο�����һ��̨�ף���������̨�ף�������������n��̨���ж��������
//int Move(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 1)
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
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Move(n);
//	printf("һ����%d������\n", ret);
//	return 0;
//}

//ˮ�ɻ���(1-1000)
int main()
{
	int i = 0;
	for (i = 1; i < 1000; i++)
	{
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d ",i);
	}
	return 0;
}