#define _CRT_SECURE_NO_WARNINGS 1
/*#include<stdio.h>
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
}*/
#include<stdio.h>
int main()
{
	int a, b, i, j, n=1;
	printf("输入两个正整数:");
	scanf("%d%d", &a, &b);
	for (i = a;; i++)
	{
		if (i % a == 0 && i % b == 0)
			break;
	}
	printf("最小公倍数: % d\n", i);
	for (j =a ;; j--) {
		if (a % j == 0 && b % j == 0) {
			break;
		}
	}
	printf("最大公约数: % d\n", j);
	return 0;
}



