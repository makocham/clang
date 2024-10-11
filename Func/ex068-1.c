#include<stdio.h>
main()
{
	int a, b, c, cnt;

	printf("”‚ð2‚Â“ü—Í>");
	cnt = scanf("%d%d", &a, &b);

	if (cnt == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%dŒÂ“ü—Í\n", cnt);
	}
}