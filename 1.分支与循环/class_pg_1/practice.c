#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//1.����n�Ľײ�
//����scanf �� printf ��������Ҫ���˼�ͷ�ļ�
//˼�����㷨����Ҫ��1-n�������������ǵ���ѭ������Ҫ����Щ��ȫ���˵�һ��������ȥ
//myself
//int main()
//{
//	int i = 1;
//	int re = 1;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		re *= i;//  ��re = re*i;һ��
//	}
//	printf("n! = %d", re);
//	return 0;
//}
//teacher��һ����


//2.����1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
//�����Ƕδ�����ˣ���������9�������15
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n;
//	int sum=0 ;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//�����޸ĺ����ȥ��
//		for (i=1; i <= n; i++)
//		{
//			ret *= i;//����ԭ��ret�������⣬������ret*1*2*3ʱ�������2*1*2*3 forѭ������retû�лص�1ֵ
//		}
//		sum = sum + ret;
//	}
//	printf("result=%d\n", sum);
//	return 0;
//}

//�Ż���Ĵ���--���
//int main()
//{
//	int ret = 1;
//	int n;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//����ɾȥ��i���Ǹ�ѭ��  �����ǿ��԰Ѽ���n�Ľײ�ͽ�������ӷ���һ��ѭ����
//		sum = sum + ret;
//	}
//	printf("result=%d\n", sum);
//	return 0;
//}


//3.��һ�����������в��Ҿ����ĳ������n
//��δ���Ƚφ��£�Ч�ʵ�
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
//			printf("i find it,�±���%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//�Ż�֮��Ĵ���
//�۰�����㷨�����ֲ����㷨��
//���ֲ��ҷ����������log2 n��ȡ������
//������ 2^32�������У���һ�����������ַ���ֻ��Ҫ����32�Σ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����Ҫ���ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)//ֻ��left<right˵�����м���Ԫ�ؿ��Բ���
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
//			printf("i find it �±���%d", mid);
//			break;//������Ҫ���break����ֹѭ������Ȼ��һֱ��ӡ
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//4.��д���룬��ʾ����ַ��������ƶ������м���
//ע���ַ���"abc"---{'a','b','c',\0}   ��һ���ַ�
//��ϸ�����ɣ���������Sleep();��strlen();��system("cls");
//���Ҹ��Զ��и��Ե�ͷ�ļ�#include<windows.h> #include<string.h> #include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//�ַ�����˫����
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);//��λ�Ǻ��룬������1000
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//strlen() �� sizeof()�����Լ����ַ����ĳ���
//����strlen���Ὣ������ʶ����\n������
//int main()
//{
//	char arr[] = "####################";
//	printf("strlen(arr)=%d\n",strlen(arr));//20
//	printf("sizeof(arr)=%d", sizeof(arr));//21
//	return 0;
//}
//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ���
//ֻ���������������룬���������ȷ����ʾ��½�ɹ��������������������˳�����
//�ҵĴ���---��bug



//==���������Ƚ������ַ����Ƿ����,Ӧ��ʹ��һ���⺯��-strcmp
//��strcmp(password,"123456")==0 ---�������ַ�������strcmp---ǰ��Ĵ� ��>0�����֣��Դ�����
//������δ����������õģ��Լ�д�Ĵ�����bug��Ŀǰ����֪��ν��
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//�Ȱ�password����������
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);//������123456
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������\n");
//
//		}
//		if (i == 3)
//		{
//			printf("�������붼���󣬼����Ƴ�����\n");
//		}
//	}
//	return 0;
//}