#include<stdio.h>
main()
{
	int r = 0;
	int	sum = 0;
	int cnt = 0;

	do 
	{
		sum += r;
		cnt++;

		printf("����(-999�ŏI��)");
		scanf("%d", &r);

	} while (r != -999);

	cnt--;

	printf("���v=%d\n");
	printf("����=%f\n", (float)sum / (float)cnt);
}