#include<stdio.h>
main()
{
	float fno;
	printf("実数を入れて:");
	scanf("%f", &fno);
	printf("２倍すると%f\n３倍すると%f\n", fno * 2, fno * 3);
}