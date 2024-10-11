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
		printf("%d/%d=%dEEE%d\n", a, b, a / b, a % b);
	}
}

void error_mag(void)
{
	printf("‚O‚ÅŠ„‚èZ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
	return;
}