#include<stdio.h>
main()
{
	int num, i, r;

	printf("”‚ÍH :");
	scanf("%d", &num);

	i = 0;
	r = 0;
	do {
		i = 0;
		do 
		{
			printf(" ");
			i++;
		} while (i < num - r);

		i = 0;
		do 
		{
			printf("*");
			i++;
		} while (i < r + 1);
		printf("\n");
		r++;

	} while (r < num);
}