#include<stdio.h>
main()
{
	int d[10] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;

	for (i = 0; i < 10; i++)

	printf("探索値s入力 :");
	scanf("%d", &s);

	d[10] = s;
	i = 0;
	
	while(s!=d[i]) {
		i++;
	}


	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dをd[%d}で発見！\n", s, i);
	}
}