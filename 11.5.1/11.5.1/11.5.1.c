#include<stdio.h>
#include<string.h>
int main()
{
	//char arr[] = { 'a','b','c','d','e','f' };
	char arr[] = "abcdef";

	printf("%d\n", sizeof(arr));//sizeof(arr)�����������Ĵ�С����λ���ֽڣ�7
	printf("%d\n", sizeof(arr + 0));//arr+0����Ԫ�صĵ�ַ��sizeof(arr+0)������ǵ�ַ�Ĵ�С��4/8
	printf("%d\n", sizeof(*arr));//*arr����Ԫ�أ�sizeof(*arr)���������Ԫ�صĴ�С��1
	printf("%d\n", sizeof(arr[1]));//arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С��1
	printf("%d\n", sizeof(&arr));//&arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��4/8
	printf("%d\n", sizeof(&arr + 1));//&arr+1�����ַ��һ,���������������ĵ�ַ��4/8
	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]+1��һ��Ԫ�صĵ�ַ��һ���ǵڶ���Ԫ�صĵ�ַ��4/8

	printf("%d\n", strlen(arr));//���ַ������ȣ�û��'\0'��6
	printf("%d\n", strlen(arr + 0));//����Ԫ�ؿ�ʼ��6
	//printf("%d\n", strlen(*arr));//�����������ַ�a��strlen��97������ַ���ʣ��Ƿ������ڴ�
	//printf("%d\n", strlen(arr[1]));//ͬ��
	printf("%d\n", strlen(&arr));//&arr - ����ĵ�ַ - ����ָ�� char(*p)[7]=&arr�����о���
	printf("%d\n", strlen(&arr + 1));// ͬ�ϣ���Ϊ����������Խ�����
	printf("%d\n", strlen(&arr[0] + 1));//b�ĵ�ַ�����Դ�b�����㣺5

	char *p = "abcdef";
	//�ѳ����ַ���abcdef\0����Ԫ��a�ĵ�ַ�Ž�p����
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	/*printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));*/

	return 0;
}