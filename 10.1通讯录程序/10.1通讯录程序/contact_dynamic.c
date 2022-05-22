#define  _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void LoadContact(struct Contact* ps)
{
	//1.��һ���ļ�
	FILE* pfread = fopen("Contact.dat", "rb");//��Ȼ�����ö����Ƶ���ʽд������Ҳ���ö����Ƶ���ʽ��
	if (pfread == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//2.���룬һ�����Ķ�
	int i = 0;
	for (i = 0; i < ps->capacity; i++)
	{
		int len = fread(&ps->data[i], sizeof(struct PeoInfo), 1, pfread);
		if (len == 0)
		{
			ps->size = i;//��һ��û�ӵĻ����ֵó�����
			break;
		}
	}
	//3.�ر��ļ�
	fclose(pfread);
	pfread = NULL;
}
//

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps == NULL)
	{
		perror("allovates memory blocks:");
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;

	//��һ��������ʵ��
	LoadContact(ps);
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));//����һ��ѽ
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//�������
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
	
}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);//��������Ƿ��㹻

	printf("����������:\n");
	scanf("%s", &ps->data[ps->size].name);
	printf("����������:\n");
	scanf("%d", &ps->data[ps->size].age);
	printf("�������Ա�:\n");
	scanf("%s", &ps->data[ps->size].sex);
	printf("������绰:\n");
	scanf("%s", &ps->data[ps->size].tele);
	printf("�������ַ:\n");
	scanf("%s", &ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");


	/*if (ps->size == )
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:\n");
		scanf("%s", &ps->data[ps->size].name);
		printf("����������:\n");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:\n");
		scanf("%s", &ps->data[ps->size].sex);
		printf("������绰:\n");
		scanf("%s", &ps->data[ps->size].tele);
		printf("�������ַ:\n");
		scanf("%s", &ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}

void ShowContact(const struct Contact* ps)//�����޸ģ���const
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}


//���ڲ���������������������--ɾ�������ң��޸ģ����������ú�����ʵ��
int FindName_num(struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))//��Ҫ�ٺ���ӷֺ�ѽ�������˸�   strcmp()�������ַ�����ȷ���0
			return i;
	}
	return -1;
}

void DelContact(struct Contact* ps)
{//1.��������
	char name[MAX_NAME] = "";
	printf("������Ҫ����û�������\n");
	scanf("%s", name);
	//�����û����±�i
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����û�������\n");
	}
	else
	{//ɾ���û����ݣ�������û�������ǰ���Ǽ���
		int j = 0;
		for (j = pos; j < ps->size-1; j++)//��Ȼ���ҵ��±�i�ˣ���ôj���Ǵ��±�i��ʼ��
		{
			ps->data[j] = ps->data[j + 1];//������û�뵽��   �ṹ����������ΪԪ��������ͬ������ֱ��ͨ��=��ǰ���Ԫ�ظ��ǣ��������Ԫ�أ�
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(struct Contact* ps)
{
	//1.�����±�
	char name[MAX_NAME] = "";
	printf("������Ҫ���ҵ��û�����\n");
	scanf("%s", &name);
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��û�������\n");
	}
	else
	{//�ҵ��±�֮�󣬴�ӡ�Ǹ��±�����������䣬�Ա𣬵绰����ַ   i�����±�
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("���ҳɹ�\n");
	}
}

void ModifyContact(struct Contact* ps)
{
	//1.�����±�
	char name[MAX_NAME] = "";
	printf("������Ҫ���ҵ��û�����\n");
	scanf("%s", &name);
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��û�������\n");
	}
	else
	{//2.�ҵ��±���޸��±�����������䣬�Ա𣬵绰����ַ
		printf("������Ҫ�޸ĵ�ȫ���û���Ϣ\n");
		printf("����������:\n");
		scanf("%s", &ps->data[pos].name);
		printf("����������:\n");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:\n");
		scanf("%s", &ps->data[pos].sex);
		printf("������绰:\n");
		scanf("%s", &ps->data[pos].tele);
		printf("�������ַ:\n");
		scanf("%s", &ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}
int com_int_by_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->data->age - ((struct Contact*)e2)->data->age;
}

int com_int_by_name(const void* e1, const void* e2)
{
	return strcmp(  ((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name  );//�����ַ�ת�໥�Ƚϣ�������ֱ�ӱȽϣ�Ҫʹ��strcmp
}




void SortContact(struct Contact* ps)
{
	/*qsort(ps->data, ps->size, sizeof(ps->data[0]), com_int_by_age);
	printf("������������֮���ͨѶ¼��ͼ��ʾ\n");*/
	//���Կɲ�����ʵ�ְ�������������
	//��δʵ��
	qsort(ps->data, ps->size, sizeof(ps->data[0]), com_int_by_name);//�����������ǾͲ����Դ�������������
	printf("������������֮���ͨѶ¼��ͼ��ʾ\n");
	ShowContact(ps);
}

void SaveContact(struct Contact* ps)
{
	//1.���ļ��������Ƶ���ʽд
	FILE* pfwrite = fopen("Contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;//���Բ�������ֵ��
	}
	//2.д һ������д
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&ps->data[i], sizeof(struct PeoInfo), 1, pfwrite);
	}

	//3.�ر��ļ�
	fclose(pfwrite);
	pfwrite = NULL;
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}