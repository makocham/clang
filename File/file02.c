#include<stdio.h>
main()
{
	FILE* fp;
	int lv, hp;
	char str[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("str1:%s\n", str);
	fscanf(fp, "%s", str);
	printf("str2:%s\n", str);
	fscanf(fp, "%s", str);
	printf("str3:%s\n", str);
	fscanf(fp,"%d%d%s", &lv, &hp, str);
	printf("lv:%d hp:%d ����:%s\n", lv, hp, str);
	fclose(fp);
}