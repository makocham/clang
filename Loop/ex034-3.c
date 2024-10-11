#include<stdio.h>
main()
{
	int num, i, r;

	printf("”‚ÍH :");
	scanf("%d", &num);

	i = 0;
	do {
		r = 0;
		do {
			printf("*");
			r++;
		} while (r<i+ 1);
		printf("\n");
		i++;
	} while (i < num);
}