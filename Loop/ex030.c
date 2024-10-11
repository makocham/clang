#include<stdio.h>
main()
{
	int su, cnt;

	printf("”‚ğ“ü—Í :");
	scanf("%d", &su);

	cnt = 0;
	while (cnt <= 10)
	{
		printf("%d+%d=%d\n", su, cnt, su + cnt);
		cnt++;
	}
}