#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//int main()//�н��л�
//{
//	//����һ���ڴ�Ϊ10��int�Ŀռ�
//	int* p = (int*)malloc(INT_MAX);//32λƽ̨�ͻ��ڴ治�����ڴ����ĵ�ַ���йأ��²⣩
//	if (p == NULL)
//	{
//		perror("Allocates memory blocks:");
//	}
//	else
//	{
//		//����ʮ��Ԫ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//��ʹ���ʱ���ͷ��ˣ�p���ʱ���Ǻ�Σ�յ�
//	p = NULL;//������һ���͸���ȫ�ˣ�����û���������ҵ��ǿ�ռ�
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("allovates memory blocks:");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc���������ݣ�
//int main()
//{
//	int* p = malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("allovates memory blocks:");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//
//	//ʵ������--�кܶ�ķ�����
//	int* str = realloc(p, 10*sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else
//	{
//		perror("reallovates memory blocks:");
//	}
//
//	//��Ȼ���ͷ��ڴ�
//	free(p);
//	p = NULL;
//	str = NULL;
//	return 0;
//}

//int *p = realloc(NULL,80);--reallocʵ��malloc�Ĺ���
//1.��������Ķ�̬�ڴ������
//int main()
//{
//
//	return 0;
//}
//1.û�ж�p�����ж�
//2.û�жԿռ�����ͷ�
//3.�����ǵ���ֵ���ݣ�����ı�str�����ݣ�ֵ���ݣ�

//strcpy(null,"abcdef");--����д����ɣ��������

//û��ָ���ܹ��ҵ���̬�ڴ�ռ��ˣ���ô���ռ�Ͳ���ά���ˣ�����Ҳ������ڴ�й¶
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);    //����
//	return p;
//}
//
//int Check(char* p)
//{
//	if (p != NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//str�����ݻ���NULL
//	if (Check(str) == 1)
//	{
//		printf("�����ڴ�ɹ�\n");
//	}
//	else
//	{
//		perror("allovacts memory blocks:");
//	}
//	strcpy(str, "hello world");//�������
//	printf(str);//����д��Ҳ�ǿ��Ե�
//	free(str);//��ΪstrҲ֪����̬�ڴ��λ�ã���������ڴ����ɿ���ά��
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//2.����⻹��û������
//�Ƿ����ʣ���������   ??
//char* GetMemory(void)
//{
//	char p[] = "hello world";     //ջ�������˺������������ռ����ʧ�ˣ����������ֵҲ��������ֵ
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();      //��ʹ�õ����������Ԫ�ص�ַ���������������Ѿ���Ϊ�����ֵ
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����
//char* GetMemory(void)
//{
//	static char p[] = "hello world";     //��̬�����������ռ�û���ͷ�
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();     
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//����
//int* test()
//{
//	static int a = 10;//��̬��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//3.
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	if (str == NULL)
//	{
//		perror("allovates memory blocks:");
//	}
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//4.�Ƿ������ڴ棬��ʹ�����world�����ڴ�ܴ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��Ϊ��ָ��
//	str = NULL;
//	if (str != NULL)
//	{
//		//����ָ����������Ǻܲ���ȫ�ģ���ʹ�ǿ�ռ䲻�������ˣ��㻹�ǿ��Բ����ǿ�ռ䣬�Ƿ�
//		strcpy(str, "world");//�������ռ��Ѿ��ͷ�,����������
//		printf(str);
//	}
//}
////
//int main()
//{
//	Test();
//	return 0;
//}
//�����ͷ�һ��ռ�֮�����ǻ�Ҫ��ά�����ռ��ָ�븳ֵΪ��ָ��


//1.��������
//typedef struct
//{
//	int n;
//	int arr[];//--arrָ�룬ָ�������n�ռ������׵�ַ����⣩
//}student;
//
//int main()
//{
//	//student stu; --- ������������Ҫ�������Ϳ���ʹ��
//	//printf("%d\n", sizeof(student));//��������Ĵ�С������ṹ�����͵Ŀռ��С
//	student* pf = malloc(sizeof(student) + sizeof(int) * 5);//���鳤��Ϊ5
//	if (pf == NULL)
//	{
//		perror("allovacts memory blocks:");
//		return 0;
//	}
//	pf->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		pf->arr[i] = i;
//	}
//	//������������ĳ���
//	student* ptr = realloc(pf,sizeof(student) + 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		pf = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		pf->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pf->arr[i]);
//	}
//	//�ͷ�
//	free(pf);
//	pf = NULL;
//	return 0;
//}

//д����    ���𷽷�һ���������arr��ռ�ռ䣬���ٶ�̬�ڴ�ռ���������һ���
//int num,int arr������һ���
//���������ռ��Ƿֿ���
//typedef struct
//{
//	int num;
//	int* arr;
//}student;
//
//int main()
//{
//	student* ps = (student*)malloc(sizeof(student));//��int num    ��int*ָ��
//	if (ps == NULL)
//	{
//		perror("allovates memory blocks :");
//		return 0;
//	}
//	int i = 0;
//	ps->num = 100;
//	ps->arr = (int*)malloc(sizeof(int) * 5);
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//˵ʲô�ǣ�������ʵ�ʱ���±�û�м���ȥ������bug
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	//�����ռ�
//	int* ptr = (int*)realloc(ps->arr, 10*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//�ͷſռ�ʱ��Ҫ�ر�ע�⣬���������鶯̬�ڴ�ռ�
//	//һ��װ��  int num,int*
//	//һ��װ������,Ӧ�����ͷ�����ռ䣬Ҫ�����ͷŵ�һ��ռ䣬�ڶ���ռ��λ�þ��Ҳ�����
//	free(ps->arr);
//	free(ps);
//	ps = NULL;//˭���٣�˭�ͷ�
//	return 0;
//}