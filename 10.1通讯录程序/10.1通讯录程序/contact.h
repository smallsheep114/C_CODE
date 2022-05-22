#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>//sb，哪有人头文件不加尾文件的
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
	EXIT,//exit放在最前面默认值就是0嘛
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

//通讯录类型
typedef struct Contact
{
	struct PeoInfo *data;//维护动态内存空间--以指针形式
	//如何判断通讯录是否装满了呢
	int capacity;//记录通讯录当前容量
	int size;//记录当前已经有的元素个数
}Contact;

void InitContact(struct Contact* ps);

void AddContact(struct Contact* ps);//添加一个人的信息到通讯录

void ShowContact(const struct Contact* ps);//打印通讯录中的信息

void DelContact(struct Contact* ps);//删除指定姓名的那个人的信息

void SearchContact(struct Contact* ps);//搜索指定姓名的那个人的信息

void ModifyContact(struct Contact* ps);//修改指定姓名的那个人的信息

void SortContact(struct Contact* ps);//按年龄对通讯录进行排序--我们使用qsort

void SaveContact(struct Contact* ps);//保存通讯录到文件

void DestoryContact(Contact* ps);