#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������---����������
//������--ÿһ�У������ң�����
//ÿһ�У����ϵ��£�����

//�Աȵ�ֵ���Ͻǣ�����һ�е����ֵ������һ�е���Сֵ�������������ų�һ�л�һ��
//ͬ�����½�Ҳ����
//int find_num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//��
//	int y = *py - 1;//��
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret =  find_num(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");//���������Ҫ����±�Ļ������Ƿ����Ͳ���--��ַ--�ǳ�����
//		printf("�±���:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//���ַ�������
//1.strlen---����������size_t  (�״�)
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(++arr);//��++����ʹ��
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len  = %d\n", len);
//	return 0;
//}


//2.���Ȳ������Ƶ��ַ�������   ֻ��'\0'������
//1.strcpy   strcpy(  ,  )
//Դ�ַ���--�������'\0'
//Ŀ���ַ��������Դ�ַ�����
//��Ҫ�ó����ַ�������Ϊ�����޸�
#include <assert.h>
//char* my_strlen(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "bit";
//	printf("%s\n", my_strlen(arr1, arr2));
//	return 0;
//}


//2.strcat--����ַ�������--��strcpy�ǳ���ֻ�������Ǵ�\0���￪ʼ��� strcat(  ,  )
//ע�⣬Դͷ�ַ���Ҫ����'\0',��ΪԴͷ��'\0'�����Ŀ�ĵ�
//Ŀ�ĵ��ַ���������ռ��㹻�󣬷ŵ�����ӵ��ַ���
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	int len = strlen(dest);//6
//	dest += len;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp(  ,  )
//3.strcmp--�ȴ�С��ע��ȵĲ��ǳ��ȣ������ַ��Ĵ�С(a��С��b���)   strcmp(arr1,arr2)
// visual stdio������
//arr1����arr2  ����1     ����������<0
//arr1����arr2  ����0     ����������==0
//arr1С��arr2  ����-1    ����������>0     �ַ��ǿ��Աȴ�С�ģ�ASC||��ֵ

//int my_strcmp(char* p1, char* p2)
//{
//	assert(p1 && p2);
//	//���ж��Ƿ����
//	while (*p1==*p2)
//	{
//		if (*p1 == '\0')
//			return 0;
//		p1++;
//		p2++;
//	}
//	if (*p1 > *p2)
//	{
//		return (*p1-*p2);
//	}
//	else
//		return (*p1-*p2);
//}
//int main()
//{
//	char* p1 = "abcdea";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//3.���������Ƶĺ���
//1.strncpy(  ,  , number )   n--size_t number//ֻ�´����ȥn���ַ�
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;//�߼���&&������
//	while ((count) && (*dest++ = *src++))//���������ܵ�countӰ�죬���ԣ�countҲҪ�ŵ��ж������
//	{
//		count--;//count--������
//	}
//	if (count)
//		while (count)
//		{
//			*dest = '\0';
//			count--;//�������Դ�ַ�������\0ʱ��count����Ϊ0��count��ʣ���٣�����dest����Ӷ���\0
//		}
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//2.strncat---strncat(  ,  ,n),ֻ���n���ַ�������ע�⣬������Ŀ���ַ��������Զ������\0
//ע��n�����Դ�ַ��������������Դ�ַ����������n�Ͳ����ˣ���strncpy��һ��
//�Ǵ�\0��λ�ÿ�ʼ��ӣ�������󻹻��Զ��ٺ������\0
//�ŵ㣬������������ַ�������src��dest���

//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++)//�����Ǻ��üӼӣ������һ�Σ����Ժ������һ��
//		;
//	dest--;
//	while (count--)
//		if (!(*dest++ = *src++))//*src����\0,�ͼ���++��֪��srcΪ\0,return dest�ĳ�ʼ��ַ
//			return ret;//count������������Ͳ�����ֶ��ӡ\0�����
//	*dest = '\0';
//	return ret;//count��
//
//}
//
//int main()
//{
//	char arr1[30] = "hello \0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 8);//8����strlen(arr2)�Ļ�����ֻ�����arr2
//	printf("%s\n", arr1);
//	return 0;
//}

//3.strncmp   strncmp(  ,  ,n)�Ƚ�ǰn���ַ�


//strstr--�������ַ���   strstr( p1 , p2 )//��p1�ַ������ң����ܲ����ҵ�p2
//��������   �Ҳ���--����NULL��ָ�룬  �ҵ���--���ص�һ�����ַ������׵�ַ���ҵ����Ǹ����ַ�������ʼ��ַ�����ǿ�ָ�룩


//���һ������Ϊ'\0'����ô�⺯��ϲ����
//if(!������)
//{
//
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;//������Ҫ����ı�p1��p2��λ�ã���Ȼ�������ҵ���ʼλ�ã���s1��s2���ƶ�
//	char* s2 = p2;//p2--��¼s2�ĳ�ʼλ��
//	char* cur = p1;//cur--��¼s1�ĳ�ʼλ��
//	//���p2�ǿ��ַ���
//	if (!(*p2))
//	{
//		return (char*)p1;
//	}
//
//	while (*cur)
//	{
//		//��¼��ʼλ��
//		s1 = cur;
//		s2 = p2;
//		while (*s1  && *s2  && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!(*s2))
//		{
//			return cur;
//		}
//		if (!(*s1))
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("substring isn't exit");
//	}
//	else
//	{
//		printf("i find it,it is %s\n", ret);
//	}
//	return 0;
//}


//4.strtok   char* strtok( p1 , p2 )
//p1--ԭ�ַ������׵�ַ   p2--�ָ������ַ�����
//ע���1.�������������ı��ַ������ݣ��������Ƕ����Ƚ���һ����ʱ�������ٵ���
//���p1�ǲ���NULL���������ҵ�str�е�һ����ǣ�strock���������������ַ����е�λ��
//�����NULL��������һ�����
//ʹ��һ��strtok���������ס�ָ�����λ��

//int main()
//{
//	char arr[] = "192.168.32.121";
//	char* p = ".";//ֻҪ��������ķָ�������
//	char buff[100] = { 0 };
//	strcpy(buff, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//5.strerror--���ش�������Ϣ����ʼ��ַ
//erron--��һ��ȫ�ֵĴ�����ı�������C���ԵĿ⺯����ִ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�error��
#include <errno.h>
//int main()
//{
//	//������      ������Ϣ
//	//0		no error
//	//1		Operation not permitted
//	//2		No such file or directory
//	//����
//
//	/*char* ret = strerror(2);
//	printf("%s\n", ret);*/
//	FILE* pf = fopen("test.txt", "r");//fopen--�Ķ�����(���󣬷��ؿ�ָ��)   r--�Ķ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file successfully");
//	}
//	return 0;
//}

//3.�ַ����ຯ��
//islower--�ж��Ƿ�ΪСд�ַ�   isdigit--�ж��Ƿ�Ϊ�����ַ�
//isspace--�ж��Ƿ�Ϊ�ո񣬿���\n,�س�\t
// isxdigit--�ж��Ƿ�Ϊʮ���������֣���������ʮ�������֣�Сд�ַ�a-f����д�ַ�A-F
//isupper--��д��ĸ      isalpha--��Сд��ĸ
//isalnum--��Сд�ַ� + ����0-9
//ispunct--�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph--�κ�ͼ���ַ�
//isprint-�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
//��--��0ֵ    ����--0

//��ҵ������ܻ��õ���
//isalpha		isdigit		ispunct		isspace
#include <ctype.h>
//int main()
//{
//	char ch = ';';
//	int ret = isprint(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//4.�ַ�ת������
//tolower--�Ǵ�д��ĸ�͸ĳ�Сд��ĸ
//toupper--��Сд�ַ��͸�ɴ�д��ĸ

//int main()
//{
//	//char ch = 'a';
//	//ch = toupper(ch);//Ҫ��chȥ���պ���ֵ������char���ܱ��A
//	//putchar(ch);
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		if (isupper(arr[i]))//����Ǵ�д���ͱ��Сд
//			arr[i] = tolower(arr[i]);
//	}
//	printf("%s\n", arr);
//	return 0;
//}





