#include<stdio.h>
main()
{
	char data[] = "orange";
	int cnt;

	cnt = 0;
	while (data[cnt] != '\0'){
		cnt++;
	}
	printf("������:%s\n", &data[0]);
	printf("��������%d����\n", cnt);
}