#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ�壬ö�٣�������

//struct
//{
//	int a;
//	char c;
//}sa;    --һ����
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
// ��������������������Ϳ�����ȫ��һ��������
//int main()
//{
//	struct sa;
//	psa = &sa;//ע���������Զ��������ǲ�һ���ģ��������ǿ�����һ��
//	return 0;
//}

//�ṹ��������

//error
//struct Node
//{
//	int date;
//	struct Node n;   //���㲻����sizeof(struct Node)
//};

//struct Node
//{
//	int date;//4
//	struct Node* next;//4/8   �ŵ�ַ�ǿ��Ե�
//};

//typedef    type  define
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;//��������������struct Node->Node
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//�ṹ������Ķ���ͳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',{69.2,18},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr );
//	printf("%lf,%d", s.st.weight,s.st.age);
//
//	return 0;
//}

//�ṹ���ڴ����---��������Ҫ
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//�������������ܵõ���
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}
//struct S3
//{
//	double d;//s3����������   8
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;//s4����������  8      ǧ��Ҫ��Ϊ�����С��16�ı�����
//	double d;//8
//};
//
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

//���ñ�����Ĭ�϶������ķ���
//#pragma pack(4)
//struct S
//{
//	char c1;
//
//	double d;
//};
//#pragma pack()
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//stddef(�ṹ�����ͣ���Ա��)--������һ��������   ͷ�ļ�--#include<stddef.h>
//���ã������Ա����ڽṹ�������ƫ����

//struct S
//{
//	char c;
//	int num;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, num));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//�ṹ�崫��
//struct S
//{
//	char c;
//	int a;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)//���ⱻ�޸�
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	//1.
//	/*struct S s = { 'w',100,3.14 };*/
//	struct S s = { 0 };
//	//2.
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//	//3.�ں�������ʵ��
//	//Init(s);//error   //�ⲿ����ֻ���ڲ�������һ����ʱ����������ı���ֵ������Ҫ��ַ
//	Init(&s);//��ַ�Ĺ��ܸ���ǿ��
//
//
//	//4.��ӡ
//	Print1(s);//����
//	Print2(&s);//��ַ
//	//ʹ�ô�ַ�������д�ӡ���ã���Ϊ&s��ռ�ռ�С(4/8)����s��ռ�ռ��(16),��һ���̶ȵ�������ܷ�����½�
//	return 0;
//}

//λ��    Ϊ�˽�ʡ�ռ��   
//λ��������λ
//���ǵ�ǰ������������
//    ��С�˵ļ�����λ���ֽ�
//struct s
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//ö��(����)--һһ�о�            ��ֵ
//enum Sex//���Ա�һһ�оٳ���
//{
//	//ö�ٵĿ���ȡֵ--ö�ٳ���--���Ը����Ǹ���ֵ��������ֵ�Ļ�����Ĭ��ֵ0��1��2
//	//Ĭ��ֵ��ǰ���ֵ+1��ǰ��û�еĻ���Ĭ�Ͼ���0
//	MALE ,//0
//	FEMALE = 9 ,//1
//	SECRET //2
//};
////
//enum Color//����ԭɫ�Ŀ�����һһ�оٳ���
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;//error    c = 2;   ��Ϊc��������enum Color���ͣ�2��int����
//	//error//MALE = 0;//����������޸ģ���Ϊö�ٳ����ǳ����������޸�
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED,GREEN,BLUE);
//	printf("%d\n", sizeof(s));//MALE-4��һ��������
//	return 0;
//}

//ö�ٵ��ŵ�
//�ɶ��ԺͿ�ά����
//��#define��ȣ����ͼ�飬�����Ͻ�     #define���������  û������
// ��ֹ��������Ⱦ����װ��
//���㶨��
//�������


//����--������--(������)
//�ص㣺���г�Ա����һ��ռ䣬����������Ĵ�С����������Ա�Ŀռ��С
//�����c i   ����һ����ֻ��ʹ��һ������Ϊ��һ�����൱�ڸ��˶��
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;//���õ�ʱ��char���õ���int�ĵ͵�ַ����һ���ֽ�     ע�����Ǽ��ӵ��ڴ棬���ʱ�͵�ַ���ұ�ʱ�ߵ�ַ
//	return 0;
//}
//�жϴ�С���ֽ���ķ���---�����һ���ֽڵ�����   char*    �����������һ��char
// 1.
//int check_sys(int a)
//{
//	return *(char*)&a;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys(a);
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//2.����2
//ʹ�ù�����
//int check_sys()
//{
//	union Un//����һ������������
//	{
//		char c;
//		int i;
//	}u;//����ֱ�����ⴴ��
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//�ṹ��--����   ö��   �������С--�������
//����Ķ�����������Ԫ�صĶ�����������
//union Un
//{
//	int i;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}


//ͨѶ¼����
