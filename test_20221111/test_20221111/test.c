#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	printf("%d\n",sizeof(char));
//	//����
//	int age = 20;
//	printf("%d\n",sizeof(int));
//	//������
//	short num = 10;
//	printf("%d\n",sizeof(short));
//	//long
//	printf("%d\n",sizeof(long));
//	//long long
//	printf("%d\n", sizeof(long long));
//	//�����ȸ�����
//	float weight = 55.5;
//	printf("%d\n", sizeof(float));
//	//˫���ȸ�����
//	double d =0.0;
//	printf("%d\n", sizeof(double));
//	//������еĵ�λ
//	//bit-����λ 0��1
//	//byte-�ֽ�-8bit
//	//kb-1024byte
//	//mb-1024kb
//	//gb-1024mb
//	//tb-1014gb
//	//pb-1024tb
//	return 0;
//}

//���������
//����-���ܸı����
//����-�ܱ��ı����

//int main()
//{
//	//����һ������
//	//���� ���������� ��ֵ
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	//%d-����
//	//%f-float
//	//%lf-double
//	return 0;
//}

//�����ķ���
//�ֲ�����-{}�ڲ������
//ȫ�ֱ���-{}�ⲿ�����
//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ����ȣ�������һ��
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);
//	return 0;
//}

//���������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ{}
//ȫ�ֱ�������������������

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

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ����������
//ȫ�ֱ������������ڣ�����������������ڡ�

int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	return 0;
}