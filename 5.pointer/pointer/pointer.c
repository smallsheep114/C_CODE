#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*));
//	printf("%d\n",sizeof(struct stu*));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pc = &a;
//	*pc = 0;
//	printf("%d\n", a);
//	
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//
//	*pc = 0;//实际上改成了0x11223300---因为只能访问一个字节的空间
//	printf("%d\n", a);
//
//	return 0;
//}

//指针+-整数
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;//如果只是存地址的话，是没有什么问题的
//
//	printf("%p\n", pa);
//	printf("%p\n\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* pa = arr;
//	char* pa = arr;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	for (i = 0; i < sz; i++)
//	{
//		*(pa + i) = 1;//对每一个元素进行解引用，pa+i-->每个元素的地址
//	}
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//野指针--指针指向的位置是不可知的（随机的，不正确的，没有明确心智的）
//例子
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 12;
//    for (i = 0; i < 12; i++)
//    {
//        *p = i;
//        p++;//指针越界，跑到数组外面，变成野指针
//        for (i = 0; i < 10; i++)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = NULL;
//	pa = &a;
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* pa = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",*pa);
//		pa -=2;
//	}
//	return 0;
//}



//指针-指针
//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = &arr[9] - &arr[0];
//	int* pa = arr;
//	int* pb = &arr[9];
//	printf("a = %d\n", a);
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	//printf("%d\n", arr[9] - ch[0]);//错误写法
//	return 0;
//}

//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//	{
//		return 1 + my_strlen(ch + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char ch[20] = "abcde";
//	int ret = my_strlen(ch);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];//未初始化的数组
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)//指针的关系运算---比大小
//	{
//		*vp++ = 0;//后置加加，先使用，再加加
//	}
//	return 0;
//}

//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//}

//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//}

//最好写上面那种，标准不保证第二种可以运行
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr + 1);
//	
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  ====%p  \n", p + i, &arr[i]);//不要写成*p+i了，那就不是地址了
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa是二级指针变量---注意类型
//	int*** pppa = &ppa;//三级指针
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//
//	printf("%p\n", pa);
//	printf("%p\n", *ppa);
//	return 0;
//}

//指针数组---数组(存放指针的)      数组指针---指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
