#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* �L���萔 -------------------------------------------------------------- */
#define SIZE 50000 // �e�X�g�p�f�[�^��
/* main�֐� �G���g���|�C���g -------------------------------------------- */
int main(void)
{
	int dat1[SIZE]; // �\�[�g�e�X�g�p�z��1
	int dat2[SIZE]; // �\�[�g�e�X�g�p�z��2
	int i, j, gap, w;
	clock_t t1_start, t1_end, t2_start, t2_end;
	// �e�X�g�f�[�^���쐬(2�̔z��ɓ����e�X�g�f�[�^��ݒ肷��)
	srand((unsigned)time(NULL)); // �����n��̏�����
	for (i = 0; i < SIZE; i++) {
		w = rand(); // �������擾(0~RAND_MAX)
		if (rand() % 2) {
			// �擾�������������̂܂ܐݒ�
			dat1[i] = w;
			dat2[i] = w;
		}
		else {
			// �擾�����������}�C�i�X�ɕϊ����Đݒ�
			dat1[i] = -w;
			dat2[i] = -w;
		}
	}
	// ��{�I��@�ɂ�鏸���\�[�g(���ȏ�P155~P156)
	t1_start = clock(); // �I���\�[�g�J�n���Ԏ擾
	for (i = 0; i < SIZE - 1; i++) {
		for (j = i + 1; j < SIZE; j++) {
			if (dat1[i] > dat1[j]) {
				w = dat1[i];
				dat1[i] = dat1[j];
				dat1[j] = w;
			}
		}
	}
	t1_end = clock(); // �I���\�[�g�I�����Ԏ擾
	// �V�F���\�[�g�ɂ�鏸���\�[�g(���ȏ�P161~P164)
	t2_start = clock(); // �V�F���\�[�g�J�n���Ԏ擾
	gap = SIZE / 2;
	while (gap > 0) {
		for (i = gap; i < SIZE; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				if (dat2[j + gap] < dat2[j]) {
					w = dat2[j];
					dat2[j] = dat2[j + gap];
					dat2[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap = gap / 2;
	}
	t2_end = clock(); // �V�F���\�[�g�I�����Ԏ擾

	// �����������ɐ���ς݂��`�F�b�N
	for (i = 0; i < SIZE - 1; i++) {
		if (dat1[i] > dat1[i + 1] ||
			dat1[i] != dat2[i] ||
			dat1[i + 1] != dat2[i + 1]) {
			printf("�G���[:�\�[�g�Ɏ��s���Ă��܂�\n");
			exit(1);
		}
	}
	// ���ʂ̕\��
	printf("�I���\�[�g�������� :%d�~���b\n\n", t1_end - t1_start);
	printf("�V�F���\�[�g��������:%d�~���b\n\n", t2_end - t2_start);
	printf("���s���x���u%.2f�v�{�ɉ��P���܂����B\n",
		(double)(t1_end - t1_start) / (t2_end - t2_start));
	return 0;
}