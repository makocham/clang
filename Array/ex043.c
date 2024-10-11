#include<stdio.h>
main()
{
	char data[] = "orange";
	int cnt;

	cnt = 0;
	while (data[cnt] != '\0'){
		cnt++;
	}
	printf("•¶š—ñ:%s\n", &data[0]);
	printf("•¶š”‚Í%d•¶š\n", cnt);
}