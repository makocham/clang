#include<stdio.h>

#define TBL_END 5

int tbl_gokei4(int *p);

main()
{
	int a[] = { 10,20,3,40,50 }, gokei;
	
	gokei = tbl_gokei4(a);
	
	printf(" gokei=%d\n", gokei);
}

int tbl_gokei4(int* p)
{
	int gokei, i;
	
	for (gokei = 0, i = 0; i < TBL_END; i++) {
		gokei += *(p + i);
	}
	return gokei;
}