#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	double d = 10.0;
//	printf("%d\n%f\n%lf", a, f, d);
//	return 0;
//}
//1.���ٿռ�Ĵ�С    2.�����ڴ�ռ�Ĵ�С
// 1  2  4  8  16  32  64  128
// 
//���μ���  (unsigned  signed)char   short [int]   int   long[int]
//�����ͼ���  folat---�����ȸ�����     double---˫���ȸ�����

//�Զ�������
//1.��������   ��������int arr[10]---int[10]    �ṹ������struct stu s1   ö��  ����
//2.ָ������   int*   struct stu*   float*
//������void---�����ķ�������   �����Ĳ���   ָ������---void* pv
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}

//int main()
//{
//	int a = 20;//0x 00 00 00 16
//	int b = -10;//0x ff ff ff f6
//	return 0;
//}

//���һ��С����---�жϻ������������ֽ���
//�͵�ַ                                               �ߵ�ַ
//int main()
//{
//	int a = 1;
//	int b = 20;
//	char* pa = (char*) & a;//char* pa������pa����a��ʱ��ֻ�ܷ��ʵ�һ���ֽ�
//	char* pb =(char*) & b;
//	printf("a�ĵ�һ���ֽڵ������ǣ�%d\n", *pa);
//	printf("b�ĵ�һ���ֽڵ������ǣ�%d", *pb);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (1 == *pa)
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//*pa��1����1��*pa��0����0
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//Ҫǿ������ת����char*���ſ��Է��ʵ�һ���ֽڣ���Ȼ�ĸ��ֽ�һ�������
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	*&a = 100;//��int* pa = &a;   pa = 100;��ϳ���һ�仰
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//��Ϊ���޷�����������11111111---255
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//}
//int main()
//{
//	char a = -128;//��ת���ɲ��룬�ٽض�,��128Ҳ��һ���Ľ��
//	printf("%u\n", a);//Ҫ������������
//	return 0;
//}

//charһ����256�����  10000000ֱ�ӹ涨��-128    ��������˵�з��ŵ�char�ķ�Χ�� -128~127
//char����  ��������00000001 00000010����01111111    ��������10000000 10000001����1111111 
//int main()
//{
//	char a = 127;
//	char b = a + 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//��ӡԭ��
//	return 0;
//}
//10000000000000000000000000010100
//11111111111111111111111111101011
//11111111111111111111111111101100

//00000000000000000000000000001010

//11111111111111111111111111110110
//10000000000000000000000000001001
//10000000000000000000000000001010----10
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//�޷�������С����0
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//'\0'---strlen�Ľ�����־

//int main()
//{
//	char a[1000];//ע��char�ķ�Χ��  -128~127
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//-1����-128����-1 127����0---\0
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world");
//	}
//	return 0;
//}

//int main()
//{
//	double d = 1E10;//10^10
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//int 00000000 00000000 00000000 00001001
//	//float S:0 E:00000000 M:00000000000000000001001
//	float* p = (float*)&n;
//	printf("n��ֵλ:%d\n", n);
//	printf("*p��ֵλ:%f\n", *p);//EȫΪ0
//
//	*p = 9.0;
//	//float S:0 M:1.001 E:3
//	//0 10000010 0010000000000000000000
//	printf("n��ֵλ:%d\n", n);
//	printf("n��ֵλ:%f\n", *p);
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011 *2^2
//    //S = 0
//	//M = 1.011//��Ϊһֱ����1.����Mֻ��С������
//	//E = 2 ---ʵ�ʴ�129  1000 0001
//	//S:0 E:10000001 M:0110 0000 0000 0000 0000 000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40B00000
//	return 0;
//}

