#include<stdio.h>
void Str_cat(char* p1, char* p2);
main()
{
	char a[256], b[256];

	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	Str_cat(a, b);
	printf("�z��a:%s\n", a);
}

void Str_cat(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + 1) != '\0'; i++);
	for (j = 0; *(p1 + 1) = *(p2 + 1); i++, j++);
}