#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("����a=");
	scanf("%d", &a);
	printf("����b=");
	scanf("%d", &b);
	for (; b != 0;c=0) {
		c = a % b;
		a = b;
		b = c;
		printf("a=%d\tb=%d\n", a, b);
	}
	printf("a��b�����Լ��Ϊ%d", a);
	return 0;
}