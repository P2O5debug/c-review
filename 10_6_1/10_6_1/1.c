#include<stdio.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//����p��ֵΪ0x100000.���±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽڡ�
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);//a��������ָ��
	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2,5

	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//����һ���ṹ�壬+20��0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//pת����ʮ���ƣ�1048576+1=10485767��0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//����һ���޷������Σ�0x00100004

	return 0;
}