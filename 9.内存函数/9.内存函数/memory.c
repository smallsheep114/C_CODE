#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//5.�ڴ溯��     �����ڶ������͵����ݿ���
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
//	stu arr3[] = {{"����",20},{"����",21}};
//	stu arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr2, arr1, sizeof(arr1));//�����������ǣ�Դ�Ŀռ��С
//	return 0;
//}


//2.memmove   �����ص����ֵĿ���  void* memmove(void* ,const void*,size_t)
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{//1.��ǰ��󿽱�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;//��Ϊ++���ȼ�����char*��������ǰ��++
//			++(char*)src;
//		}
//	}
//	else//�ص�
//	{//2.�Ӻ���ǰ����
//		while (count--)
//		{//����Ҫ�õ����һ���ֽڵ����ݣ�����+20-1,count�պ������İ�����ʵ�������-1
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
// 3.memcmp--�ڴ溯���Ƚ�
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
//	printf("%d\n", ret);//һ���ֽڣ�һ���ֽڵĽ��бȽ�
//	return 0;
//}

//4.memset--��һ���ֽڵ����ݣ��ĳ��Լ���Ҫ������
//int main()
//{
//	char ch[10] = "";
//	memset(ch, '#', 9);//��һ����������Ҫ�ĵ���ʼλ�ã�������Ҫ��ɵ����ݣ�������int������Ҫ�޸ĵ��ֽڴ�С
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
//	my_memset(arr, 1, 40);//��ĳ�01 01 01 01--ʮ������
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

