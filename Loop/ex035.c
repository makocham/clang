#include<stdio.h>
main()
{
	int sum = 0, nu;
	while (1)
	{

		printf("数を入れて");
		scanf("%d", &nu);

		//break呼び出す
		if (nu== -999) { break; }

		//加算
		sum += nu;
	}
	printf("合計=%d", sum);
}