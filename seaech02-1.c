#include<stdio.h>
main()
{
	int d[10] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;

	for (i = 0; i < 10; i++)

	printf("�T���ls���� :");
	scanf("%d", &s);

	d[10] = s;
	i = 0;
	
	while(s!=d[i]) {
		i++;
	}


	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d��d[%d}�Ŕ����I\n", s, i);
	}
}