#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����ռ�
	int* p = (int*)malloc(10 * sizeof(int));
	//ʹ�ÿռ�
	//********
	//�ͷſռ�
	free(p);
	//free��֮��pָ���������ɴ��ŵ�ַ
	p = NULL;

	char str1[] = "hello yu.";
	char str2[] = "hello yu.";
	char* str3 = "hello yu.";
	char* str4 = "hello yu.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	//str1 and str2 are same
	//str3 and str4 are not same

	return 0;
}