﻿#include<stdio.h>
int main() 
{
	int a = 10, b = 20;
	//1.表达式
	/*a + b
	a / b
	a % b*/
	//简单表达式：a、b、c
	//复杂表达式：2*(a+b)/10+a*b

	//2.语句：以分号结束
	//空语句
	//{}括起来叫做语句块
	{
		int a = 1, b = 2;
		;;;;
		;
		printf("a=%d,b=%d\n", a, b);
	}
	printf("a=%d,b=%d\n", a, b);

	//3.运算符
	//赋值运算符,从右向左赋值
	//变量名、指针=常量表达式、变量
	//初始化：定义变量的时候给初值
	//赋值：变量已经定义好了，只是改变变量的值
	//赋值的时候发生隐式类型转换
	float f = 45.6;//45.6默认是double，第一种隐式类型转换，大杯子水倒进小杯子，较长数据转换为较短数据，会发生截断，会警告
	int c = 'c';//第二种隐式类型转换，较小的数据转化为较大的数据,小杯子水倒进大杯子，类型提升，不会警告
	//赋值的时候发生显示类型转换,不会发生警告
	//float f = (float)45.6;
	//算数运算符：
	//单目运算符：（+、-、++、--）
	//双目运算符：符号两边要有两个操作数（+、-、*、/）
	int aa = 46, bb = 4, cc = 0;
	float dd = 0;
	cc = aa / bb;
	printf("cc=%d\n", cc);//11?如果操作数两边都是同一种类型，算出来结果是同一种类型
	float d = 3.0f;
	dd = aa / d;
	printf("dd=%f\n", dd);
	float e = aa / bb;
	printf("e=%f\n", e);
	float ee = (float)aa / bb;
	printf("ee=%f\n", ee);
	//%求余，两边操作数只能是整数,余数的正负取决于被除数
	int ff = aa % bb;
	printf("ff=%d\n", ff);
	//前置++（--）：++a,表示先自增自减，再赋值
	cc = ++aa;
	printf("aa=%d,++aa=%d\n",aa, cc);
	//后置++（--）：a++,表示先赋值,后自增自减
	cc = bb++;
	printf("bb=%d,bb++=%d\n",bb, cc);
	//++和--的优先级高于+、-、*、/
	//先看优先级，再看结合性
	//a=45,c=--a+a++,c=88,a=45

	//关系运算符
	//>、>=、<、<=、!=、==
	//C语言中：真：非0为真，为真返回1，为假返回0
	//不能连着写 
	//例如：12 <= aa <= 30,12<=aa为真，值为1,1<=30，为真，值为1，错误。
	cc = aa > bb;
	printf("aa > bb=%d\n", cc);

	cc = aa != bb;
	printf("aa != bb=%d\n", cc);

	//逻辑运算符
	//逻辑与：&&	两个条件同时成立才成立，只有两个同时为真才为真，否则为假
	//逻辑或：||	只要有一个为真就为真
	//逻辑非：！	真的变假的，假的变真的
	c = aa && bb;
	printf("aa&&bb=%d\n", c);
	c = aa && 0;
	printf("aa&&0=%d\n", c);
	c = aa || 0;
	printf("aa||0=%d\n", c);
	c = !aa;
	printf("!aa=%d\n", c);

	//括号运算符
	//有括号先算括号，括号能够提高优先级
	c = 12 <= a <= 30;
	printf("12 <= a <= 30=%d\n", c);
	c = (12 <= a) && (a <= 30);
	printf("(12 <= a) && (a <= 30)=%d\n", c);
	//逻辑或的短路现象：只要有一个为真，不会去计算第二个表达式
	c = (a = 60) || (b = 50);
	printf("a=%d,b=%d,c=%d\n", a,b,c);//60,20,1:短路现象

	//三目运算符：?:
	int x=20;
	c = x < 30 ? printf("为真\n") : printf("为假\n");//为真，执行前面。为假，执行后面。
	printf("c=%d\n", c);//printf返回值表示输出的字节数，c=5

	//位运算符
	//&：按位与		相对应的二进制位：都为1才为1，否则为0
	//|：按位或		相对应的二进制位：有1就为1，否则为0
	//^：按位异或	相对应的二进制位：相同为0，不同为1
	//~：按位取反	相对应的二进制位：0变1,1变0
	
	//正数：三码合一
	//源码：计算出来的二进制数
	//反码：负数符号位不变，其余位按位取反
	//补码：负数符号位不变，反码加一
	//-15的源码：1000 0000 0000 0000 0000 0000 0000 0101
	//-15的反码：1111 1111 1111 1111 1111 1111 1111 1010
	//-15的补码：1111 1111 1111 1111 1111 1111 1111 1011
	a = 5;b = 4;c = 0;
	c = a & b;
	//  0101	补码
	//& 0100	补码
	//--------
	//  0100	补码
	//源码：0100	=4
	printf("a&b=%d\n", c);
	//真正计算机计算是补码计算，计算结果再转成源码

	//逗号运算符
	//多个表达式之前使用逗号分隔，整个表达式的值是最后一个表达式的值
	//逗号表达式的优先级最低，低于赋值运算符
	a = 45;b = 10;c = 0;
	c = (a + b, b + c, a + c);//不打括号只计算a+b，c=55
	printf("c=%d\n", c);

	//复合运算符
	//+=、-=、/=、*=、&=、|=、^=、~=
	a += 10;	//a=a+10
	a -= 10;	//a=a-10
	a *= 10;	//a=a/10
	a &= 10;	//a=a&10

	//位运算符
	//左移：<<
	//规则：高位丢失，低位补0
	//右移：>>
	//规则：正数低位丢失，高位补0；负数：低位丢失，高位补1；
	
	a = -8;
	//源码：1000 0000 0000 0000 0000 0000 0000 1000
	//反码：1111 1111 1111 1111 1111 1111 1111 0111
	//补码：1111 1111 1111 1111 1111 1111 1111 1000
	b = a << 3;
	//补码：1111 1111 1111 1111 1111 1111 1100 0000
	//反码：1111 1111 1111 1111 1111 1111 1011 1111
	//源码：1000 0000 0000 0000 0000 0000 0100 0000
	//b=-64
	printf("b=%d\n", b);
	//源码：1000 0000 0000 0000 0000 0000 0000 1000
	//反码：1111 1111 1111 1111 1111 1111 1111 0111
	//补码：1111 1111 1111 1111 1111 1111 1111 1000
	c = a >> 2;
	//补码：1111 1111 1111 1111 1111 1111 1111 1110
	//反码：1111 1111 1111 1111 1111 1111 1111 1101
	//源码：1000 0000 0000 0000 0000 0000 0000 0010
	//c=-2
	printf("c=%d\n", c);

	//sizeof运算符，不是一个函数
	//用来求一个类型或一个变量所占用内存的大小
	//不会进行赋值操作
	int n = 10;
	sizeof(n = n + 1);
	printf("n=%d\n", n);//n=10,没有计算n+1

	return 0;
}