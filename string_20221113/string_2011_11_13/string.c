#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ַ�������һ���ַ�-��˫������������һ���ַ�

int main()
{
	//�ַ�����-������һ��ͬ���͵�Ԫ��
	//�ַ����Ľ�β��λ��������һ��\0���ַ�
	//'\0���ַ���������־
	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	char arr2[] = { 'a','b','c',0 };
	////��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//���ַ�������
	//int len = strlen(arr1);
	//printf("%d\n",len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
} 