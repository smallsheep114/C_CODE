#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("****     1.add       2.del      ****\n");
	printf("****     3.search    4.modify    ***\n");
	printf("****     5.show      6.sort      ***\n");
	printf("****     7.save      0.exit      ***\n");
	printf("************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼�����������dataָ���size(��¼��ǰԪ�ظ���)  capacity��������
	//��ʼ������
	InitContact(&con);//��ַ   ���һ�Ҫ�������е�ֵ
	//���޸�һ�³�ʼ�������ݣ��ϴα�������ݣ���ξͲ�������д��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://��case��ֵ���и���һ�£�ʹ��enumö��,�ɶ�������
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE://��ͨѶ¼��Ϣ�ŵ��ļ�����ȥ
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//����һ�����ܣ�����ͨѶ¼���ͷŶ�̬�ڴ�
			DestoryContact(&con);
			printf("�˳����򲢱���\n");
			break;
		default:
			printf("ѡ�����������ѡ��:\n");
			break;
		}
	} while (input);
	return 0;
}