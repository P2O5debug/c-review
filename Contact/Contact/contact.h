#include<stdio.h>
#include<string.h>
#define MAX 1000
//1.��ź��ѵ���Ϣ
struct PeoInfo
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char tele[12];//�绰
	char addr[30];//סַ
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);