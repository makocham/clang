#include<stdio.h>
void Str_cat(char* p1, char* p2);
main()
{
	char a[256], b[256];

	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	Str_cat(a, b);
	printf("”z—ña:%s\n", a);
}

void Str_cat(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + 1) != '\0'; i++);
	for (j = 0; *(p1 + 1) = *(p2 + 1); i++, j++);
}