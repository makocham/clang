#include<stdio.h>
main()
{
	int max_score, score = o;
	char max_name[20],ch, name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")){
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else {
		printf("読み込みエラー")
	}
	printf("最高得点　名前:%s　スコア:%d")
	printf("プレイヤー名を入力:");
	scanf("%d", name);
	while (1)
	{		
		printf("スコア:%d('e'で終了)\n", score);
		ch = getch();
		if(ch=='e')
		{
			break;
		}
		score++;	
	}
	if (score>max_score) 
	{
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
	}
}