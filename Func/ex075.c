#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d, e, f;
	printf("���l�H: ");
	scanf(" %d", &a);
	printf("���l�H: ");
	scanf(" %d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("���l�Ɛ��l�̎l�����Z");
	printf(" wa=%d sa=%d  sk=%d syou = %d\n", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk= x* y;
	*syo= x / y;
	return;
}