#include<stdio.h>
main()
{
	int d[11] = { 10.15,18,23,28,35,47,55,68,78,96 };
	int low, mid, high, s;

	printf("�T���ls���� :");
	scanf("%d", &s);

	//�񕪒T��(�o�C�i���T�[�`)
	low = 0;
	high = 10;

	while (low <= high){
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����");
	}
	else {
		printf("�T���l%d��d[%d}�Ŕ����I\n", s, mid);
	}
}