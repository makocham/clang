#include <stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("���O�����:");
	gets(data.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);
	printf("���t�^�����:");
	scanf("%s", data.blood);
	printf("%s-- %d �N %d �� %d ���� ���t�^-%s�^\n",
		data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);
}