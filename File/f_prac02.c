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
		printf("�ǂݍ��݃G���[")
	}
	printf("�ō����_�@���O:%s�@�X�R�A:%d")
	printf("�v���C���[�������:");
	scanf("%d", name);
	while (1)
	{		
		printf("�X�R�A:%d('e'�ŏI��)\n", score);
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