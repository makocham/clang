#include<stdio.h>
main()
{
	int a, b, c, cnt;

	printf("数を2つ入力>");
	cnt = scanf("%d%d", &a, &b);

	if (cnt == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%d個入力\n", cnt);
	}
}