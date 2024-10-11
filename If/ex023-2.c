#include<stdio.h>
main()
{
	int m;

	printf("西暦を入力 :");
	scanf("%d", &m);
	if (m % 400 == 0) {
		printf("うるう年");
	}
	else {
		if (m % 4 == 0)
		{
			if (m % 100 != 0) {
				printf("うるう年");
			}
			else {
				printf("平年")
			}
		}
		else
		{
			printf("平年");
		}
	}
}
