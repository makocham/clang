#include<stdio.h>
main(){
	int h, m, s;

	printf("�b������� :");
	scanf("%d", &s);

	if (s <= 5000) {
		if (s >= 0) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d ���� %d �� %d �b�ł�\n", h, m, s);
		}
		else {
			printf("�}�C�i�X�G���[");
		}

	}
	else {
		printf("�G���[");
	}
}
		
	