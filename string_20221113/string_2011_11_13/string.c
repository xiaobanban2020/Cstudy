#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//字符串就是一串字符-用双引号括起来的一串字符

int main()
{
	//字符数组-数组是一组同类型的元素
	//字符串的结尾的位置隐藏了一个\0的字符
	//'\0’字符串结束标志
	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	char arr2[] = { 'a','b','c',0 };
	////打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//求字符串长度
	//int len = strlen(arr1);
	//printf("%d\n",len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
} 