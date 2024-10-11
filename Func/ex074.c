#include <stdio.h>
void display1(int n1);
void disolay2(int n2);
main()
{
	int a, b;
	printf("数値a ?: ");
	scanf("%d,&a");
	display1(a);
	printf("a=%d\n\n", a);
	printf("数値b ?: ");
	scanf("%d", &b);
	disolay2(&b);
	printf("b=%d\n\n", b);
}

void display1(int n)
{
	printf("数値aは%dです\n", n);
	n += 10;
	return;
}

void display2(int *n)
{
	printf("数値bは%dです\n", *n);
	*n += 10;
	return;
}