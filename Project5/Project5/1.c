#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("输入a=");
	scanf("%d", &a);
	printf("输入b=");
	scanf("%d", &b);
	for (; b != 0;c=0) {
		c = a % b;
		a = b;
		b = c;
		printf("a=%d\tb=%d\n", a, b);
	}
	printf("a与b的最大公约数为%d", a);
	return 0;
}