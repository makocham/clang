#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un, i;

	srand(time(0));
	un = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^����,");
	for (i = 0; i<=un;i++)
	{
		printf("��");
	}
	printf("�ł��B\n");
}