#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<errno.h>
#include<string.h>
//int main()
//{
//	//��
//	FILE* pf = fopen("test.txt", "w");//���·��  //��ǰĿ¼����
//	//w--д�����û�и��ļ��У����½�������о�ɾ��ԭ��������д
//	/*FILE* pf = fopen("D:\\code\\11.�ļ�����\\11.�ļ�����\\test.txt", "r");*///����·��
//	//../��һ����Ŀ¼����
//	//../���ϼ�Ŀ¼����
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc   fputc
//int main()
//{
//	//1.���ļ�
//	FILE* pfRead = fopen("TEST.txt", "r");//��Сдһ��
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//2.д�ļ�
//	/*fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite);*/
//	//2.���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//3.�ر��ļ�
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

//���ļ�����ʲô��ʽ�򿪣�������ʽ��д��ʵ�У�  �ر��ļ�   ���ļ�  д�ļ�
//fgets   fputs   �����������һ��
// ����
//int main()
//{
//	//1.���ļ�
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//2.�����ļ�
//	fgets(buf, 20, pf);//���ļ����뵽�ڲ���buf��
//	printf("%s", buf);
//	fgets(buf, 20, pf);//���ļ����뵽�ڲ���buf��
//	printf("%s", buf);
//
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д��
//int main()
//{
//	//1.���ļ�
//	FILE* pf = fopen("test_write.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//2.д�ļ�   ʹ��fputs
//	fputs("bit\n", pf);
//	fputs("hello\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ӱ�׼��������豸����ȡ
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
//}student;//������Ϊstudent�Ľṹ������

//��ʽ����� fprintf   --��ʽ��   ������д���ļ�����ȥ
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

//��ʽ������
//int main()
//{
//	student stu = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	/*fscanf(pf, "%d %c %f", &stu.num, &stu.sex, &stu.score);*///error   //ֻ�ܶԺ�����
//	fscanf(pf, "%d %f %c", &stu.num, &stu.score, &stu.sex);
//	printf("%d %f %c", stu.num, stu.score, stu.sex);
//	fclose(pf);
//	pf = NULL;
//}

//�ӱ�׼��������豸��ʵ������
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
//	sprintf(buf, "%d %f %c", stu.num, stu.score, stu.sex);//������ַ���
//	//printf("%s\n", buf);//��ӡ�������ַ�  �ַ���
//	sscanf(buf, "%d %f %c", &tmp.num, &tmp.score, &tmp.sex);//�ַ�������������
//	printf("%d %.1f %c", tmp.num, tmp.score, tmp.sex);
//	return 0;
//}

//�ļ���ͨѶ¼/��¼��־
//����������/���   fwrite  freads
//typedef struct
//{
//	char name[20];
//	int age;
//	double score;
//}person;

//int main()
//{
//	person p1 = { "����",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&p1, sizeof(p1), 1, pf);//�����ö�����д�ļ���ֱ�ӿ��ǿ������ģ�����ֻҪ���ǻ��ö����ƶ��ļ�����
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
//���ö����ƶ��ļ�����

//�ļ��������ȡ   fseek--ƫ���ļ�ָ���λ��
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


//ftell--�����ļ�ָ���������ʼλ�õ�ƫ����
//rewind--���ļ�ָ��ص��ļ�����ʾλ��

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open test2.txt: ");//��strerror(errno)Ҫ������һЩ
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
//	while ((ch = fgetc(pf)) != EOF)//�ַ�û���ϴ��ɹ����ͻ᷵��EOF
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))//������д���󣬷��ط���ֵ
//	{
//		printf("\n I/O is wrong\n");
//	}
//	else if (feof(pf))//�������ļ�β����ʱ�����ط���ֵ
//	{
//		printf("\nend of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ʣ�ΪʲôҪ�ö�����ȥд
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