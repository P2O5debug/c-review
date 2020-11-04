//����������
#include"game.h"
void menu() 
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}


//�㷨ʵ��
void game() 
{
	int ret;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		//����״̬�����Ӯ������Ӯ��ƽ�֣�����
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	switch (ret)
	{
	case 'x':
		printf("���Ӯ");break;
	case 'o':
		printf("����Ӯ");break;
	case 3:
		printf("ƽ��");break;
	}
}

void test() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main() 
{
	test();
	return 0;
}