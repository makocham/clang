#include<stdio.h>
main()
{
	char s[50];
	int i;

	printf("•¶š—ñ‚ğ“ü—Í >");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", &s, s[0]);
}