#include<stdio.h>
#define STACKSIZE 8
int srack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int *pd);

main()
{
	int key, data, result;
	do {
		printf("\n\nプッシュはi、ポップはoを入力して>");
		key = getche();
		printf("\n");

		if (key == 'i') {
			scanf("%d", &data);
			result = push(data);
			if (result = -1) {
				printf("\nスタックがいっぱいです\n");
			}else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\nスタックが空です\n");
			}else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}

	} while (key != 'e');

}

void display(void)
{
	int i;

	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("spが指している所(現在spは%d)", sp);
		}
		printf("\n");
	}

	return;
}

int push(int d)
{
		if () { return -1; }
		
		return 0;
}
int pop(int* pd)
{
	if(){ return -1; }


	stack[sp] = 0;
	return 0;
}
