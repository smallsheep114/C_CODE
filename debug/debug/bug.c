#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//bug---����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	
//	system("pause");
//}

//Debug�汾����
//release�汾û�������Ż���һ���ִ���Ĺ���

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//15596668862


//vs2013�����£����´����ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//i�ĵ�ַӦ�ñ�arr�ĵ�ַ�ߣ������Ǳ���������һЩ�����Ż�
//	printf("  i�ĵ�ַ�ǣ�%p\n", &i);
//	printf("arr�ĵ�ַ�ǣ�%p\n", arr);
//	
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//}

//strcpy---�ַ�������
//����10�֣����´���6��
//void my_strcpy(char* dest,char* src)
//{
//	while(*src !='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//��'\0'��arr2������arr1
//}
//7��
//void my_strcpy(char* dest, char* src)
//{
//	//����ȥһ����ָ�룬������ʹ�õĻ���ϵͳ���
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)//���һ�ν�\0������*dest�У�����\0���ÿ�����whileѭ��ͣ����
//		{
//			;
//		}
//	}
 // }
//8��
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//���ԣ���ȷ�Լ������ţ�---����������ݵ���ȷ�ģ�ʲô�¶�������������Ǵ���ģ��ͻᱨ��---����ʧ��
//	assert(src != NULL);//����
//	while (*dest++ = *src++)//���һ�ν�\0������*dest�У�����\0���ÿ�����whileѭ��ͣ����
//	{
//		;
//	}
//}
//9��
//char* my_strcpy(char* dest, const char* src)//*src���ܸı�
////�������������char*---���ص���dest�Ĵ���ʼλ�õ�\0������
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵص���ʼ��ַ---�е㲻���
//}
//
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "hello bit";
//	printf("arr1�����%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int num1 = 10;
//	int n = 100;
//	//  const int* p = &num1;//����const,����ָ�����
//	 //error:const����ָ�������*���ʱ�����ε���*p������ͨ��p���ı�*p��num1����ֵ(���ܽ����ò����ˣ������Ի���ַ��
//	//  int* const p = &num1;
//	  //const����ָ�����*���ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	int* const p = &num1;
//	*p = 0;
//	//��ţ��  const int*const p = &num1;//���ܻ���ַ�����ܽ�����
//
//
//	printf("%d\n", num1);
//	return 0;
//}

//ģ��ʵ��strlen����
//int my_strlen(const char* str)//�ַ��������޸�,ָ��ı���
//{
//	int count = 0;
//	assert(str != NULL);//���ԣ���ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
