#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//  ����---/---����       ȡģ---%---������
//int main()
//{
//	int a = 5 / 2;
//	int b = 5 % 2;//���Ҳ���������������
//	double c = 5 / 2.0;
//
//	printf("a = %d\nb = %d\n", a, b);
//	printf("c = %lf", c);
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	int b = -15;
//	a >> 1;//���ʱ��a����16
//	a = a >> 1;//���ʱ��a��16
//	b = b >> 1;//������λ
//	printf("a = %d\nb = %d\n", a,b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = -7;
//	a = a << 1;
//	b = b << 1;
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("c = %d\nd = %d\ne = %d\n", c, d, e);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//ÿ��
//	{
//		for (j = 1; j <= i; j++)//ÿ��
//			printf("%d*%d =%-2d ",i,j,i*j);
//		printf("\n");
//	}
//	return 0;
//}


//���Ҷ�������
//int main()
//{
//	double a = 2.5284394;
//	printf("a = %.2lf\n", a);
//	printf("a = %-5.2lfhello world", a);
//	return 0;
//}

//������---��������ʱ��������������ֵ
//����ʹ�ú���
//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d,b = %d", a, b);
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//�Ӽ���---���ܻ����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d  b = %d\n", a, b);
//	a = a + b;
//	b = a - b;//ԭa
//	a = a - b;
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//������---��һ�������洢���ڴ��ж�������1�ĸ���---�ڴ���---�����ǲ�����1�ĸ���
//���´����㸺����������
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("��������1�ĸ�����%d", count);
//	return 0;
//}


//��ӡ��һ������ÿһλ---�õݹ�
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//		printf(" %d", x % 10);
//	}
//	else
//	{
//		printf("%d", x);
//	}
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//��λ��1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//���������Ż���Ĵ���
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//���ϸ�ֵ��
// a = a+1;   ��  a + = 1 �ȼ�       a = a>>1  ��  a>>=1   �ȼ�

//��Ŀ������---һ��������   !--�߼�������  - +  &   sizeof   *  (����)---ǿ������ת��
//int main() 
//{
//	int a = 0;
//	if (a)//���������aΪ��
//	{
//		printf("����\n");
//	}
//	if (!a)//���������aΪ��
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %d", a);
//	return 0;
//}

//int main()
//{
//	int ch = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof ch);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//����a��5��ʲô���Σ�ֻҪ�Ƿ���s�У���Ҫ����s�Ĺ���---2
//	printf("%d\n", s);//sizeof(���ʽ)---���ʽ�ǲ���ʵ�ʽ��������
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	printf("%d\n", ~a);*/
//	int a = 11;
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	a = 11 | (1<<2);//���û����㣬�����׽������κ�һλ�ĳ�1 0     ��ò�Ҫд4   д��1<<2
//	printf("%d\n", a);
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
////|---�����㣨��һ��һ�������Խ������Ƶ�ĳλ��������1
////&---�����㣨������㣩�����Խ������Ƶ�ĳλ��������0
////ĳЩ��Ҫ���������ù�<<---���� >>---����  ~---��λȡ���õ�

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//��a�Ӽӣ���ʹ��a
//	//printf("%d\n", a);
//	printf("%d\n", a++);//��ʹ��a����a++   ���������10
//	
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//&&---�߼���   //||---�߼���

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	/*i = a++ && ++b && d++;*/  //1-2-3-4   
//	i = a++ || ++b || d++;    //1-3-3-4   ��Ϊ����++b�����棬����bҲ��1��
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//}

//exp1 ? exp2 : exp3;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);//--- 3,-3���������ʽ��ֵ
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int bigger = (a > b ? a : b);
//	printf("The bigger is %d", bigger);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c = %d", c);//13
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//������
//		a = get_val();
//		count_val(a);
//
//	}
//	return 0;
//}
//�ö��ű��ʽ�Ż�
//int main()
//{
//	int a = 0;
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//������
//	}
//	return 0;
//}

//�±����ò�����[]   ---��������һ��������+һ������ֵ  arr[4]   ��������arr��4
//�������ò�����()   ---��������������+����
//
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//��������Ǻ������ò�����   ������get_max , a, b
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	char name[20] = "����";//���ĺ���ռ����bite
//	char id[20] = "202103008";
//	return 0;
//}

//����һ���ṹ�����ͣ�struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct stu������ʹ�����һ��ѧ�����󣬲���ʼ��
//	struct stu s1 = { "�³���",18,"202103008" };
//	struct stu* ps = &s1;
//	printf("%s\n", ( * ps).name);
//	printf("%s\n", ps->name);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//���ʽ��ֵ
//1.��ʽ����ת��
//2 4 8 16 32 64 128
//int main()
//{
//	char a = 3;
//	//aΪ���Σ�ԭ��aӦΪ00000000000000000000000000000011
//	//����char������Ҫ�����ض�0000000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	char c = a + b;
//	printf("%d\n", c);//-126
//}
//�ڼ���a+bʱ�ʹ�ӡ%d�ǣ���������������
//������������λ�������λ
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//���������㣬��������������
//	printf("%u\n", sizeof(!c));//1  !c---�߼�������---��������������
//	return 0;
//}

//2.����ת��
//long double---double---float---unsigned long int---long int---unsigned int---int
//��������������ͬ���͵��������㣬����ת��Ϊ����Ǹ��������ͣ��ٽ���ת��


//���ӱ��ʽ����ְ������Ӱ�������
//1.�����������ȼ�
//a*b + c*d + e*f  ����ȷ��������*���һ��+�ļ���˳��
// a + --a   ����ȷ������aֵ
//2.�������Ľ����
//3.�Ƿ������ֵ˳��

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a = %d\n", i);
//	return 0;
//}

