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
	printf("�����뼸����ĳ�����͸ߣ�");
	scanf("%f %f %f", &a, &b, &c);
	if (a == b &&b == c) 
	{
		printf("�˼�������һ�������壡\n");
	}
	else if (a == b|| b ==c || a == c)
	{
		printf("�˼�������һ�������壡\n");
	}
	else 
	{
		printf("�˼����岻��������Ҳ���ǳ����壡\n");
	}

	return 0;
}*/
