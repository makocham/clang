#include<stdio.h>
main()
{
	char s[50];
	int i;

	printf("���������� >");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("�Í���������́A%s\n", &s, s[0]);
}