#include<stdio.h>
main()
{
	int su, cnt;

	printf("�������");
	scanf("%d", &su);

	cnt = 0;
	while (cnt < su) 
	{
		printf("*");
		cnt++;
	}
}