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
struct Person //������
{
	//�ṹ���Ա
	char name[20];//�ǵô�ֺ�
	char sex[4];
	unsigned char age;
	int height;
	float weight;
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
	struct Person* pPerson = &p1;
	//pPerson->height<=>(*pPerson).age
	psay(pPerson);

	return 0;
}