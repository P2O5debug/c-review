#include <stdio.h>
int main()
{
	//ʲô�ǳ������ڳ�������й��̵��У�ֵ�����Է����ı����
	//ʲô�Ǳ������ڳ�������й��̵��У�ֵ���Է����ı����
	//����һ�����α���,a��b���Ǳ���
	//16λ����intռ�����ֽڣ�32λ����intռ�ĸ��ֽ�
	//�޷��ţ�0 -> 2^32-1�����з���(-2^31 -> 2^31-1)
	//���Ӻ�׺Ĭ�϶���int��
	unsigned a=1u;
	signed b=-2;
	printf("a=%d\nb=%d\n", a, b);
	printf("intռ���ֽڣ�%d\n", sizeof(int));
	//������������
	//��������
	//1.����ĸ�����֡��»������.
	//2.���������ֿ�ͷ.
	//3.�ϸ����ִ�Сд
	//4.������C���Թؼ�����Ϊ��������32���ؼ��֣�

	//�����淶
	//1.����֪��
	//2.��������Ҫ����32���ַ�,�������ֻ�ض�
	
	//1.�շ���������StudentScordMangerSystem
	//2.������������:nStudentScordManferSystem
	//�ֲ�����
	//int : n
	//char : ch
	//float : f
	//double : d
	//ָ�� : p
	//��� : h
	//ȫ�ֱ��� : g_
	char ch = 'a';
	printf("ch=%c\n", ch);
	printf("charռ���ֽڣ�%d\n", sizeof(char));
	//�ַ��ͱ���
	//�ؼ��� char
	//���ڴ���ռ��һ���ֽڣ�һ���ֽ�ռ�ð˸�λ 1byte=8bit
	//ÿһ��bitֻ�ܴ�0��1
	//char�͵Ĵ洢��Χ��0->255������ܹ���ʾ256���ַ�
	//��Ϊ�з��ţ�-128->127�����޷��ţ�0->255��
	//10000000(2)=-128(10)
	//unsigned���޷���
	//signed���з���
	unsigned char ch1 = 255;
	printf("ch1 = %d\n", ch1);
	signed char ch2 = -128;
	printf("ch2 = %d\n", ch2);
	char ch3 = -12;
	printf("ch3 = %d\n", ch3);

	//�����ͣ�short int
	//���岢�ҳ�ʼ��
	//ռ�������ֽ�
	short s=45;
	printf("s=%d\n",s);
	printf("shortռ���ֽڣ�%d\n", sizeof(short));
	//�޷���(0->65535)���з���(-32768->32767)
	unsigned short s1 = 65535;
	printf("s1 = %d\n", s1);
	signed short s2 = -32768;
	printf("s2 = %d\n", s2);

	//�����Σ�long int,ռ���ĸ��ֽ�
	//�޷��ţ�0 -> 2^32-1�����з���(-2^31 -> 2^31-1)
	long int l = 45UL;
	printf("longռ���ֽڣ�%d\n", sizeof(l));

	//�������Σ�long long int��ռ��8���ֽ�
	long long ll = 78LL;
	printf("long long intռ���ֽڣ�%d\n", sizeof(long long int));

	//�����ͱ���
	//�����ȸ����ͣ�float,ռ���ĸ��ֽڣ���ȷ��С�������λ
	float f = 78.4f;
	printf("%f\n", f);
	printf("floatռ���ֽڣ�%d\n",sizeof(float));
	//˫���ȸ����ͣ�double��ռ�ð˸��ֽڣ���ȷ��С�����ʮ��λ
	double d = 45.6;
	printf("%lf\n", d);
	printf("doubleռ���ֽڣ�%d\n", sizeof(double));
	//��˫���ȸ����ͣ�long double,ռ��8���ֽڣ�gcc��12���ֽ�
	long double ld = 789.7;
	printf("%lf\n", ld);
	printf("long doubleռ���ֽڣ�%d\n", sizeof(long double));
	
	//�����Ĵ洢���ͣ�
	//�Զ�����:�������涨��ľֲ�����.�뿪��������Զ����٣�Ĭ�ϲ���auto����ʾ�Զ�����


	return 0;
}