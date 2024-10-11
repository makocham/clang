#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Progrming2" , "Algorithm","Programing1","C" }, *w;
	int i, j;

	for (i = 0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(p_tbl[i], p_tbl[j]) > 0) {
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}
	for (i = 0; i < CNT ; i++) {
		printf("%s\n", p_tbl[i]);
	}
}