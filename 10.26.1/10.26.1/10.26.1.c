#include<stdio.h>
//ö�٣�������define�궨��
enum Hero
{
	Guanyu=1,
	Zhangfei=2,
	Liubei=3
};//���涼������ֵ
//���Ը�����ö�ٸ�ֵ��Ҳ���Բ���ֵ
//ȫ������ֵĬ�ϴ�0��ʼ
enum Color { red, green=131, blue }color;
//�Ⱥ궨����������

//�ṹ��

//struct Person //������
//{
//	//�ṹ���Ա
//	char name[20];//�ǵô�ֺ�
//	char sex[4];
//	unsigned char age;
//	int height;
//	float weight;
//};

//typrdef�ĵ�һ�ַ�ʽ
/*typedef struct _Person //������
{
	//�ṹ���Ա
	char name[20];//�ǵô�ֺ�
	char sex[4];
	unsigned char age;
	int height;
	float weight;
}Person;*/
//�ڶ��ַ�ʽ
//typedef struct _person Person;

typedef struct Person //������
{
	//�ṹ���Ա
	char name[20];//�ǵô�ֺ�
	char sex[4];
	unsigned char age;
	int height;
	float weight;
}Person,*PPerson;
//Person,PPerson������������PPerson��Person*

//�ڵ�
//�ṹ��������
//struct Node
//{
//	int data;//������
//	struct Node node;
//};
//ʧ��ԭ���޷�ȷ��Node���͵Ĵ�С
//��ȷ�÷�����ָ��
struct Node
{
	int data;//������
	struct Node* next;//ָ����
};

//����������
struct B;

struct A
{
	int num;
	struct B *b;//����ָ��Ļ�����ΪB�����棬�����������ִ�У��޷�ȷ��B���Ҳ���Ը�������������
};

struct B 
{
	int num;
};

struct Test 
{
	char ch;
	short s;
	int n;
};
struct Test1
{
	char ch;
	int n;
	short s;
};
struct Test2
{
	char str[10];
	char ch;
	int n;
	short s;
};

//��˵��
void say(struct Person p) 
{
	printf("������%s,�Ա�%s,���䣺%d,��ߣ�%d,���أ�%.2f\n", p.name, p.sex, p.age, p.height, p.weight);
}
void psay(struct Person *p)
{
	printf("������%s,�Ա�%s,���䣺%d,��ߣ�%d,���أ�%.2f\n", p->name, p->sex, p->age, p->height, p->weight);
}

int main() 
{
	enum Hero hero = Zhangfei;
	printf("hero=%d\n", hero);

	color = red;
	printf("color=%d\n", color);
	color = blue;
	printf("color=%d\n", color);

	//���岢�ҳ�ʼ��
	struct Person p1 = { "����","��",30,176,90.0f };
	//����ֻ�����ֳ�Ա��ʼ��,����ȫ��Ϊ0
	struct Person p2 = { "����","��",35 };
	//ʹ�ýṹ��
	//һ���ṹ����Ը�ֵ������һ���ṹ��
	p1.age = 31;//name���ܸģ���Ϊname��sex���������������ܸ�ֵ
	//��������
	//p1.name[0]='s';
	//p1.name[1]='e';
	//Ҳ�������ַ������ƺ���
	//strcpy(p1.name,"�ŷ�")
	printf("������%s,�Ա�%s,���䣺%d\n", p1.name, p1.sex, p1.age);
	say(p2);
	//���Զ���ṹ������
	struct Person arr[2] = { p1,p2 };
	say(arr[0]);

	//һ��ָ�����ָ��һ���ṹ��
	PPerson pp = &p1;
	//pPerson->height<=>(*pPerson).age
	psay(pp);
	psay(&p1);

	//��ָ��ʹ�ֵ�����𣺲������ݵĶ���һ�ݿ���
	//��ָ���Ч�ʱȽϸߣ����Ҵ�ָ������޸ģ���ֵ�����βΣ�ʵ�β���ı�

	//����
	struct Node node1, node2;
	node1.data = 45;
	node1.next = &node2;
	
	node1.next->data = 90;

	printf("%d\n", sizeof(struct A));

	printf("%d\n", sizeof(struct Test));//8,����7���ֽڣ�ԭ�򣺱߽���룬���������ڶ���
	//char��shortС��int�ĸ��ֽڣ�char��short���룬char��short��int���룬���Դ���8
	//�ڴ�Ķ��밴�Ų���˳��˳��ͬ���ڴ治ͬ
	printf("%d\n", sizeof(struct Test1));//��12
	//char��int����,char+3��short��int���룬short+2
	//�����ǵ�����ǰ����Ӷ���
	printf("%d\n", sizeof(struct Test2));//20
	//str��char��12���룬��int��16�ֽڶ��룬��short4�ֽڣ���20�ֽڶ���
	////������2�ı�����������Ѱַ���ٶ�

	return 0;
}