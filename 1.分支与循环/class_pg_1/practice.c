#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//1.计算n的阶层
//用了scanf 和 printf 函数，不要忘了加头文件
//思考（算法）：要用1-n这个多的数（考虑到用循环），要把这些数全部乘到一个数里面去
//myself
//int main()
//{
//	int i = 1;
//	int re = 1;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		re *= i;//  和re = re*i;一样
//	}
//	printf("n! = %d", re);
//	return 0;
//}
//teacher：一样的


//2.计算1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
//下面那段代码错了，按道理是9，结果是15
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n;
//	int sum=0 ;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//这是修改后加上去的
//		for (i=1; i <= n; i++)
//		{
//			ret *= i;//错误原因ret出了问题，当计算ret*1*2*3时，变成了2*1*2*3 for循环够厚ret没有回到1值
//		}
//		sum = sum + ret;
//	}
//	printf("result=%d\n", sum);
//	return 0;
//}

//优化后的代码--简便
//int main()
//{
//	int ret = 1;
//	int n;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//我们删去了i的那个循环  即我们可以把计算n的阶层和将他们相加放在一个循环里
//		sum = sum + ret;
//	}
//	printf("result=%d\n", sum);
//	return 0;
//}


//3.在一个有序数组中查找具体的某个数字n
//这段代码比较啰嗦，效率低
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("i find it,下标是%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//优化之后的代码
//折半查找算法（二分查找算法）
//这种查找方法最多会查找log2 n（取整）次
//再想想 2^32个数字中，找一个数，用这种方法只需要查找32次，即可
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//这是要查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)//只有left<right说明，中间有元素可以查找
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("i find it 下标是%d", mid);
//			break;//我们需要这个break来终止循环，不然会一直打印
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//4.编写代码，演示多个字符从两端移动，向中间汇聚
//注意字符串"abc"---{'a','b','c',\0}   多一个字符
//仔细看看吧，里面用了Sleep();和strlen();和system("cls");
//而且各自都有各自的头文件#include<windows.h> #include<string.h> #include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//字符串加双引号
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//单位是毫秒，所以是1000
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//strlen() 和 sizeof()都可以计算字符串的长度
//但是strlen不会将结束标识符如\n，计入
//int main()
//{
//	char arr[] = "####################";
//	printf("strlen(arr)=%d\n",strlen(arr));//20
//	printf("sizeof(arr)=%d", sizeof(arr));//21
//	return 0;
//}
//5.编写代码实现，模拟用户登录情景，并且只能登录三次（）
//只允许输入三次密码，如果密码正确则提示登陆成功，如果三次输入错误，则退出程序
//我的代码---有bug



//==不能用来比较两个字符串是否相等,应该使用一个库函数-strcmp
//如strcmp(password,"123456")==0 ---把两个字符串传给strcmp---前面的大 是>0的数字，以此类推
//以下这段代码是照着敲的，自己写的代码有bug，目前还不知如何解决
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//先把password放在数组里
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);//密码是123456
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误啦\n");
//
//		}
//		if (i == 3)
//		{
//			printf("三次密码都错误，即将推出程序\n");
//		}
//	}
//	return 0;
//}