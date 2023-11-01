#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,guess,i=0;
	m = rand() % 100 + 1;
	do {
		printf("please guess a number:");
		scanf("%d", &guess);
		i++;
		if (guess > m)
			printf("Wrong ! Too big !\n");
		else if (guess < m)
			printf("Wrong ! Too small !\n");
	} while (guess != m);
	printf("Right ! You are smart !\n");
	printf("The time is %d\n", i);
	
	return 0;
}




/*#include<stdio.h>

int main() 
{
	float a, b, c;
	printf("请输入几何体的长、宽和高：");
	scanf("%f %f %f", &a, &b, &c);
	if (a == b &&b == c) 
	{
		printf("此几何体是一个正方体！\n");
	}
	else if (a == b|| b ==c || a == c)
	{
		printf("此几何体是一个长方体！\n");
	}
	else 
	{
		printf("此几何体不是正方体也不是长方体！\n");
	}

	return 0;
}*/
