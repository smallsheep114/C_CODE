#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int Add(int x, int y)    //ret_type fun_name (para1,*)
//                            {
//                               statement;      
//                             }
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//1.�⺯��   ѧϰ--�����ĵ�
// io����     �ַ�����������    �ַ���������	�ڴ��������	ʱ�����ں���time()   ��ѧ����sqrt()  ��������
//int main()
//{
//	//strlen--- string length �ַ�������
//	//strcpy--- string copy   �ַ�������
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	//\0 �ַ����Ľ�����־������û���ټ�����ӡ�����###��
//	printf("arr2=%s\n", arr2);
//	return 0;
//}

//memset---memory(�ڴ�)set()����
//int main()
//{
//	char arr[] = "hello world\n";
//	memset(arr, '*', 5);//һ���̶��� char==int
//	printf("%s\n", arr);
//	return 0;
//}

//2.�Զ��庯��  ������  ��������  ��������

//int MAX(int x,int y)
//{
//	if (x > y )
//		return x;
//	else 
//		return y;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//}

//void�գ�����û�з���ֵ
// wrong:
// ��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��
//void Swap(int x, int y)//x y �� a b ����ͬһ��ַ   ���Զ��庯������������ֵ�޹�ϵ
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d\n", a, b);
//	Swap(a, b);
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//right---ʹ��ָ��   int��ֱ�����ڴ�����ռ䣬��int*����ռ����ٽ��յ�ַ������x,y��a,b������ϵ��
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d\n", a, b);
//	Swap(&a, &b);//���յ�ַ�������Ǵ���&a,&b
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//����������
//ʵ�ʲ���---ʵ�ʴ��������Ĳ�����ʵ�ο����ǣ����������������ʽ�������ȣ����ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ    
//��ʽ����---����������Ĳ������β�ֻ���ں������õĹ����в�ʵ�������ں���������ɺ���Զ�����
//�����ĵ��ã�
//��ֵ����---ʵ�κ��βη���ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��  
//��ַ����---�Ѻ����ⲿ�����������ڴ��ַ���ݸ����������������ú����ͺ����ⲿ�ı�����������������ϵ

//���Ҫ�ı亯���ⲿ��ֵ�����Ǵ�ַ����
//���ֻ��Ҫ��ȡһ��ֵ������Ҫ�ı�Ļ������Ǵ�ֵ����

