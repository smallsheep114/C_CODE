#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//5.内存函数     适用于多种类型的数据拷贝
//1.memcpy
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };*/
//	stu arr3[] = {{"张三",20},{"李四",21}};
//	stu arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr2, arr1, sizeof(arr1));//第三个参数是，源的空间大小
//	return 0;
//}


//2.memmove   处理重叠部分的拷贝  void* memmove(void* ,const void*,size_t)
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{//1.从前向后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;//因为++优先级高于char*，所以用前置++
//			++(char*)src;
//		}
//	}
//	else//重点
//	{//2.从后向前拷贝
//		while (count--)
//		{//我们要得到最后一个字节的内容，必须+20-1,count刚好完美的帮我们实现了这个-1
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr+2, sizeof(int)*5);
//	return 0;
//}
// 
// 3.memcmp--内存函数比较
//int my_memcmp(const void* arr1, const void* arr2, size_t count)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*(char*)arr1 == *(char*)arr2)
//	{
//		count--;
//		if (count == 0)
//			return 0;
//		++(char*)arr1;
//		++(char*)arr2;
//	}
//	return *(char*)arr1 - *(char*)arr2;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);//一个字节，一个字节的进行比较
//	return 0;
//}

//4.memset--将一个字节的内容，改成自己想要的内容
//int main()
//{
//	char ch[10] = "";
//	memset(ch, '#', 9);//第一个参数，需要改的起始位置，二：需要搞成的内容，类型是int三：需要修改的字节大小
//	printf("%s\n", ch);
//	return 0;
//}

//void* my_memset(void* arr, int num, size_t count)
//{
//	void* start = arr;
//	assert(arr != NULL);
//	while (count--)
//	{
//		*(char*)arr = num;
//		++(char*)arr;
//	}
//	return start;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	my_memset(arr, 1, 40);//会改成01 01 01 01--十六进制
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

