#include<stdio.h>
main()
{
	int score;
	char ch, name[20];
	FILE* fp;
	printf("プレイヤー名を入力:");
	scanf("%d", name);
	while (1) {
		printf("スコア:%d('e'で終了)\n", score);
		if 
		{

		}
	}
	if (fp = fopen("score.txt", "w")) {
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}