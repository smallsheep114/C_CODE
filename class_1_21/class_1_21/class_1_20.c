#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d", g_val);
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define����ĳ����ͺ�

//1.#define����ı�ʶ������  ��---����
//# define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}

//��

//#define MAX(X,Y)(X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//ָ��   ������ͨ����ַ��λ��   
//���������β�����ַ�� һ���ڴ浥Ԫ��һ���ֽ�  32 64
//�������ǵ�64λΪ�����ͻ���2^64������������ƣ�����Ӧ����ô����ռ䣬�����ƺš�������Щ�������


//����һ�δ���һ��Ҫ�࿴ѽ  �����ڴ�
//ָ���Ǹ���������������ŵ�ַ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//p��������int*����a�ĵ�ַ�浽��p���� &ȡ��ַ������
//	printf("a����Ŀռ��ַ��%p\n", &a);//%p��ʾ��ӡ����һ����ַ(��ӡ�����ĵ�ַ��ʮ�����Ƶ�ת���ɶ����Ƽ���)
//	printf("a����Ŀռ��ַ��%p\n", p);
//	*p = 20;//*--�����ò�����   ͨ�������ַ�ҵ�a����a��ֵ����20
//	return 0;
//}
////������00000051E77EF6F4            ת���ɶ����ƾ������ġ����ƺš�101 0001 1110 0111 0111 1110 1111 0110 1111 0100Ҳ����ָ����
//

//�ٸ�����
//int main()
//{
//	char ch = 'w';
//	printf("ch�ĵ�ַ��%p\n", &ch);
//	char* p = &ch;
//	*p = 'a';
//	printf("ch = %c\n", ch);
//	printf("%d", sizeof(p));
//	return 0;
//}

//���ۣ�ָ���С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�


//switch����  define���ǹؼ��� ��һ������
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p��ָ�������������int*    ��ַ�����ᷢ���仯  *��ζ�Ÿ�������p��ָ�����
//	printf("%p\n", p);
//	*p = 20;//*-�����ò�����
//	printf("a=%d", a);
//	return 0;
//}

//��ӡdouble���ͣ���%lf
//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 5.55;
//	printf("a = %lf\n", a);
//	printf("a = %.1lf\n", a);//�뱣��XλС��������%������.X����
//	printf("a = %.1lf\n", *pd);
//	printf("%d", sizeof(*pd));//32λ4���ֽڣ�64λ8���ֽ�
//	return 0;
//}



//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




//������������࿴��    
//�ṹ��  ��ʾһ���ˣ�   �� �� ���� ----���Ӷ��� --- ���ʱ�������ýṹ��
//��--- �Ա� ���� ��� ���֤     �� --- ����
//�ṹ�� --- �����Լ����������һ������
//����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};//�ֺŲ���ȱ�٣�������������������͵�

//int main()
//{
//	//���ýṹ������-����һ�������͵ı���
//	struct Book b1 = {"c���Գ������",55};//�������ַ�����˫����
//	struct Book* pb = &b1;
//	/*printf("������%s\n", (*pb).name);
//	printf("�۸�%dԪ\n", (*pb).price);*/
//	printf("������%s\n", pb->name);
//	printf("�۸�%dԪ\n", pb->price);
//	//printf("������%s\n", b1.name);//��ӡ�ַ�����%s
//	//printf("�۸�%dԪ\n", b1.price);
//	//b1.price = 15;
//	//printf("��ִ�˦����������ֻ��Ҫ%d", b1.price);
//	return 0;
// }

//int main()
//{
//	struct Book b1 = {"c���Գ������",55};//name���Ǳ�������������,��һ����ַ
//	strcpy(b1.name, "C++");//strcpy--string copy ---�ַ�������
//	//Ҫ�����ݿ�����b1.name  ��Ҫ���������ݣ�C++
//	printf("���ʱ������Ϊ��%s\n",b1.name);
//	return 0;
//}



