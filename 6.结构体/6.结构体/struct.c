#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tale[12];            //图纸
//	char sex[5];
//}s1, s2, s3;//三个全局的结构体变量---一般不去用

//int main()
//{
//	struct stu s1;            //盖房子
//	stu s2 = { "柯晨晨",18,"18772295071","男" };//结构体变量创建，并初始化
//	return 0;
//}
//
//typedef struct stu//给这个 结构体类型struct stu---重新起了个名字stu(类型)
//{
//	char name[20];
//	short age;
//	char tale[12];            //图纸
//	char sex[5];
//}stu;//三个全局的结构体变量---一般不去用

//成员变量可以是 指针，也可以是其他结构体
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T//这只是个类型，使用的时候，自己申请结构体变量
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
//	printf("%s\n", t.pc);//hello bit    这里不知道为啥，明明还没有开始解引用，就可以打印hello bit了
//	return 0;
//}
//   .操作符   ->操作符

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];            
//	char sex[5];
//}stu;
////方法一：print1要申请一个和stu s一样大的空间，造成极大的空间浪费
//void print1(stu s)
//{
//	printf("name:   %s\n", s.name);
//	printf("age:   %d\n", s.age);
//	printf("telephone:   %s\n", s.tele);
//	printf("sex:   %s\n", s.sex);
//}
////方法二：print2申请的空间更少 ---它只需要申请一块地方放地址即可
//void print2(stu* s)
//{
//	printf("name:   %s\n", s->name);
//	printf("age :   %d\n", s->age);//直接s->成员变量即可，不用解引用
//	printf("tele:   %s\n", s->tele);
//	printf("sex :   %s\n", s->sex);
//}
//int main()
//{
//	stu s = { "李四",40,"18772295071","男" };
//	print1(s);
//	print2(&s);
//}

//内存分为---栈区，堆区，静态区
//栈区---局部变量，函数的形式参数,函数调用也开辟空间
//堆区---动态内存分配，malloc/free  realloc，ralloc
//静态区---全局变量，静态变量
//函数传参，从左向右传参（绝大多数编译器）
//
//数据结构：
//---线性数据结构
//顺序表
//链表
//栈
//队列
//---树形数据结构
//二叉树
//---图

//函数栈帧的创建和销毁