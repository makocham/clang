#include<stdio.h>
main()
{
	int m;

	printf("������� :");
	scanf("%d", &m);

	if (m == 1 || m == 3 || m == 5 || m ==7  || m == 8 || m == 10 || m == 12 || ) {
		printf("�ŏI���͂R�P���ł�");
	}
	else {
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			printf("�ŏI���͂R�O���ł�");
		}
		else {
			printf("�ŏI���͂Q�W���ł�");
		}
	}
}