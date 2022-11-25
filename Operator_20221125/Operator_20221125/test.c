#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//操作符
//算数操作符：+ - * / %
//int main()
//{
//	//int a = 9 / 2;//4
//	//float a = 9 / 2;//4
//	//float a = 9 / 2.0;//4.500000
//	int a = 9 % 2;//1 取模（余）
//	printf("%d\n",a);
//	return 0;
//}
//移位操作符：>> <<
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n",b);
//	return 0;
//
//}
//位操作符：
//& 按位与
//| 按位或
// ^ 按位异或

//赋值操作符：= += -= *= /= &= |= >>== <<=
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//	a = a - 3;
//	a -= 3;
//	return 0;
//}
//单目操作符--只有一个操作数的操作符
// ！逻辑反操作
// -负值
// +正值
//& 取地址
//sizeof 操作数的类型长度（以字节位单位）
//~ 对一个数的二进制按位取反
//-- 前置、后置--
//++ 前置、后置++
//* 间接访问操作符（解引用操作符）
//（类型）强制类型转换
//int main()
//{
	////0 表示假，非0表示真
	//int a = 0;
	//printf("%d\n",!a);//1
	//if (a)
	//{
	//	//如果a为真
	//}
	//else
	//{
	//	//如果a为假
	//}
	//a = -5;
	//a = -a;

	//int a = 10;
	//printf("%u\n",sizeof(int));
	//printf("%u\n", sizeof(a));
	//printf("%u\n", sizeof a);//括号可省略，表示是操作符不是函数

	//int arr[10] = {0};
	//printf("%d\n", sizeof(arr));//数组总元素占内存大小
	//printf("%d\n",sizeof(arr[0]));//数组首元素占内存大小
	//printf("%d\n",sizeof(arr)/sizeof(arr[0]));//数组个数

	//int a = 0;
	//printf("%d\n",~a);
	//整数在内存中存储的是补码
	//一个整数的二进制表示有三种
	// 正数：原码、反码、补码相同
	//负数：
	//原码：
	//反码：符号位不变，原码取反
	//补码：符号位不变，反码+1

	//int a = 10;
	////int b = ++a;//a=11,b=11,前置++，先++后使用
	//int b = a++;//a=11,b=10,后置++，先使用再++
	//printf("a=%d,b=%d",a,b);

	//int a = (int)3.14;
	//printf("%d\n",a);

	//关系操作符
	// >
	// >=
	//	<
	//	<=
	//	!=
	//	==

	//逻辑操作符
	//&& 逻辑与
	//|| 逻辑或
	//int a = 0;
	//int b = 5;
	//int c = a && b;
	//int d = a || b;
	//printf("%d\n",c);
	//printf("%d\n",d);
	//if (a && b)
	//{
	//}

	//条件操作符
	//exp1 ? exp2 ：exp3
	//exp1成立，计算exp2，整个表达式的结果是exp2的结果
	//exp1不成立，计算exp3，整个表达式的结构是exp3的结果

	//int a = 0;
	//int b = 3;
	//int max = 0;
	//if (a > b)
	//	max = a;
	//else
	//	max = b;
	//max = a > b ? a : b;
	//printf("%d\n", max);

	//逗号表达式：逗号隔开的表达式
	//逗号表达式是从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
	//int a = 0, b = 3, c = 5;
	//int d = (a = b + 2,c = a - 4,b = c + 2);
	//printf("%d\n",d);

	//下标引用:[]
	//函数调用:()
	//结构体成员: . ->
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",arr[5]);

	//C语言提供的关键字
	//1.C语言提供的，不能自己创建关键字
	//2.变量名不能是关键字
	//auto 是自动的-每个局部变量都是auto修饰的
	//auto int a = 10;//int a = 10;auto省略掉了

	//break 

	//case
// char
	//const
	//continue
	//default
	//do
	//double
	//else
	//enum
	//extern 用来声明外部符号的
	//float
	//for
	//goto
	//if
	//int
	//long
	
	//register 寄存器关键字
	//register int num = 100;//建议num的值存放在寄存器中，大量频繁被使用的数据，想放在寄存器中，提升效率
	//寄存器   更小
	//高速缓存 几十M
	//内存     8G-16G
	//硬盘     500G-买的
	//网盘     2T-免费的

	//return
	//short
	//signed 有符号的
	//sizeof
	//static 静态的
	//struct
	//switch
	//typedef 类型重定义
	//typedef unsigned int u_int;
	//unsigned int num=100;
	//u_int num2 = 100;
	//union 联合体（共用体）
	//unsigned 无符号的
	//void
	//volatile
	//while

	//define include 不是关键字，是预处理指令
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n",a);
//}
//int main()
//{
	//static 静态的
//1.static修饰局部变量,改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//2.static修饰全局变量,使得整个全局变量只能在自己所在的源文件（.c）文件内部使用。
// 全局变量在其他源文件内部可以使用，是因为全局变量具有外部链接属性，
// 但是被static修饰后，就变成了内部链接属性，其他源文件就不能链接到整个静态的全局变量了。
//3.static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用，本质上：static是将函数的外部属性变成了内部链接属性！（和static修饰全局变量一样）

	//-----------
	//栈区
	// 局部变量
	// 函数的参数
	//-----------
	//堆区
	// 动态内存分配的
	//-----------
	//静态区
	//全局变量
	//static修饰的静态变量
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}
extern int Add(int,int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}