#include<stdio.h>
//ʵ����������a��b��ֵ
void swap(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
	printf("a=%d,b=%d\n", a, b);
}
void s(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void display(char* str)
{
	printf("%s\n", str);
}
//����һ������
void printArr(int arr[10]) 
{
	for (int i = 0;i < 10;i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
	printf("arr�Ĵ�С��%d\n", sizeof(arr));//�����ӡ�������Ƕ���
	//������Ϊ�����������ݵ�ʱ�򣬴��ݵ��׵�ַ�����������������ˣ��Ѿ�����˵�ַ
	//��֪�������ж��ٸ�Ԫ��
}

int main() 
{
	int a = 10, b = 20, c = 30;
	int* pa = &a, * pb = &b, * pc = &c;
	printf("pa=%d,pb=%d,pc=%d\n", pa, pb, pc);
	//�뽻����������a��b��ֵ
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	swap(a, b);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	s(&a, &b);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	//��ֵ�ʹ�ַ
	//��ʵ���ܴ�ֵ���Ǵ�ַ���Ǵ��ݵ�һ�ݿ���
	display("HelloWorld");

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printArr(arr);//arr���ݵ���һ����ַ
	printf("arr�Ĵ�С��%d\n", sizeof(arr));//�����ӡ�����Ƕ���

	return 0;
}