#include<stdio.h>
typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct
{
	char name[20];
	int hp;
	weapon wpn;
}; Soldier; 
void Setinfo(Soldier* s, char* filename);
void Display(Soldier s);
main()
{
	Soldier sol;
	Setinfo(&sol, "file03.txt");
	Display(sol);
}
void Setinfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn, Wname, &s->wpn, nullet, &s->wpn, atk);
		fclose(fp);
	}
	else {
		printf("�ǂݍ��݃G���[\n");
		return;
	}
}
void Display(Soldier s);
{
	printf("%s �̗�:%d\n",);
	printf("����:%s�i��:%d �U����:%.2f\n",);
}