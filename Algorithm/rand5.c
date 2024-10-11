#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k, i;

	srand(time(0));
	
	for (i = 0; i < 100; i++) {
		k=rand()%(300-1+1)+1
		printf("%4d",k)
	}
}