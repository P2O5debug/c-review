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
//һά������Ϊ������������
void printArr(int arr[10]) 
//void printArr(int arr[10])���ַ�ʽҲ���ԣ�ʵ�ʻ��Ǵ��ݵĵ�ַ
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
//��ά������Ϊ������������
void printArr2(int(*arr)[5], int x, int y)
{
	for (int i = 0;i < x;i++)
	{
		for (int j = 0;j < y;j++)
		{
			printf("%d,", arr[i][j]);
		}
		printf("\n");
	}
}
//��ά����
void printArr3(int(*arr)[3][4], int x, int y, int z)
{
	for (int i = 0;i < x;i++)
	{
		for (int j = 0;j < y;j++)
		{
			for (int k = 0;k < z;k++)
				printf("%d,", arr[i][j][k]);
			printf("\n");
		}
	}
}

void showdouble(double* d) 
{
	printf("�����ͣ�%f\n",*d);
}

//ָ����Ϊ�����ķ���ֵ
//ע�⣺���صĵ�ַ�����ǿ��õģ�����û�б��ͷŵ�
int* test1(int* c) 
{
	*c = 100;
	return c;
}

//���鲻����Ϊ������������

//����ָ�룺
void show() 
{
	printf("hello\n");
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

	int arr2[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	printArr2(arr2, 4, 5);

	int arr3[2][3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	printArr3(arr3, 2, 3, 4);

	double d = 456.789;
	showdouble(&d);
	//���ǽṹ���ʱ��ʵ�κ��βι��󣬿���Ч�ʹ���
	//���Ч�ʣ�ʹ��double*��������Զ�ĸ��ֽ�
	//ʵ����ռ�ڴ��ֽڹ���ʱ������ʹ�ô�ַ��ʽ�����Ż������Ч��
	//ʵ����ռ�ڴ��ֽڹ�С����char��ʱ��ʹ�ô�ֵ��ʽ����
	int m = 10;
	int* pm = test1(&m);
	printf("m=%d\n", m);
	//show��һ������
	printf("show=%d\n", show);//��ӡ�ĺ���ָ��
	//ָ���������

	return 0;
}