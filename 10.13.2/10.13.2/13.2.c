#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	while (1)
	{
		//������������һ����ĸ������Ǵ�д��ת��ΪСд�������Сд��ת��Ϊ��д��
		char ch;
		printf("��������һ����ĸ��\n");
		scanf("%c", &ch);
		setbuf(stdin, NULL);//��ջ�����,(�س���)
		//�ж���ĸ�Ƿ�Ϊ��Сд
		//���Ϊ��д
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("����СдΪ%c\n", ch + 32);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			printf("���Ĵ�дΪ%c\n", ch - 32);
		}
		else
		{
			printf("�������\n");
		}
	}
	
	return 0;
}