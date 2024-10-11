#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a, b, c, i;

	srand(time(0));

	for (i = 0; i < 10; i++)
	{
		a = rand() % 100;

		b = rand() % (50 - 10 + 1) + 10;

		c = rand() % (200 + 100 + 1) - 100;
		printf("a=%d,b=%d,c=%d\n", a, b, c);
	}
}