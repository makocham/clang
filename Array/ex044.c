#include<stdio.h>
main()
{
	char m1[80], m2[80],w[80];
	int i;

	printf("•¶Žš—ñ1‚ð“ü—Í :");
	scanf("%s", m1);
	printf("•¶Žš—ñ‚Q‚ð“ü—Í :");
	scanf("%s", m2);

	printf("moji1=%s\tmoji2=%s\n", m1, m2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; w[i] = m1[i]; i++);
	for (i = 0; m1[i] = m2[i]; i++);
	for (i = 0; m2[i] = w[i]; i++);
	printf("moji=%s\tmoji2=%s\n", m1, m2);
}