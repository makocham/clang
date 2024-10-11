nclude<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\n\nエンキューはi、デキューはoを入力して>");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞")
			scanf("%d", &data);
			result = enqueue(data);
			if (result = -1) {
				printf("\nキューがいっぱいです\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\nキューが空です\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}

	} while (key != 'e');

}

void display(void)
{
	int i;

	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("heqd[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("spが指している所(現在spは%d)", sp);
		}
		printf("\n");
	}

	return;
}

int push(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; } 
	queue[tail] = d;
	tail++
	head = tail % QUEUESIZE;

	return 0;
}
int pop(int* pd)
{
	if (head == tail) { return -1; } 
	*pd = queue[head];
	queue[head] = 0; 
	head++;

	head = tail % QUEUESIZE;
	return 0;
}