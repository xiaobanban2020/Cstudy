#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����

//1.���泣��
//int main()
//{
	//3.14;
	//10��
	//	'a';
	//"abcdef";
//	return 0;
//}

//2.const���εĳ�����
//int main()
//{
	//const int num = 10;//������-���г����ԣ����ܱ��ı�����ԣ�
	//num = 20;
	//printf("num=%d\n",num);
	//int arr[10] = {0};
	//int n = 10;
	//int arr2[n] = {0};//n�Ǳ����������ǲ��е�
//	return 0;
//}

////3.#define����ı�ʶ������
// #define MAX 1000
//int main()
//{
	//int n = MAX;
	//printf("n=%d\n",n);
//	return 0;
//}

//4.ö�ٳ���
//����һһ�оٵĳ���

enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
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
