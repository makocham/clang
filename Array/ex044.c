#include<stdio.h>
main()
{
	char m1[80], m2[80],w[80];
	int i;

	printf("文字列1を入力 :");
	scanf("%s", m1);
	printf("文字列２を入力 :");
	scanf("%s", m2);

	printf("moji1=%s\tmoji2=%s\n", m1, m2);
	printf("入れ替えると\n");
	for (i = 0; w[i] = m1[i]; i++);
	for (i = 0; m1[i] = m2[i]; i++);
	for (i = 0; m2[i] = w[i]; i++);
	printf("moji=%s\tmoji2=%s\n", m1, m2);
}