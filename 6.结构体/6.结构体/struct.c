#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tale[12];            //ͼֽ
//	char sex[5];
//}s1, s2, s3;//����ȫ�ֵĽṹ�����---һ�㲻ȥ��

//int main()
//{
//	struct stu s1;            //�Ƿ���
//	stu s2 = { "�³���",18,"18772295071","��" };//�ṹ���������������ʼ��
//	return 0;
//}
//
//typedef struct stu//����� �ṹ������struct stu---�������˸�����stu(����)
//{
//	char name[20];
//	short age;
//	char tale[12];            //ͼֽ
//	char sex[5];
//}stu;//����ȫ�ֵĽṹ�����---һ�㲻ȥ��

//��Ա���������� ָ�룬Ҳ�����������ṹ��
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T//��ֻ�Ǹ����ͣ�ʹ�õ�ʱ���Լ�����ṹ�����
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit    ���ﲻ֪��Ϊɶ��������û�п�ʼ�����ã��Ϳ��Դ�ӡhello bit��
//	return 0;
//}
//   .������   ->������

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];            
//	char sex[5];
//}stu;
////����һ��print1Ҫ����һ����stu sһ����Ŀռ䣬��ɼ���Ŀռ��˷�
//void print1(stu s)
//{
//	printf("name:   %s\n", s.name);
//	printf("age:   %d\n", s.age);
//	printf("telephone:   %s\n", s.tele);
//	printf("sex:   %s\n", s.sex);
//}
////��������print2����Ŀռ���� ---��ֻ��Ҫ����һ��ط��ŵ�ַ����
//void print2(stu* s)
//{
//	printf("name:   %s\n", s->name);
//	printf("age :   %d\n", s->age);//ֱ��s->��Ա�������ɣ����ý�����
//	printf("tele:   %s\n", s->tele);
//	printf("sex :   %s\n", s->sex);
//}
//int main()
//{
//	stu s = { "����",40,"18772295071","��" };
//	print1(s);
//	print2(&s);
//}

//�ڴ��Ϊ---ջ������������̬��
//ջ��---�ֲ���������������ʽ����,��������Ҳ���ٿռ�
//����---��̬�ڴ���䣬malloc/free  realloc��ralloc
//��̬��---ȫ�ֱ�������̬����
//�������Σ��������Ҵ��Σ����������������
//
//���ݽṹ��
//---�������ݽṹ
//˳���
//����
//ջ
//����
//---�������ݽṹ
//������
//---ͼ

//����ջ֡�Ĵ���������