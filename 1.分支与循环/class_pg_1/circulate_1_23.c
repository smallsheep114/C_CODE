#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 1;
//	while (num<=10)
//	{
//		if (num == 5)
//			break;//��break����ֱ��ֹͣ��ѭ�����ټ���(������ֹѭ����
//		printf("%d\n",num);
//		num++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num <= 10)
//	{
//		num++;
//		if (num == 5)
//			continue;//��������ѭ������Ĵ��룬�ص��жϲ���
//
//		printf("%d\n", num);//
//		
//	}
//
//	return 0;
//}


//�ܽ᣺
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻���ٴ�ִ��
//����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
//�����ӡ���е�ĳ��ֵ������continue

//��break��������ֹ����ѭ����

//getchar()  ����һ���ַ�   putchar  ���һ���ַ�����printf���㣩
//int main()
//{
//	char ch = 'w';
//	printf("%c\n", ch);
//	return 0;
//}

//��һ��д��
//��ʱ�������û�б����������е�ʱ�򣬱�һ���޷������ú��������ǿ�������������������Ŀ
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("    %c", ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//��������ctrl + z
//	//EOF---end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	
//	//int ch = 0;
//	////EOF---end of file---�ļ�������־
//	////ʵ�ʼ�ֵ:
//	//while ((ch = getchar())!=EOF)
//	//{
//	//	putchar(ch);
//	//}
//	
//
//	return 0;
//}


//�����Ƕδ���࿴��
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:->\n");//123456\n(�ո�     123456 ABCD
//	scanf("%s", password);
//	//���ʱ�򻺳�������һ��\n,Ҫ���    ���ʱ�򻺳������пո�+ABCD\n��Ҫ�ö�getchar()�����ʱ������Ҫ�õ�ѭ��
//	//getchar();
//	while ((ch = getchar()) != '\n');
//	{
//		;//����Ҫѭ����������ݣ����ǿ��Բ���
//	}
//	printf("��ȷ�ϣ�y/n��\n");
//	
//	ret = getchar();
//	if (ret == 'y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	//printf("%d", '\n');
//	return 0;
//}
////scanf  getchar ���뺯��---���뻺����---:123456\n(�س�enter)  
////123456��scanf�����ˣ�\n��getchar������  ����������Ҫ��ջ���������\n��ȥ



//�ֱ��Լ�����һ��bug��putchar��getcharŪ����
// ���б��0��oŪ����
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//forѭ�� for(exp1;exp2;exp3)  exp1:��ʼ������ exp2:�����жϲ���  exp3:��������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//forѭ����ִ������  1.��exp1 i=1 2.���ж�exp2�Ƿ�Ϊ�� 3.���Ϊ���ٽ���ѭ���� 4.����ִ��exp3i++
//�������ж�exp2�Ƿ�Ϊ�� �Դ����ƣ�ֱ���ж�����Ϊ�٣�ѭ������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//����ʾ��1
//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)//��ѭ�����ڸı���iֵ
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//����2   ����for����ѭ�����Ʊ������á�ǰ�պ����䡱д��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//���������i<10��д����i<=9Ҫ��
//	{
//		printf("%d ", arr[i]);//i���±꣬�±���㿪ʼ
//	}
//	return 0;
//}

//for�ı���    1.for(;;)
//1.forѭ���ĳ�ʼ�����������ж� ������ʡ��  
//���ǣ�forѭ���� �жϲ��������ʡ�� �����ж��������ǣ���Ϊ��
//2.������Ƿǳ���������Ҫ���ʡ��
//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}

//��������
//forѭ����Ƕ
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//i=0ʱ��j��ѭ��ʹ��j��Ϊ10.֮��i�ľŴ�ѭ���Ͳ���ӡ�Ǻǣ���ΪjһֱΪ10
//		{
//			printf("hehe\n");
//		}
//	}
//	//������Ϊ10��hehe
//	return 0;
//}


//����2---����ѭ�������ŵ���һ��for()����
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//ע��Ŷ��for���������������ֺ�
//		//�ж����x<2��y<5����ͬʱ���㣬��������ֻ��������hehe
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//������δ���ѭ�����ٴ���
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//0Ϊ��,k=0,ѭ�����  �����ֵk���㣬��δ��������ѭ��
// ��k=1������
//	{
//		k++;
//	}
//	return 0;
//}
////ѭ�����


//do-whileѭ��
//do   ѭ����䣻  while(���ʽ)��
//�Ƚ���һ��ѭ�������жϱ��ʽ��٣�ֱ��Ϊ�٣�ֹͣѭ��
//int main()
//{
//	int num = 1;
//	do
//	{
//		if (num == 5)
//			continue;//num++ûִ�У����Խ�������ѭ��
//		printf("%d\n", num);
//		num++;
//	}
//	while (num <= 10);
//	return 0;
//}
////do-whileѭ������ִ��һ��ѭ��
//
