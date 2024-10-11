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
		printf("\n\n�G���L���[��i�A�f�L���[��o����͂���>");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�")
			scanf("%d", &data);
			result = enqueue(data);
			if (result = -1) {
				printf("\n�L���[�������ς��ł�\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�L���[����ł�\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}

	} while (key != 'e');

}

void display(void)
{
	int i;

	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("heqd[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("sp���w���Ă��鏊(����sp��%d)", sp);
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