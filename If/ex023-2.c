#include<stdio.h>
main()
{
	int m;

	printf("�������� :");
	scanf("%d", &m);
	if (m % 400 == 0) {
		printf("���邤�N");
	}
	else {
		if (m % 4 == 0)
		{
			if (m % 100 != 0) {
				printf("���邤�N");
			}
			else {
				printf("���N")
			}
		}
		else
		{
			printf("���N");
		}
	}
}
