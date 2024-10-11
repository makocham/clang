#include<stdio.h>
void calculate(int a, int b, int *p_sum, float *p_ave);
main()
{
	int a, b, sum;
	float ave;

	printf("®”‚ğ2‚Â“ü—Í :");
	scanf("%d%d", &a, &b);

	calculate(a, b, &sum, &ave);

	printf("‡Œv‚Í%d,•½‹Ï‚Í%.2f\n", sum, ave);
}

void calculate(int a, int b, int* p_sum, float * p_ave)
{
	*p_sum = a + b;
	*p_ave = (a + b) / 2;
	return;
	
}