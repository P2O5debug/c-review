#include<stdio.h>
#include<string.h>
int main()
{
	unsigned char a = 200;//һ���ֽڣ��޷��ţ���Χ��0~255
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;//��������
	//a+b=100101100
	//c��λ��00101100
	printf("%d %d\n", a + b, c);//300,44
	
	unsigned int aa = 0x1234;
	unsigned char bb = *(unsigned char*)&aa;
	//С�ˣ�34 12 00 00��>34
	//��ˣ�00 00 12 34��>00
	printf("%d\n", bb);//��ˣ�00��С�ˣ�52

	//-128����>127
	char d[1000] = { 0 };
	int i = 0;
	for (i = 0;i < 1000;i++)
	{
		d[i] = -1 - i;
	}
	printf("%d\n", strlen(d));//255
	//-1��>-128��>127��>1



	return 0;
}