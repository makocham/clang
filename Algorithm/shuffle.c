#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20];
	int i, work, target;

	//1�`20��z��ɏ����ݒ�
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	//�m�F�p�̕\��
    printf("\n-------------\n");
	for (i = 0; i < 20; i++)
	{
	     printf("data[%2d]=%2d\n", i, data[i]);
	}

	//�V���b�t��1
	//�ŏ���N�Ԗڂɂ���v�f���V���b�t���������N�Ԗڂɔz�u����Ă��܂����Ƃ�����
	srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	//�V���b�t��2
	srand(time(0));
	for (i = 19; i > 0; i--) {
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	//�m�F�p�̕\��
	printf("\n-------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}