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
	printf("%d\n", sizeof(p));//����ָ�����p�Ĵ�С��4/8
	printf("%d\n", sizeof(p + 1));//p+1�õ�����b�ĵ�ַ��4/8
	printf("%d\n", sizeof(*p));//*p�����ַ����ĵ�һ���ַ�a��1
	printf("%d\n", sizeof(p[0]));//p[0]==*(p+0)=='a'��1
	printf("%d\n", sizeof(&p));//ȡ��ַ��4/8
	printf("%d\n", sizeof(&p + 1));//����p��4/8
	printf("%d\n", sizeof(&p[0] + 1));//a�ĵ�ַ��һ���õ�b�ĵ�ַ��4/8

	printf("%d\n", strlen(p));//��a��ʼ����6
	printf("%d\n", strlen(p + 1));//��b��ʼ����5
	//printf("%d\n", strlen(*p));// ������a������
	//printf("%d\n", strlen(p[0]));//ͬ��
	printf("%d\n", strlen(&p));//p��a�ĵ�ַ��stren������p�ĵ�ַ����֪��ʲôʱ����0�����
	printf("%d\n", strlen(&p + 1));//���
	printf("%d\n", strlen(&p[0] + 1));//&p[0]�ǵ�һ��Ԫ�ص�ַ����һ����b��ʼ��5

	return 0;
}