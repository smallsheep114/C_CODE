#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


//设计一个函数，实现字符串逆序
// char* string(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;//这里right是sz-1，因为下标是从0开始嘛
//	char* start = &arr[left];//把最初地址放在start，便于最后用来返回
//	while (left<=right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr[30] = { 0 };
//	gets(arr);//可以弥补scanf的缺点
//	int sz = strlen(arr);
//	printf("%s\n", string(arr,sz));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	//2 22 222 2222 22222
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * 10 + a;//乘以十，再加a即可
//		sum = sum + ret;
//	}
//	printf("和位：%d\n", sum);
//	return 0;
//}

//自幂数（结合水仙花数理解）
//打印1-10000之间的自幂数
//int main()
//{
//	int i = 0;//a---万，b---千位，c---百位，d---十位，d---个位
//	int a, b, c;
//	for (i = 100; i <1000; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		int ret = pow(a, 3) + pow(b, 3) + pow(c, 3);//水仙花数都是三次方
//		if (i ==ret )//if后面别加分号呀，不然要完犊子
//		{
//			printf("%d ",i);
//		}
//	}
//	
//	return 0;
//}

//老师写的判断自幂数代码1-100000的自幂数
//    /10%10我们可以使用循环来实现
int main()
{
	int i = 0;
	//计算i的位数，自幂数位数--就是次方
	for (i = 1; i <= 100000; i++)
	{
		int n = 1;//位数
		int tmp = i;//创建一个临时变量来取代i，避免我们会改变i的值（循环条件i）
		int sum = 0;
		while (tmp/=10)//如果tmp/10不为0，就n+1
		{
			n++;
		}
		tmp = i;//因为前面使用循环时，我们改变了tmp的值，所以这里要重新进行赋值
		while (tmp)
		{
			sum += pow(tmp % 10, n);//个位的n次方
			tmp /= 10;//接着计算更高位,要写成/=，不然tmp的值一直没变
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//打印菱形
//      *               
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
//
//int main()
//{
//	//分两次进行打印，因为一次就打印完的话，我们只能输入奇数
//	int i = 0;
//	int line = 0;//
//	scanf("%d", &line);
//	//上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i*2+1; j++)//是j<i*2+1,别写成i<i*2+1了，头大了
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;//总共喝了多少瓶汽水
//	int empty = 0;//空瓶的数量
//	scanf("%d", &money);
//	//方法二：数学建模，公式法
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;//一瓶水1块钱，一个空瓶0.5，到最后总会剩下一个空瓶 20*2-1==39//价值转换
//	////买回来到少汽水
//	//total = money;
//	//empty = total;
//	////换回来多少汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d\n", total);
//	return 0;
//}

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边开始找偶数
//		while ((left < right) && (arr[left] % 2 == 1))//遇到奇数，下标加一，遇到偶数停下来
//		{//left<right这个条件要加上，因为加入数组内容都是奇数吗，就会越界
//			left++;
//		}
//		//从右边开始找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			//在这里就不需要再继续加left++,left-- 了，因为arr[left]和arr[right]内容交换了
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;//在这里计算a+b时，不会进行整形提升，300 = 255 + 1 + 44 = 44   无符号char中255+1=0
//	printf("%d %d\n", a + b, c);//在这个printf里面计算a+b时，由于打印的是%d，所以要进行整形提升
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);//52  小端处理器0x34
//	//大端处理器是0x00
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };//注意这是一个char类型的数组,-128 - 127//一共有256个数
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//0不算作长度256 - 1 = 255
//	}
//	printf("%d\n", strlen(a));
//}


//打印杨辉三角，首先我们先不考虑前面的空格
//#define ROW 10
//#define COL 10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[ROW][COL] = { 0 };
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j > 0)//注意数组下标是从0开始的
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)//<=i才能打印我们想要的东东
//
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//代码题--日本某地发生了一个谋杀案，警察通过排查确定杀手，凶手必为4个嫌疑犯的一个
//A：不是我  B：是c  C：是D  D：C在胡说，三个人说了真话，一个人说了假话
// 挺有意思的一个代码题
// 
//表达式的结果是一个逻辑值，1--真，0--假，如果三个表达式的值加起来是3，则假设成功
//假设法，假设其中一个是嫌疑犯，再看四个人说的话是真是假
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//要把这些表达式的值都加起来
//		{
//			printf("真相只有一个\n凶手就是%c\n", killer);
//		}
//	}
//	return 0;
//}
//找工作经常会考
//类似问题        1.赛马问题：36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的第三名，请问最少比赛几次
//2.烧香问题，有一种香，材质不均匀，但是每一根燃烧完恰好是一个小时，给你两根香，帮我确定15分钟的时间段
//1.首先将第一根香两端都点着，那么第一根香就烧完了花了30分钟
//2.在第一根香两端点着的同时，点着第二根香的一端
//3.那么30分钟过去了，将第二根香的另一端也点着，那么第二根香之后就花15分钟烧完了

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//		for (b = 1; b <= 5; b++)
//			for (c = 1; c <= 5; c++)
//				for(d = 1; d <= 5; d++)
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2)+(a==3)==1)&& 
//							((b==2)+(e==4)==1) && 
//							((c==1)+(d==2)==1) && 
//							((c==5)+(d==3)==1) && 
//							((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)//因为a,b,c,d,e必须分别是1，2，3，4，5，所以他们相乘绝对等于120
//							printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//						}
//					}
//	return 0;
//}

//不用空间的时候，我们要释放掉空间
//当使用free释放掉一个指针内容后，相当于把这块空间还回去了
//但是指针还是指向之前的内容的，我们我们要手动将其改为空指针

//         int(*  (*arr) [10])(int*)

//回调函数是一个通过函数指针调用的函数--调用的那个函数才是回调函数
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);//&a+1是一个数组地址，所以我们要进行一下强制类型转换
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	int arr[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));//*(arr+1)得到第二行数组名
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//代码题，旋转字符串


//1.暴力左旋法--不是最优滴
//void left_move(char* arr, int k)
//{
//	int sz = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		//实现左旋一次字符串
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + 1 + j);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//}

//2.三部翻转法
//ab  cdef   //加入我们要左旋2次   1.将前面两个字符逆序一次   后面的一群字符逆序一次得
//ba  fedc    //2.整体逆序一次  得
//cdfeab
//也就是说，咱们只要会这个字符串逆序函数，就可以实现这个算法了

//#include<assert.h>
//void Reverse(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	//实现交换
//	while (left < right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
////
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	Reverse(arr, k);
//	Reverse(arr + k, len - k);
//	Reverse(arr, len);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	int num = 0;
//	scanf("%d", &num);
//	left_move(arr, num%sz);//左旋8次，其实就是相当于，左旋了2次
//	printf("%s\n", arr);
//	return 0;
//}

//代码题，判断一个字符串是否由另一个字符串旋转而来
// 1.每一次的旋转情况都进行一次，看是否和另一个字符串相同
//int Is_left_move(char* s1, char* s2)
//{
//	int sz = strlen(s1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		left_move(s1, 1);//将s1左旋一次
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//
// 2.abcdefabcdef---在后面再加一个abcdef，这就包括了所有的左旋内容
//cdefab
//可以发现咱们这样用函数写代码，就实现了高内聚，低耦合，非常容易修改，而且函数的功能都比较单一

//int Is_left_move(char* s1,char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//给s1追加一个s1，使用函数strncat
//	strncat(s1,s1,6);
//	//判断s2时候为s1的字串，使用函数strstr
//	char* ret= strstr(s1, s2);
//	if (ret != NULL)
//		return 1;
//	else
//		return 0;
//}//但是这个函数的瑕疵在于，s2字符串与s1字符串长度不同时，结果也有可能是YES
//
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "cdefab";
//	int ret = Is_left_move(s1, s2);//通过左旋，s1，s2进行一个比较
//	if (ret == 1)
//		printf("YSE\n");
//	else
//		printf("NO\n");
//	return 0;
//}
