#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


//���һ��������ʵ���ַ�������
// char* string(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;//����right��sz-1����Ϊ�±��Ǵ�0��ʼ��
//	char* start = &arr[left];//�������ַ����start�����������������
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
//	gets(arr);//�����ֲ�scanf��ȱ��
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
//		ret = ret * 10 + a;//����ʮ���ټ�a����
//		sum = sum + ret;
//	}
//	printf("��λ��%d\n", sum);
//	return 0;
//}

//�����������ˮ�ɻ�����⣩
//��ӡ1-10000֮���������
//int main()
//{
//	int i = 0;//a---��b---ǧλ��c---��λ��d---ʮλ��d---��λ
//	int a, b, c;
//	for (i = 100; i <1000; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		int ret = pow(a, 3) + pow(b, 3) + pow(c, 3);//ˮ�ɻ����������η�
//		if (i ==ret )//if�����ӷֺ�ѽ����ȻҪ�궿��
//		{
//			printf("%d ",i);
//		}
//	}
//	
//	return 0;
//}

//��ʦд���ж�����������1-100000��������
//    /10%10���ǿ���ʹ��ѭ����ʵ��
int main()
{
	int i = 0;
	//����i��λ����������λ��--���Ǵη�
	for (i = 1; i <= 100000; i++)
	{
		int n = 1;//λ��
		int tmp = i;//����һ����ʱ������ȡ��i���������ǻ�ı�i��ֵ��ѭ������i��
		int sum = 0;
		while (tmp/=10)//���tmp/10��Ϊ0����n+1
		{
			n++;
		}
		tmp = i;//��Ϊǰ��ʹ��ѭ��ʱ�����Ǹı���tmp��ֵ����������Ҫ���½��и�ֵ
		while (tmp)
		{
			sum += pow(tmp % 10, n);//��λ��n�η�
			tmp /= 10;//���ż������λ,Ҫд��/=����Ȼtmp��ֵһֱû��
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//��ӡ����
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
//	//�����ν��д�ӡ����Ϊһ�ξʹ�ӡ��Ļ�������ֻ����������
//	int i = 0;
//	int line = 0;//
//	scanf("%d", &line);
//	//�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i*2+1; j++)//��j<i*2+1,��д��i<i*2+1�ˣ�ͷ����
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
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
//	int total = 0;//�ܹ����˶���ƿ��ˮ
//	int empty = 0;//��ƿ������
//	scanf("%d", &money);
//	//����������ѧ��ģ����ʽ��
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;//һƿˮ1��Ǯ��һ����ƿ0.5��������ܻ�ʣ��һ����ƿ 20*2-1==39//��ֵת��
//	////�����������ˮ
//	//total = money;
//	//empty = total;
//	////������������ˮ
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
//		//����߿�ʼ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))//�����������±��һ������ż��ͣ����
//		{//left<right�������Ҫ���ϣ���Ϊ�����������ݶ��������𣬾ͻ�Խ��
//			left++;
//		}
//		//���ұ߿�ʼ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			//������Ͳ���Ҫ�ټ�����left++,left-- �ˣ���Ϊarr[left]��arr[right]���ݽ�����
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
//	c = a + b;//���������a+bʱ�������������������300 = 255 + 1 + 44 = 44   �޷���char��255+1=0
//	printf("%d %d\n", a + b, c);//�����printf�������a+bʱ�����ڴ�ӡ����%d������Ҫ������������
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);//52  С�˴�����0x34
//	//��˴�������0x00
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };//ע������һ��char���͵�����,-128 - 127//һ����256����
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//0����������256 - 1 = 255
//	}
//	printf("%d\n", strlen(a));
//}


//��ӡ������ǣ����������Ȳ�����ǰ��Ŀո�
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
//			if (i >= 2 && j > 0)//ע�������±��Ǵ�0��ʼ��
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)//<=i���ܴ�ӡ������Ҫ�Ķ���
//
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//������--�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�֣����ֱ�Ϊ4�����ɷ���һ��
//A��������  B����c  C����D  D��C�ں�˵��������˵���滰��һ����˵�˼ٻ�
// ͦ����˼��һ��������
// 
//���ʽ�Ľ����һ���߼�ֵ��1--�棬0--�٣�����������ʽ��ֵ��������3�������ɹ�
//���跨����������һ�������ɷ����ٿ��ĸ���˵�Ļ������Ǽ�
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//Ҫ����Щ���ʽ��ֵ��������
//		{
//			printf("����ֻ��һ��\n���־���%c\n", killer);
//		}
//	}
//	return 0;
//}
//�ҹ��������ῼ
//��������        1.�������⣺36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���еĵ��������������ٱ�������
//2.�������⣬��һ���㣬���ʲ����ȣ�����ÿһ��ȼ����ǡ����һ��Сʱ�����������㣬����ȷ��15���ӵ�ʱ���
//1.���Ƚ���һ�������˶����ţ���ô��һ����������˻���30����
//2.�ڵ�һ�������˵��ŵ�ͬʱ�����ŵڶ������һ��
//3.��ô30���ӹ�ȥ�ˣ����ڶ��������һ��Ҳ���ţ���ô�ڶ�����֮��ͻ�15����������

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
//							if(a*b*c*d*e==120)//��Ϊa,b,c,d,e����ֱ���1��2��3��4��5������������˾��Ե���120
//							printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//						}
//					}
//	return 0;
//}

//���ÿռ��ʱ������Ҫ�ͷŵ��ռ�
//��ʹ��free�ͷŵ�һ��ָ�����ݺ��൱�ڰ����ռ仹��ȥ��
//����ָ�뻹��ָ��֮ǰ�����ݵģ���������Ҫ�ֶ������Ϊ��ָ��

//         int(*  (*arr) [10])(int*)

//�ص�������һ��ͨ������ָ����õĺ���--���õ��Ǹ��������ǻص�����
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);//&a+1��һ�������ַ����������Ҫ����һ��ǿ������ת��
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	int arr[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));//*(arr+1)�õ��ڶ���������
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//�����⣬��ת�ַ���


//1.����������--�������ŵ�
//void left_move(char* arr, int k)
//{
//	int sz = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		//ʵ������һ���ַ���
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + 1 + j);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//}

//2.������ת��
//ab  cdef   //��������Ҫ����2��   1.��ǰ�������ַ�����һ��   �����һȺ�ַ�����һ�ε�
//ba  fedc    //2.��������һ��  ��
//cdfeab
//Ҳ����˵������ֻҪ������ַ������������Ϳ���ʵ������㷨��

//#include<assert.h>
//void Reverse(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	//ʵ�ֽ���
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
//	left_move(arr, num%sz);//����8�Σ���ʵ�����൱�ڣ�������2��
//	printf("%s\n", arr);
//	return 0;
//}

//�����⣬�ж�һ���ַ����Ƿ�����һ���ַ�����ת����
// 1.ÿһ�ε���ת���������һ�Σ����Ƿ����һ���ַ�����ͬ
//int Is_left_move(char* s1, char* s2)
//{
//	int sz = strlen(s1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		left_move(s1, 1);//��s1����һ��
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//
// 2.abcdefabcdef---�ں����ټ�һ��abcdef����Ͱ��������е���������
//cdefab
//���Է������������ú���д���룬��ʵ���˸��ھۣ�����ϣ��ǳ������޸ģ����Һ����Ĺ��ܶ��Ƚϵ�һ

//int Is_left_move(char* s1,char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//��s1׷��һ��s1��ʹ�ú���strncat
//	strncat(s1,s1,6);
//	//�ж�s2ʱ��Ϊs1���ִ���ʹ�ú���strstr
//	char* ret= strstr(s1, s2);
//	if (ret != NULL)
//		return 1;
//	else
//		return 0;
//}//�������������覴����ڣ�s2�ַ�����s1�ַ������Ȳ�ͬʱ�����Ҳ�п�����YES
//
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "cdefab";
//	int ret = Is_left_move(s1, s2);//ͨ��������s1��s2����һ���Ƚ�
//	if (ret == 1)
//		printf("YSE\n");
//	else
//		printf("NO\n");
//	return 0;
//}
