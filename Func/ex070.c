#include<stdio.h>
int (int a, int b);
main()
{
	int a, b, kotae;
	printf("������2���� :");
	scanf("%d%d", &a, &b);
	kotae = (a, b);
	printf("���v�� %d �ł�\n", kotae);
}

int (int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}