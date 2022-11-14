#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//转义字符:转变了字符原有的意思
int main()
{
	//printf("c:\test\test.c");
	//printf("ab\ncd");
	//printf("(are you ok??)");//??)--]三字母词（are you ok]
	//printf("%c\n", '\'');
	//printf("%s\n", "abc");
	//printf("%s\n", "a");
	//printf("%s\n", "\"");
	//printf("%s\n", "'");
	//printf("c:\\test\\test.c");
	//printf("\a\a\a");//警告字符，蜂鸣
	//printf("%c\n",'\130');//8进制的130转换成十进制是88--X的ASCII值
	//printf("%c\n", '\101');//A-65-8进制：101
	//printf("%c\n", '\x30');//十六进制--十进制48--对应ASCII码‘0’
	//printf("%d\n",strlen("abc"));
	printf("%d\n",strlen("c:\test\328\test.c"));
	return 0;
}