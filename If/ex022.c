#include<stdio.h>
main()
{
	int n;

	printf("西暦を入力 : ");
	scanf("%d", &n);
	
	if (n >= 1989)
	{
		printf("平成生まれです");
	}
	else 
	{
		printf("平成より前です");
	}
}