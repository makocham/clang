#include<stdio.h>
void error_mag(void);
main()
{
	int a, b;
	printf("data1 data2 ?: ");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_mag();
	}
	else {
		printf("%d/%d=%d・・・%d\n", a, b, a / b, a % b);
	}
}

void error_mag(void)
{
	printf("０で割り算はできません\n");
	return;
}