#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//main()
//{
//	int input = 0;
//	printf("�������");
//	printf("��Ҫ�ú�ѧϰ��(1/0)��>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//���� - 30000���� - ��һ������Ĺ���
//while ѭ��
int main()
{
	int line = 0;
	while (line<30000)
	{
		printf("д����:%d\n", line);
		line++;
	}
	if (line == 30000)
	{
		printf("��offer");
	}
	
	return 0;

}
