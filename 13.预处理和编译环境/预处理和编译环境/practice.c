#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\nc = %d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//д��־�ļ�
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s function:%s i = %d\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define max "hehe" //�ӷֺţ��൱��һ�������
//#define stc 100
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	do_forever
//	{
//		printf("%d",1);
//	}
//	reg int a;
//	printf("%s\n", max);
//	printf("%d\n", stc);
//	return 0;
//}

//c����   c����ʵ�����ݽṹ��˳�������ջ�����У������������������  c����ʵ��MYSQLͨѶ¼   c++  �߼����ݽṹ   Linuxϵͳ  MYSQL
//���� + �����̣�����  
//#define SQUARE(X) X*X//�滻
//int main()
//{
//	int ret = SQUARE(5);
//	int sum = SQUARE(5 + 1);
//	printf("ret = %d\n", ret);
//	printf("sum = %d\n", sum);//5+1*5+1 == 11
//	return 0;
//}
//#define SQUARE(X) (X)*(X)

//#define DOUBLE(x) x+x
//int main()
//{
//	int ret = 10 * DOUBLE(5);
//	printf("%d\n", ret);
//	return 0;
//}
//�Ľ�  #define DOUBLE(x) (x+x)


//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");//�����һ��" "
//	printf("he" "llo " "world\n");//�ּ���һ��" "
//	printf("he" "llo " "a"" world");//����ַ�������Ȼ��������һ��
//    return 0;
//}

//#define PRINT(x) printf("The value of "#x" is %d\n",x);//#x -- ��ʾ"x"����˼
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//	return 0;
//}

//#define CAT(x,y) x##y
//int main()
//{
//	int Class84 = 100;
//	printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//�����ò���
//	//ʵ��  int max = (a++)>(b++)?(a++):(b++);
//	printf("max = %d\n", max);//12
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//13
//	
//	//int max = Max(a++, b++);//11 12
//	//printf("max = %d\n", max);//12
//	//printf("a = %d\n", a);//11
//	//printf("b = %d\n", b);//13
//	return 0;
//}

//######5.������ں�������ȱ�㣺
//1. ��ͬ���͵����ݣ���ͬһ���궼����ʵ�֣����ú����Ļ���Ҫд�ö������--ʹ�����
//2. ����Ԥ����׶ξ�������滻��û�к����ĵ��úͷ��صĿ���---ʱ�����
//3. ��Ĳ���������һ������
//```c
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}
//```
//```c
//#define MALLOC(num,type) (type*)malloc(num*sizeof(int))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}
//```
//
//ȱ��
//1. Ԥ���������ɺ���滻�����Ǻ�Ƚ϶̣�����������Ӵ��볤��
//2. ����û�����е�ʽ�ģ��������ڿ�ִ�г�����ɵģ�������Ԥ����׶ξ�����滻�ˣ�
//3. �����������޹أ�Ҳ�Ͳ����Ͻ�
//4. ����ܻ������������ȼ����⣨����--����ô���ȥ����--����ȫȫ���滻��

//gcc test.c -D SZ = 10
//#define DEBUG 
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//#if !0
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//��������
// 1.
//#ifdef DEBUG����������ˣ�����Ĵ���Ͳ������
//#endif
// ������  `#ifndef DEBUG`
//�ж��Ƿ񱻶���
//#if defined(symbol)
//�ȼ���#ifdef symbol
//
//
//######2.`#if` `#endif`
//#if  �������ʽ(Ϊ�棬�������)
//#endif
//
//######3.�����֧���������� ������if-else���
//#if
//#elif
//#else
//#endif
//
//```c
//int main()
//{
//#if 1==2//����Ҫ��#endif,����һ�ԣ�������
//	printf("hehe\n");
//#elif 2==1
//	printf("haha\n");
//#else
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}
//```
//
//#####4.Ƕ��ָ��
//#####5.�ļ�����
//* `#include<>` --���ļ�--ֱ��ȥ��׼·�����²���
//* `#include""`--�����ļ�--���Ҳ��ԣ�����ȥԴ�ļ�����Ŀ¼�²��ң����δ�ҵ���������ҿ⺯��ͷ�ļ�һ�����ڱ�׼λ�ò���ͷ�ļ������Ҳ�����ʾ�������
//�⺯������Ҳ������""�����˷���ʱ��

//һ���������ܰ����˶����ͬ��ͷ�ļ�
// д��һ
//#ifndef __ADD_H__//����ļ���û�ж���add.h�Ͷ���һ��     ���������ˣ��Ͳ�ִ���������
//#define __ADD_H__
//int ADD(int x, int y);
//#endif
//
//д����
//#pragma once
//int ADD(int x, int y);

//ʵ��offsetof�ĺ�--����ṹ���Ա��������ʵƫ����
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)//0��ַΪ��ʼ��ַ   ��Ա��ַ����ƫ����
////&�����Ե�
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));//�����˺���Խ����͵�������
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}
//ʵ�������Լ���offsetof    ��ȥ��ʼ��ַ,0��ַΪ��ʼ��ַ

//���ݻعˣ�����λ�ε��ڴ��С
//�����ݣ���λ���λ��
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;//��puc[0]���Ǹ��ֽ�
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;//��puc[1]���Ǹ��ֽ�
//	}*pstPimData;
//	memset(puc, 0, 4);
//	pstPimData = (struct tagPIM*)puc;
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;  //00000000 -- 0000 0001//��Ϊֻ����һ������λ�����Ը������һ������λ--����ȽϹؼ�
//	pstPimData->ucData1 = 4;  //0000 0 00 1
//	pstPimData->ucData2 = 5;  //00 101 00 1    0010 1001--29
//	printf("%02x %02x %02x %02x", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}



//������Ҳ���������--����Ķ�������������Ԫ�ض�����Ϊ׼
//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//С��--��λ���ݷ��ڵ͵�ַ����λ���ݷŵ��ߵ�ַ
//�����ַ  �±�Ϊ0��ַ��С

//malloc(0)--�﷨֧�֣����Ƿ��ص�ָ�벻����--Ұָ��
//�ҳ�����-- ֻ���������ǳ���һ��
//��λ���  ^--��ͬΪ0������Ϊ1   ����ҵ���


//1.ֻ��һ��������ֱ�����Ϳ����ˣ���������ǵ���������
//2.�����������Ƚ����е������õ�һ�����������ṹ�Ķ���������һλ��1���Ͱ���һλ���з��飬�ٷֱ����
//������ٷ��飬�����
//3.��������
//int main()
//{
//	int arr[9] = { 1,2,3,4,1,2,3,4,6 };
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 9; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("������%d\n", ret);
//	return 0;
//}

//��η����أ�   %2�Ϳ��Եõ����һλ       /2%2
//int main()
//{
//	int arr[10] = { 1,2,3,5,1,2,3,4,4,6 };
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int ret = 0;
//	int i = 0;
//	int count = 1;
//	int ret1 = 0, ret2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ret ^= arr[i];
//	}
//	//�ж�ret����һλ��1
//	while (ret)
//	{
//		if (ret % 2 == 1)
//			break;
//		count++;
//		ret = ret >> 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] >> count) % 2 == 1)
//		{
//			arr1[i] = arr[i];
//		}
//		else
//		{
//			arr2[i] = arr[i];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ret1 ^= arr1[i];
//		ret2 ^= arr2[i];
//	}
//	printf("������������%d  %d\n", ret1, ret2);
//	return 0;
//}