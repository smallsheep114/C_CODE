#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int num1=0;
//	printf("hehe");
//	scanf("%d", &num1);
//	printf("%d", num1);
//	return 0;
//
//	//newc++file.cpp
//}
//'\0'�ַ�0
//
//


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}




//int main()
//{
//	int max = 0;
//	int num1 = 10;
//	int num2 = 20;
//	max = MAX(num1, num2);
//	printf("max = %d", max);
//}
//
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//arrǰ���intָ���������Ԫ��ʱint���ͣ�ÿ��Ԫ�صĴ�С��һ����
//	printf("%d,", sizeof(a));//4
//	printf("%d,", sizeof(int));//4
//	printf("%d", sizeof(arr));//24,���������С����λ���ֽ�
//	return 0;
//}


//




////--��++ 
////1.���üӼӣ�����
//int main()
//{
//	int a = 10;
//	int b = a++;//��ʹ�ã��ټ�1
//	int c = a--;//��ʹ�ã��ټ�һ
//	printf("%d,%d\n", b, c);
//	return 0;
//}
////2.ǰ�üӼӣ�����

//�����ڼ���������ڼӷ��Ḵ��Щ
//int main()
//{
//	int a = 10;
//	int c = --a;������������ڿ�ʼ�У���Ȼ���ܻ����
//	int b = ++a;//11,�ȼ�һ����ʹ��
//	printf("%d\n", b);
//	printf("%d", c);
//	return 0;
//}


////�����ʲ�����*
////ǿ������ת��
//int main()
//{
//	int a =(int) 3.14;//ǿ������ת��
//	printf("%d", a);
//	return 0;
//}


//��ϵ������ != --- ������
//= --- ��ֵ  ��  >=  <= --- ��Ҫ����ѧ�ķ���Ū����
//== --- ��������


//�߼�������
//  &&�߼���,��Ϊ�����Ϊ��   ||�߼���ֻҪ��һ��Ϊ�棬������    0��ʾ�٣���0�����棨��Ҫ�Ͱ�λŪ���ˣ�&�ǰ�λ�룬|�ǰ�λ��^�ǰ�λ���
//��������߼����㣬�����һ�������1
//




//������������Ҳ����Ŀ��������  exp1�����ʽ�� ?  exp2 : exp3 ;---���ʽ����Ҳ���������ʽ
//Ctrl + K + C ��ע�ʹ���  Ctrl + K + U ��ȡ��ע�ʹ���


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1 --- a>b?  exp2 --- a   exp3 --- b
//	printf("max=%d", max);
//	return 0;
//}

//Ҫ���ĵط���   (a>b? a:b);
//exp1? exp2 : exp3; --- ���ʽ1�Ե�������Եģ�������ʽ����������ԣ�������ʽ����








//int Max(int x, int y)//����������ô��Ҫ��int �� x y �ֿ�д����Ȼ�������Ϊ��������ı�����intx��inty
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = Max(a, b);
//	printf("%d", max);
//	return 0;
//}



//���ű��ʽ   exp1,exp2,exp3����

//[]---�±����ò�����    ()---�������ò�����   . -> �Ժ��ٽ�
//��ϰһ�飬�Զ��庯�����ӷ�����



//int Add(int x, int y)//��ʱ������󣬿��ܲ������Լ������ˣ������Ǳ�������Ƣ��
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = Add(a, b);
//	printf("c=%d", c);
//	return 0;
//}

//�����ؼ��� enumö��  extern�����ⲿ���� 
// register
//����� �洢���� Ӳ��-�ڴ�-���ٻ���-�Ĵ���(�����ã���cpu�Ǽ���)  �ٶ�Խ��Խ�죬�ռ�Խ��ԽС
//�Ĵ���-register
//int main()
//{
//	register int a = 10;//���齫a�ŵ��Ĵ�����ȥ
//	return 0;
//}
//signed-�з��ŵ� unsigned-�޷��ŵ�   union������ void-��/��   volatile
//�����������Ժ͹ؼ��ֳ�ͻ


//typedef- ���Ͷ���-�����ض���
//


//static-
void test()
{
	static int a = 1;//û�м�static�Ļ���a������ͻ��Զ����٣����Դ������2
	//����static a ֮���û�������ˣ���̬�ľֲ�����
	a++;
	printf("a=%d\n", a);
}



int main()
{
	int i = 0;
	while (i < 5)
	{
		test();//�����ʾ��Ҫ��ʼ����test������
		i++;
	}
	return 0;
}