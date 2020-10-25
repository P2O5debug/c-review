#include<stdio.h>
#include<string.h>

unsigned int MyStrlen(const char* str)
{
	unsigned int n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return n;
}
//����ĳ���ַ�
int MyStrchr(const char* str, char ch)
{
	int n = 1;
	while (*str!= '\0') 
	{
		if (*str == ch)
			return n;
		str++;
		n++;
	}
	return -1;
}

int main() 
{
	char* str = "hello";
	char sz[20] = { 'h','e','l','l','o' ,1,2,3 };

	printf("����=%d\n", strlen(str));
	printf("����=%d\n", strlen(sz));

	printf("����=%d\n", MyStrlen(sz));

	//const����C������������޸ģ�c++����
	const int n = 10;
	//int* p = &n;
	//*p = 45;
	printf("n=%d\n", n);
	//�е�Υ������

	//���Ͻ���д��
	//ָ�����γ�����ָ��
	const int* p = &n;

	//ָ������ǳ���
	int m = 20;
	int* const p2 = &m;
	*p2 = 45;
	printf("m=%d\n", m);

	//�ַ�������
	//strcpy(sz,str);
	//�������Ŀռ�һ��Ҫ�㹻����������ᵼ�º�������ݱ��޸�
	//�Ḵ���ַ�����ֹ��
	//strcpy(sz, str, 8);

	//�ַ�������
	strcat(sz, str);//������������Ϊstr�ǳ���
	
	//�ַ����Ƚ�
	//������Ƚ�
	char* str1 = "HelloWorld";
	char* str2 = "H123456789";
	if (strcmp(str1, str2) == 0)
	{
		printf("str1��str2���\n");
	}
	else 
	{
		printf("str1��str2�����\n");
	}

	//�ַ�����
	char* p3 = strchr(str1, 'o');
	printf("%s\n", p3);

	int pos = MyStrchr(str1, 'H');
	printf("pos=%d\n", pos);

	//�ַ����������ַ���
	char* p4 = strstr(str1, "lo");
	printf("%s\n", p4);

	return 0;
}