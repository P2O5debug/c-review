#include"contact.h"

void menu()
{
	printf("*********************************\n");
	printf("*** 1.add               2.del ***\n");
	printf("*** 3.search            4.modify*\n");
	printf("*** 0.exit                    ***\n");
	printf("*********************************\n");
}

void main() 
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//���һǧ���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}