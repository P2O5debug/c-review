#include<stdio.h>
struct S 
{
	int a;
	int b;
};
struct stu 
{
	int num;
	char name[10];
	int age;
};
void fun(struct stu* p) 
{
	printf("%s\n", (*p).name);
	return;
}
int main()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", a.a);
	printf("%d\n", (*p).a);
	printf("%d\n", p->a);

	struct stu students[3] =
	{
	{9801,"zhang",20},
	{ 9802,"wang",19 },
	{ 9803,"zhao",18 }
	};
	fun(students + 1);//wang

	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ���ܹ��ȵ�������ˮ
	int money = 20;
	//���������ˮ
	int total = money;
	int empty = money;
	//��������
	while (empty>=2) 
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d\n", total);
	return 0;
}