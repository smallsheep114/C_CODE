#define  _CRT_SECURE_NO_WARNINGS 1

//c���� �ṹ�� �ĳ����������
//1.˳��ṹ 2.ѡ��ṹ 3.ѭ���ṹ �������У�

//1.��֧���  if  switch  exp1?exp2:exp3;
//���֧   if(exp1) ���1�� else if(exp2) ���2�� else ���3��
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("��ϲ�㻹δ��������ϵͳ");
//	else
//		printf("��������������");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//	    if (age >= 18 && age <= 28)
//		printf("����\n");
//		else if (age >= 28 && age <= 50)
//		printf("׳��\n");
//		else if (age >= 50 && age <= 90)
//		printf("����\n");
//		else
//		printf("���");
//	}
//		//if (18 <= age <= 28)//��ȫ����,����������д��Ҫ��&&
//		//printf("����\n");
//	return 0;
//}
//�������ַ����ȼ�

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}//Ҫִ�ж�����䣬Ҫ�ô����
//	else if (age >= 18 && age <= 28)
//		printf("����\n");
//	else if (age >= 28 && age <= 50)
//		printf("׳��\n");
//	else if (age >= 50 && age <= 90)
//		printf("����\n");
//	else
//		printf("���");
//	//if (18 <= age <= 28)//��ȫ����,����������д��Ҫ��&&
//	//printf("����\n");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("hehe\n");
//        else
//			printf("haha\n");//else�Ǿͽ�Զ�⣬�����������ifƥ�䣨�Ƚ���Ҫ��
//	return 0;//if-else ��� ��һ�����
//}
//Ҫ�����������δ���
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//�ж���ȣ��õĴ����� ����������ߣ����������ұߣ������׳���
//int main()
//{
//	int num = 4;
//	if (num ==5)//()������Ǳ��ʽ��Ҫ�ж��������  ����=�Ǹ��ƣ�==�����
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("�����������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d\n", num);
//		num+=2;
//	}
//		
//	return 0;
//}


//��ʦ��
//int main()
//{
//	int i;
//	while (i <= 100)
//	{
//		if (i%2 ==1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//switch���---����ʵ�ֶ��֧��  switch��case

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("Monday");
//	else if (2 == day)
//		printf("Tuesday");
//	else if (3 == day)
//		printf("Wednesday");
//	else if (4 == day)
//		printf("Thursday");
//	else if (5 == day)
//		printf("Friday");
//	else if (6 == day)
//		printf("Saturday");
//	else 
//		printf("Sunday"); 
//	return 0;
//}

//�������δ�������Ľ��һ��
//�����ַ���һ���������˵�bug��ע�����Ǽ��ˣ�����Ǹ�bug��ʾ��������ͷ��
//int main()
//{
//	int day;//switch�����ֻ������ʽ���ʽ�����Բ�����char ���� double
//	scanf("%d", &day);
//	switch (day)//����day�������Ľ�ȥ case�������,����break��������ֹͣ
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:
//		printf("tuesday\n");
//		break;
//	case 3:
//		printf("wednesday\n");
//		break;
//	case 4:
//		printf("thursday\n");
//		break;
//	case 5:
//		printf("friday\n");
//		break;
//	case 6:
//		printf("saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//		break;
//	}
//
//		return 0;
//}

//switch()��������Ҫ�����α��ʽ  case���������γ������ʽ
//����������д case�����break��һ����Ҫ
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//		//��̺�ϰ�ߣ�����break
//	default ://case����ƥ�䣬��ִ��default������
//		printf("�������");
//		break;//case��defaultû��˳��֮˵��һ���default���ں���
//	}
//	return 0;
//}


//switch�������Ҫ������û��break�����û�������Ǽ���ִ�е�
//int main()
//{
//	int n = 1;
//	int m = 2;//û��break�ͼ���ִ��case
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++;
//			n++;
//			break;//���break��Ҫ��������case������Ǹ�switch
//		}
//	case 4:m++;
//		break;//���break��ζ������Ҫ���� ���� switch�����
//	default :
//		break;
//
//	}
//	printf("m = %d   n = %d", m, n);//5  3 
//	return 0;
//}

//��������  ��֧�����  1.if-else if-else���   2.switch-case��䣨Ҫע����û��caseŶ��

//ѭ����� while    for    do-while

//int main()
//{
//	while (1)
//	{
//		
//		printf("0  ");
//		printf("1  ");
//		system("color 2");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//system()---ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������������������ȡ���ػ�\n������");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("��ԣ��ҵ������������Ѿ�ȡ���ػ�\n");
//	}
//	else
//	{
//		printf("�����Ŷ������˭����\n");
//		goto again;
//	}
//	return 0;
//}
