#include<stdio.h>
int gokei(int, int, int);
float heikin(int, int, int);
main()
{
	int a, b, c;

	printf("������3���� :");
	scanf("%d%d%d", &a, &b, &c);

	printf("���v��%d ���ς�%.2f\n", gokei(a, b, c),heikin(a, b, c));
}

int gokei(int a, int b, int c)
{
	return a + b + c;
}

float heikin(int a, int b, int c)
{
	return(float)gokei(a, b, c) / 3;
}