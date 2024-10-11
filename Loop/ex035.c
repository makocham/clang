#include<stdio.h>
main()
{
	int sum = 0, nu;
	while (1)
	{

		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &nu);

		//breakŒÄ‚Ño‚·
		if (nu== -999) { break; }

		//‰ÁZ
		sum += nu;
	}
	printf("‡Œv=%d", sum);
}