#include<stdio.h>
main()
{
	int i;
	char data[6] = "Apple";
	printf("‚P•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}

	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &data[0]);
}