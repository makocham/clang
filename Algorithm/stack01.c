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
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂���>");
		key = getche();
		printf("\n");

		if (key == 'i') {
			scanf("%d", &data);
			result = push(data);
			if (result = -1) {
				printf("\n�X�^�b�N�������ς��ł�\n");
			}else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n�X�^�b�N����ł�\n");
			}else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}

	} while (key != 'e');

}

void display(void)
{
	int i;

	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("sp���w���Ă��鏊(����sp��%d)", sp);
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
