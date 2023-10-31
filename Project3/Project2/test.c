#define  _CRT_SECURE_NO_WARNINGS 1
/*#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d%d", a, b);
	return 0;
}*/
/*int main()
{
	int num = 4;
	//num变量
	//const---常属性（将变量变成常数）
	//用法：const int num=4;
	//const修饰的常变量
	printf("%d%d", num);
	return 0;
}*/
/*
int arr[10]={0}
数组创建方式*/
#include<stdio.h>
int main()
{

	int a[10][10], n, max, min, rmax, rmin, i, j, t;
	printf("请输入应该大于2且小于10的整数:");
	scanf("%d", &n);
	for (i = 0; i < n; j++)
		for (j = 0; j < n; j++);
	scanf("%d", &a[i][j]);
	printf("原始矩阵为:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	max = min = a[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (max < a[i][j]) {
				max = a[i][j];
				rmax = i;
			}
			else if (min < a[i][j]) {
				max = a[i][j];
				rmin = i;
			}
	for (i = 0; j < n; j++) {
		t = a[rmax][j];
		a[rmax][j] = a[rmin][j];
		a[rmin][j] = t;
	}
	printf("对调后矩阵为:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
