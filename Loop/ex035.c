#include<stdio.h>
main()
{
	int sum = 0, nu;
	while (1)
	{

		printf("��������");
		scanf("%d", &nu);

		//break�Ăяo��
		if (nu== -999) { break; }

		//���Z
		sum += nu;
	}
	printf("���v=%d", sum);
}