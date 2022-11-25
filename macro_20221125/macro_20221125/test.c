#define _CRT_SECURE_NO_WARNINGS 1

//define ∂®“Â∫Í
#include<stdio.h>
#define ADD(X,Y) ((X)+(Y))

int main()
{
	//printf("%d\n", 4 * ADD(2,3));//4*2+3=11 #define ADD(X,Y) X+Y
	printf("%d\n", 4 * ADD(2, 3));//4*(2+3)=20 #define ADD(X,Y) ((X)+(Y))
	return 0;
}