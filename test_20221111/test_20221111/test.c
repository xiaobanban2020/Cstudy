#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数据类型
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	printf("%d\n",sizeof(char));
//	//整型
//	int age = 20;
//	printf("%d\n",sizeof(int));
//	//短整型
//	short num = 10;
//	printf("%d\n",sizeof(short));
//	//long
//	printf("%d\n",sizeof(long));
//	//long long
//	printf("%d\n", sizeof(long long));
//	//单精度浮点型
//	float weight = 55.5;
//	printf("%d\n", sizeof(float));
//	//双精度浮点型
//	double d =0.0;
//	printf("%d\n", sizeof(double));
//	//计算机中的单位
//	//bit-比特位 0或1
//	//byte-字节-8bit
//	//kb-1024byte
//	//mb-1024kb
//	//gb-1024mb
//	//tb-1014gb
//	//pb-1024tb
//	return 0;
//}

//常量与变量
//常量-不能改变的量
//变量-能被改变的量

//int main()
//{
//	//创建一个变量
//	//类型 变量的名字 初值
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	//%d-整型
//	//%f-float
//	//%lf-double
//	return 0;
//}

//变量的分类
//局部变量-{}内部定义的
//全局变量-{}外部定义的
//当局部变量与全局变量名字冲突时，局部优先，不建议一样
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);
//	return 0;
//}

//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围{}
//全局变量的作用域：整个工程

//int g_val = 2021;
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}


//extern int g_val;
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束；
//全局变量的生命周期：整个程序的生命周期。

int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	return 0;
}