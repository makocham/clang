#include<stdio.h>
main()
{
	int d[10] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;

	printf("�T���ls���� :");
	scanf("%d", &s);

	//���`�T���i���j�A�T�[�`�j
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}

	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d��d[%d}�Ŕ����I\n", s,i);
	}
}