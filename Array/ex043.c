#include<stdio.h>
main()
{
	char data[] = "orange";
	int cnt;

	cnt = 0;
	while (data[cnt] != '\0'){
		cnt++;
	}
	printf("文字列:%s\n", &data[0]);
	printf("文字数は%d文字\n", cnt);
}