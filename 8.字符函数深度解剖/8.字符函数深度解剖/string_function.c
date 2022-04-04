#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//代码题---矩形阵，找数
//矩形阵--每一行，从左到右，递增
//每一列，从上到下，递增

//对比的值右上角，既是一行的最大值，又是一列的最小值，所以它可以排除一行或一列
//同理左下角也可以
//int find_num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//行
//	int y = *py - 1;//列
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
//		printf("找到了\n");//如果我们想要获得下标的话，考虑返回型参数--传址--非常巧妙
//		printf("下标是:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//求字符串长度
//1.strlen---返回类型是size_t  (易错)
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(++arr);//先++，再使用
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len  = %d\n", len);
//	return 0;
//}


//2.长度不受限制的字符串函数   只受'\0'的限制
//1.strcpy   strcpy(  ,  )
//源字符串--必须包含'\0'
//目标字符串必须比源字符串长
//不要用常量字符串，因为不能修改
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


//2.strcat--添加字符串函数--和strcpy非常像，只不过它是从\0那里开始添加 strcat(  ,  )
//注意，源头字符串要包含'\0',因为源头的'\0'会放在目的地
//目的地字符串的数组空间足够大，放得下添加的字符串
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
//3.strcmp--比大小，注意比的不是长度，而是字符的大小(a最小，b最大)   strcmp(arr1,arr2)
// visual stdio环境下
//arr1大于arr2  返回1     其他编译器<0
//arr1等于arr2  返回0     其他编译器==0
//arr1小于arr2  返回-1    其他编译器>0     字符是可以比大小的，ASC||码值

//int my_strcmp(char* p1, char* p2)
//{
//	assert(p1 && p2);
//	//先判断是否相等
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

//3.长度受限制的函数
//1.strncpy(  ,  , number )   n--size_t number//只会拷贝进去n个字符
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;//逻辑与&&，两个
//	while ((count) && (*dest++ = *src++))//拷贝次数受到count影响，所以，count也要放到判断语句中
//	{
//		count--;//count--不能少
//	}
//	if (count)
//		while (count)
//		{
//			*dest = '\0';
//			count--;//如果遇到源字符串遇到\0时，count还不为0，count还剩多少，就在dest后面加多少\0
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

//2.strncat---strncat(  ,  ,n),只添加n个字符，但是注意，他会在目标字符串后面自动添加上\0
//注意n如果比源字符串长，还是添加源字符串，多余的n就不管了，根strncpy不一样
//是从\0的位置开始添加，并且最后还会自动再后面添加\0
//优点，便于添加自身字符串，即src与dest相等

//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++)//由于是后置加加，多加了一次，所以后面减减一次
//		;
//	dest--;
//	while (count--)
//		if (!(*dest++ = *src++))//*src不是\0,就继续++，知道src为\0,return dest的初始地址
//			return ret;//count长，从这出，就不会出现多打印\0的情况
//	*dest = '\0';
//	return ret;//count短
//
//}
//
//int main()
//{
//	char arr1[30] = "hello \0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 8);//8大于strlen(arr2)的话，就只是添加arr2
//	printf("%s\n", arr1);
//	return 0;
//}

//3.strncmp   strncmp(  ,  ,n)比较前n个字符


//strstr--查找子字符串   strstr( p1 , p2 )//从p1字符串查找，看能不能找到p2
//返回类型   找不到--返回NULL空指针，  找到了--返回第一个子字符串的首地址，找到的那个子字符串的起始地址（不是空指针）


//如果一个变量为'\0'，那么库函数喜欢用
//if(!变量名)
//{
//
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;//尽量不要随意改变p1，p2的位置，不然不容易找到初始位置，用s1，s2来移动
//	char* s2 = p2;//p2--记录s2的初始位置
//	char* cur = p1;//cur--记录s1的初始位置
//	//如果p2是空字符串
//	if (!(*p2))
//	{
//		return (char*)p1;
//	}
//
//	while (*cur)
//	{
//		//记录初始位置
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
//p1--原字符串的首地址   p2--分隔符的字符集合
//注意点1.调用这个函数会改变字符串内容，所以我们都是先进行一个临时拷贝，再调用
//如果p1是不是NULL，函数将找到str中第一个标记，strock函数将保存它在字符串中的位置
//如果是NULL，查找下一个标记
//使用一次strtok，函数会记住分隔符的位置

//int main()
//{
//	char arr[] = "192.168.32.121";
//	char* p = ".";//只要包含里面的分隔符即可
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

//5.strerror--返回错误码信息的起始地址
//erron--是一个全局的错误码的变量，当C语言的库函数在执行的过程中，发生了错误，就会把对应的错误码，复制到error中
#include <errno.h>
//int main()
//{
//	//错误码      错误信息
//	//0		no error
//	//1		Operation not permitted
//	//2		No such file or directory
//	//……
//
//	/*char* ret = strerror(2);
//	printf("%s\n", ret);*/
//	FILE* pf = fopen("test.txt", "r");//fopen--阅读函数(错误，返回空指针)   r--阅读
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

//3.字符分类函数
//islower--判断是否为小写字符   isdigit--判断是否为数字字符
//isspace--判断是否为空格，空行\n,回车\t
// isxdigit--判断是否为十六进制数字，包含所有十进制数字，小写字符a-f，大写字符A-F
//isupper--大写字母      isalpha--大小写字母
//isalnum--大小写字符 + 数组0-9
//ispunct--标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph--任何图形字符
//isprint-任何可打印字符，包括图形字符和空白字符
//是--非0值    不是--0

//作业里面可能会用到的
//isalpha		isdigit		ispunct		isspace
#include <ctype.h>
//int main()
//{
//	char ch = ';';
//	int ret = isprint(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//4.字符转换函数
//tolower--是大写字母就改成小写字母
//toupper--是小写字符就搞成大写字母

//int main()
//{
//	//char ch = 'a';
//	//ch = toupper(ch);//要用ch去接收函数值，这样char才能变成A
//	//putchar(ch);
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		if (isupper(arr[i]))//如果是大写，就变成小写
//			arr[i] = tolower(arr[i]);
//	}
//	printf("%s\n", arr);
//	return 0;
//}





