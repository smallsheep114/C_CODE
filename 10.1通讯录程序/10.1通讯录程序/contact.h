#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>//sb��������ͷ�ļ�����β�ļ���
#include<stdio.h>
#include<stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3

enum option
{
	EXIT,//exit������ǰ��Ĭ��ֵ����0��
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo *data;//ά����̬�ڴ�ռ�--��ָ����ʽ
	//����ж�ͨѶ¼�Ƿ�װ������
	int capacity;//��¼ͨѶ¼��ǰ����
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
}Contact;

void InitContact(struct Contact* ps);

void AddContact(struct Contact* ps);//���һ���˵���Ϣ��ͨѶ¼

void ShowContact(const struct Contact* ps);//��ӡͨѶ¼�е���Ϣ

void DelContact(struct Contact* ps);//ɾ��ָ���������Ǹ��˵���Ϣ

void SearchContact(struct Contact* ps);//����ָ���������Ǹ��˵���Ϣ

void ModifyContact(struct Contact* ps);//�޸�ָ���������Ǹ��˵���Ϣ

void SortContact(struct Contact* ps);//�������ͨѶ¼��������--����ʹ��qsort

void SaveContact(struct Contact* ps);//����ͨѶ¼���ļ�

void DestoryContact(Contact* ps);