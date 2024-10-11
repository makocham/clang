#include<stdio.h>
enum BitState
{
	Base=0,          //00000000  通常
	Poison=1<<0,     //00000001  どく状態
	Sleep=1<<1,      //00000010  ねむり状態
	Paralysis=1<<2,  //00000100  まひ状態 
	Burn=1<<3,       //00001000  やけど状態 
	AtkUp=1<<4,      //00010000  攻撃力アップ
	AtkDown=1<<5     //00100000  攻撃力ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison) 
	{
		printf("毒\n");
	}
	if (s & Sleep) 
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("*********************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか?\n");
		printf("1:毒2:睡眠3:麻痺4:火傷5:攻撃up6:攻撃dw0:入力終了>");
		scanf("%d", &a);
		if (a == 0) 
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		  default:
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか?\n");
		printf("1:毒2:睡眠3:麻痺4:火傷5:攻撃up6:攻撃dw0:入力終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) 
		{
		case1:
			*s &= ~Poison;
			break;
		case2:
			*s &= ~Sleep;
			break;
		case 3:
			*s |= ~Paralysis;
			break;
		case 4:
			*s |= ~Burn;
			break;
		case 5:
			*s |= ~AtkUp;
			break;
		case 6:
			*s |= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}