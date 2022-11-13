#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//常量

//1.字面常量
//int main()
//{
	//3.14;
	//10；
	//	'a';
	//"abcdef";
//	return 0;
//}

//2.const修饰的常变量
//int main()
//{
	//const int num = 10;//常变量-具有常属性（不能被改变的属性）
	//num = 20;
	//printf("num=%d\n",num);
	//int arr[10] = {0};
	//int n = 10;
	//int arr2[n] = {0};//n是变量，这里是不行的
//	return 0;
//}

////3.#define定义的标识符常量
// #define MAX 1000
//int main()
//{
	//int n = MAX;
	//printf("n=%d\n",n);
//	return 0;
//}

//4.枚举常量
//可以一一列举的常量

enum Sex
{
	//这种枚举类型的变量的未来可能取值
	MALE,
	FEMALE,
	SECERT
};
int main()
{
	enum Sex s = MALE;
	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECERT);
	return 0;
}
