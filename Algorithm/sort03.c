#include<stdio.h>
#define SIZE 5
main()
{
	int d[SIZE] = { 30,7,25,16,10 };
	int i, j, w;

	printf("ソート前\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}

	for (i =1 - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j + 1]>=d[j]) {
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;

		}
	}
	printf("\nソート後n\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}