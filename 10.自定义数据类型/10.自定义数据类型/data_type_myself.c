#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体，枚举，联合体

//struct
//{
//	int a;
//	char c;
//}sa;    --一次性
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
// 编译器会把上面两个类型看成完全不一样的类型
//int main()
//{
//	struct sa;
//	psa = &sa;//注意这两个自定义类型是不一样的，尽管他们看起来一样
//	return 0;
//}

//结构体自引用

//error
//struct Node
//{
//	int date;
//	struct Node n;   //计算不出来sizeof(struct Node)
//};

//struct Node
//{
//	int date;//4
//	struct Node* next;//4/8   放地址是可以的
//};

//typedef    type  define
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;//类型名重命名，struct Node->Node
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体变量的定义和初始化
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

//结构体内存对齐---常考，重要
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
//	printf("%d\n", sizeof(s1));//不是随便算算就能得到的
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}
//struct S3
//{
//	double d;//s3的最大对齐数   8
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;//s4的最大对齐数  8      千万不要以为整体大小是16的倍数咧
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

//设置编译器默认对齐数的方法
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

//stddef(结构体类型，成员名)--参数有一个是类型   头文件--#include<stddef.h>
//作用：计算成员相对于结构里变量的偏移量

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

//结构体传参
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
//void Print2(const struct S* ps)//避免被修改
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
//	//3.在函数里面实现
//	//Init(s);//error   //外部函数只是内部函数的一份临时拷贝，不会改变其值，所以要传址
//	Init(&s);//传址的功能更加强大
//
//
//	//4.打印
//	Print1(s);//传数
//	Print2(&s);//传址
//	//使用传址方法进行打印更好，因为&s所占空间小(4/8)，而s所占空间大(16),会一定程度地造成性能方面的下降
//	return 0;
//}

//位段    为了节省空间的   
//位：二进制位
//咱们当前编译器底下是
//    大小端的计量单位是字节
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

//枚举(类型)--一一列举            初值
//enum Sex//把性别一一列举出来
//{
//	//枚举的可能取值--枚举常量--可以给他们赋初值，不赋初值的话就是默认值0，1，2
//	//默认值是前面的值+1，前面没有的话，默认就是0
//	MALE ,//0
//	FEMALE = 9 ,//1
//	SECRET //2
//};
////
//enum Color//把三原色的可能性一一列举出来
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;//error    c = 2;   因为c的类型是enum Color类型，2是int类型
//	//error//MALE = 0;//这个不可以修改，因为枚举常量是常量不可以修改
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED,GREEN,BLUE);
//	printf("%d\n", sizeof(s));//MALE-4是一个整形嘛
//	return 0;
//}

//枚举的优点
//可读性和可维护性
//和#define相比，类型检查，更加严谨     #define定义的内容  没有类型
// 防止了命名污染（封装）
//方便定义
//方便调试


//联合--联合体--(共用体)
//特点：所有成员公用一块空间，所以联合体的大小至少是最大成员的空间大小
//下面的c i   我们一次性只能使用一个，因为改一个就相当于改了多个
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
//	u.c = 0x55;//共用的时候char共用的是int的低地址的那一个字节     注意咱们监视的内存，左边时低地址，右边时高地址
//	return 0;
//}
//判断大小端字节序的方法---如何找一个字节的内容   char*    联合体里面放一个char
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//2.方法2
//使用共用体
//int check_sys()
//{
//	union Un//创建一个联合体类型
//	{
//		char c;
//		int i;
//	}u;//可以直接在这创建
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//结构体--对齐   枚举   联合体大小--对齐计算
//数组的对齐数按数组元素的对齐数来计算
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


//通讯录程序
