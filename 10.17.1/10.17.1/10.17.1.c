﻿#include<stdio.h>
#define P 10
int main()
{
	//数组：存储数据的仓库,相同数据类型的数据的集合
	//1.一维数组
	//类型说明符 数组名【常量或常量表达式】
	//常量或常量表达式：数组的大小，元素的个数（不是字节数）
	//char arr[2 * 5];//const常量也不能放进去
	//数组的元素个数：10个，所占字节数：元素个数*元素类型所占大小
	
	//宏定义可以放进去
	char a[P];
	
	//数组的初始化
	//第一种方式
	char arr[10] = { 'a','b','c','d','e','f','g','h','i','j' };
	//数组是通过下标访问：数组的下标是从0开始，到数组的长度-1；
	printf("%c ", arr[0]);
	printf("%c ", arr[1]);
	printf("%c ", arr[2]);
	printf("%c ", arr[3]);
	printf("%c ", arr[4]);
	printf("%c ", arr[5]);
	printf("%c ", arr[6]);
	printf("%c ", arr[7]);
	printf("%c ", arr[8]);
	printf("%c\n", arr[9]);

	int arr1[5] = { 1,2,3,4,5 };
	printf("%d ", arr1[0]);
	printf("%d ", arr1[1]);
	printf("%d ", arr1[2]);
	printf("%d ", arr1[3]);
	printf("%d\n", arr1[4]);
	//printf("%d\n", arr1[5]);
	//下标越界：非常严重的问题,编译器不会给你检测报错，运行的时候可能崩溃
	//程序员自己注意

	//第二种方式
	//只给前面几个赋值，默认后面赋值为0
	float arr2[5] = { 12.0f,78.5f,9.0f };
	printf("%f ", arr2[0]);
	printf("%f ", arr2[1]);
	printf("%f ", arr2[2]);
	printf("%f ", arr2[3]);
	printf("%f\n", arr2[4]);

	//第三种方式
	//对全部元素初始化的时候，不指定数组元素长度
	int arr4[] = { 0,1,2,3,4 };
	printf("%d ", arr4[0]);
	printf("%d ", arr4[1]);
	printf("%d ", arr4[2]);
	printf("%d ", arr4[3]);
	printf("%d\n", arr4[4]);

	//第四种，字符数组初始化
	char str[20] = "Hello World";//使用字符串的方式进行初始化，看做初始化列表
	//最少12，要包括终止符才能算完整的字符
	printf("%c ", str[0]);
	printf("%c ", str[3]);
	printf("%c ", str[10]);
	printf("%c\n", str[19]);

	//第五种
	char str1[] = "Hello World";//有12个元素

	//求一个数组所占内存大小
	printf("占用：%d\n", sizeof(str1));

	//数组元素的赋值
	int arr5[10] = { 0 };
	arr5[0] = 1;
	arr5[1] = 2;
	arr5[2] = 8;

	//数组的遍历：快速查看一个数组
	for (int i = 0;i < 10;i++)
	{
		printf("%d,", arr5[i]);
	}
	printf("\n");

	//二维数组
	//类型说明符 数组名 【常量或常量表达式1】【常量或常量表达式2】
	//表格:包含多个一维数组，n行m列
	//int a[3][8];有三个一维数组，每个一维数组里面有八个元素

	//1.直接在括号里面，按顺序排列
	int add[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	printf("%d,", add[0][2]);
	printf("%d,", add[0][4]);
	printf("%d,", add[1][3]);
	printf("%d,", add[2][1]);
	printf("%d,\n", add[2][4]);

	//2.只给部分元素赋值，其余没有赋值的默认赋值为0
	//int add[3][5] = { 1,2,3,4,5,6,7,8,9,10,11};

	//3.可以省略行下标，但是不能省略列下标
	//int add[][5] = { 1,2,3,4,5,6,7,8,9,10 };//两行
	//不能省略列下标
	//编译器是根据一维数组长度来划分二维数组大小

	//4.用{}括起来，分行进行赋值
	//可以少几个元素
	int add1[3][5] = { {1,2,3,4},{6,7,8,9,10},{11,12,13} };
	//遍历二维数组
	for (int i = 0;i < 3;i++) 
	{
		for (int j = 0;j < 5;j++) 
		{
			printf("%d,", add1[i][j]);
		}
		printf("\n");
	}

	return 0;
}