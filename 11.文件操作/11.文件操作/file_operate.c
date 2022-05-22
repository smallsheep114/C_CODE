#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<errno.h>
#include<string.h>
//int main()
//{
//	//读
//	FILE* pf = fopen("test.txt", "w");//相对路径  //当前目录底下
//	//w--写，如果没有该文件夹，就新建。如果有就删除原来内容再写
//	/*FILE* pf = fopen("D:\\code\\11.文件操作\\11.文件操作\\test.txt", "r");*///绝对路径
//	//../上一级的目录底下
//	//../上上级目录底下
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc   fputc
//int main()
//{
//	//1.打开文件
//	FILE* pfRead = fopen("TEST.txt", "r");//大小写一样
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//2.写文件
//	/*fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite);*/
//	//2.读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//3.关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//fputc
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//打开文件（以什么形式打开，读的形式，写的实行）  关闭文件   读文件  写文件
//fgets   fputs   读入或者输入一行
// 读入
//int main()
//{
//	//1.打开文件
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//2.读入文件
//	fgets(buf, 20, pf);//将文件读入到内部（buf）
//	printf("%s", buf);
//	fgets(buf, 20, pf);//将文件读入到内部（buf）
//	printf("%s", buf);
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写出
//int main()
//{
//	//1.打开文件
//	FILE* pf = fopen("test_write.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//2.写文件   使用fputs
//	fputs("bit\n", pf);
//	fputs("hello\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//从标准输入输出设备来读取
//int main()
//{
//	char buf[1024] = "";
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//	return 0;
//}

//typedef struct
//{
//	int num;
//	float score;
//	char sex;
//}student;//类型名为student的结构体类型

//格式化输出 fprintf   --格式化   把内容写到文件里面去
//int main()
//{
//	student stu = { 202103008,86.7,'M' };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%d %.1f %c", stu.num, stu.score, stu.sex);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//格式化输入
//int main()
//{
//	student stu = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	/*fscanf(pf, "%d %c %f", &stu.num, &stu.sex, &stu.score);*///error   //只能对号入座
//	fscanf(pf, "%d %f %c", &stu.num, &stu.score, &stu.sex);
//	printf("%d %f %c", stu.num, stu.score, stu.sex);
//	fclose(pf);
//	pf = NULL;
//}

//从标准输入输出设备来实现以下
//int main()
//{
//	student stu = { 0 };
//	fscanf(stdin, "%d %f %c", &stu.num, &stu.score, &stu.sex);
//	fprintf(stdout, "%d %f %c", stu.num, stu.score, stu.sex);
//	return 0;
//}

//sscanf   sprintf
//int main()
//{
//	char buf[1024] = "";
//	student stu = { 202103008,87.5,'M' };
//	student tmp = { 0 };
//	sprintf(buf, "%d %f %c", stu.num, stu.score, stu.sex);//输出到字符串
//	//printf("%s\n", buf);//打印出来是字符  字符串
//	sscanf(buf, "%d %f %c", &tmp.num, &tmp.score, &tmp.sex);//字符串往里面输入
//	printf("%d %.1f %c", tmp.num, tmp.score, tmp.sex);
//	return 0;
//}

//文件版通讯录/记录日志
//二进制输入/输出   fwrite  freads
//typedef struct
//{
//	char name[20];
//	int age;
//	double score;
//}person;

//int main()
//{
//	person p1 = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&p1, sizeof(p1), 1, pf);//我们用二进制写文件，直接看是看不懂的，但是只要我们会用二进制读文件即可
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	person s2 = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fread(&s2, sizeof(s2), 1, pf);
//	printf("%s %d %.1lf", s2.name, s2.age, s2.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//会用二进制读文件即可

//文件的随机读取   fseek--偏移文件指针的位置
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf,-2, SEEK_END);
//	char c = fgetc(pf);
//	printf("%c\n", c);
//	/*int pos = ftell(pf);*/
//	/*printf("%d", pos);*/
//	rewind(pf);
//	c = fgetc(pf);
//	printf("%c\n", c);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//ftell--返回文件指针相对于起始位置的偏移量
//rewind--让文件指针回到文件的启示位置

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open test2.txt: ");//比strerror(errno)要更好用一些
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt:");
//		return 0;
//	}
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)//字符没有上传成功，就会返回EOF
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))//遇到读写错误，返回非零值
//	{
//		printf("\n I/O is wrong\n");
//	}
//	else if (feof(pf))//当遇到文件尾结束时，返回非零值
//	{
//		printf("\nend of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//疑问：为什么要用二进制去写
//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//int main()
//{
//	printf("%d %d\n", sizeof(struct A), sizeof(struct B));
//	printf("%d", sizeof(long));
//	return 0;
//}