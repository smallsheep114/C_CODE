#define  _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void LoadContact(struct Contact* ps)
{
	//1.打开一个文件
	FILE* pfread = fopen("Contact.dat", "rb");//既然你是用二进制的形式写，咱们也就用二进制的形式读
	if (pfread == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//2.读入，一个个的读
	int i = 0;
	for (i = 0; i < ps->capacity; i++)
	{
		int len = fread(&ps->data[i], sizeof(struct PeoInfo), 1, pfread);
		if (len == 0)
		{
			ps->size = i;//这一步没加的话，又得出问题
			break;
		}
	}
	//3.关闭文件
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

	//用一个函数来实现
	LoadContact(ps);
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));//类型一致呀
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//容量变大
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
	
}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);//检查容量是否足够

	printf("请输入姓名:\n");
	scanf("%s", &ps->data[ps->size].name);
	printf("请输入年龄:\n");
	scanf("%d", &ps->data[ps->size].age);
	printf("请输入性别:\n");
	scanf("%s", &ps->data[ps->size].sex);
	printf("请输入电话:\n");
	scanf("%s", &ps->data[ps->size].tele);
	printf("请输入地址:\n");
	scanf("%s", &ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");


	/*if (ps->size == )
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名:\n");
		scanf("%s", &ps->data[ps->size].name);
		printf("请输入年龄:\n");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:\n");
		scanf("%s", &ps->data[ps->size].sex);
		printf("请输入电话:\n");
		scanf("%s", &ps->data[ps->size].tele);
		printf("请输入地址:\n");
		scanf("%s", &ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}*/
}

void ShowContact(const struct Contact* ps)//不能修改，用const
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
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


//由于查找姓名函数出现了三次--删除，查找，修改，所以我们用函数来实现
int FindName_num(struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))//不要再后面加分号呀，求你了哥   strcmp()函数，字符串相等返回0
			return i;
	}
	return -1;
}

void DelContact(struct Contact* ps)
{//1.输入姓名
	char name[MAX_NAME] = "";
	printf("请输入要输出用户的姓名\n");
	scanf("%s", name);
	//查找用户的下标i
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("要删除的用户不存在\n");
	}
	else
	{//删除用户数据，后面的用户数据向前覆盖即可
		int j = 0;
		for (j = pos; j < ps->size-1; j++)//既然你找到下标i了，那么j就是从下标i开始的
		{
			ps->data[j] = ps->data[j + 1];//这是我没想到的   结构体数组中因为元素类型相同，可以直接通过=，前面的元素覆盖（被后面的元素）
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(struct Contact* ps)
{
	//1.查找下标
	char name[MAX_NAME] = "";
	printf("请输入要查找的用户姓名\n");
	scanf("%s", &name);
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("要查找的用户不存在\n");
	}
	else
	{//找到下标之后，打印那个下标的姓名，年龄，性别，电话，地址   i就是下标
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("查找成功\n");
	}
}

void ModifyContact(struct Contact* ps)
{
	//1.查找下标
	char name[MAX_NAME] = "";
	printf("请输入要查找的用户姓名\n");
	scanf("%s", &name);
	int pos = FindName_num(ps, name);
	if (pos == -1)
	{
		printf("要查找的用户不存在\n");
	}
	else
	{//2.找到下标后，修改下标的姓名，年龄，性别，电话，地址
		printf("请输入要修改的全部用户信息\n");
		printf("请输入姓名:\n");
		scanf("%s", &ps->data[pos].name);
		printf("请输入年龄:\n");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别:\n");
		scanf("%s", &ps->data[pos].sex);
		printf("请输入电话:\n");
		scanf("%s", &ps->data[pos].tele);
		printf("请输入地址:\n");
		scanf("%s", &ps->data[pos].addr);

		printf("修改成功\n");
	}
}
int com_int_by_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->data->age - ((struct Contact*)e2)->data->age;
}

int com_int_by_name(const void* e1, const void* e2)
{
	return strcmp(  ((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name  );//两个字符转相互比较，不可以直接比较，要使用strcmp
}




void SortContact(struct Contact* ps)
{
	/*qsort(ps->data, ps->size, sizeof(ps->data[0]), com_int_by_age);
	printf("按年龄排序完之后的通讯录如图所示\n");*/
	//试试可不可以实现按姓名进行排序
	//暂未实现
	qsort(ps->data, ps->size, sizeof(ps->data[0]), com_int_by_name);//但是这种咱们就不可以打名字用中文了
	printf("按姓名排序完之后的通讯录如图所示\n");
	ShowContact(ps);
}

void SaveContact(struct Contact* ps)
{
	//1.打开文件，二进制的形式写
	FILE* pfwrite = fopen("Contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;//可以不给返回值的
	}
	//2.写 一个个的写
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&ps->data[i], sizeof(struct PeoInfo), 1, pfwrite);
	}

	//3.关闭文件
	fclose(pfwrite);
	pfwrite = NULL;
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}