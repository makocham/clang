#include <stdio.h>
main()
{
	char dummy[256];
	char *cp;

	printf("���������>");
	cp=gets(dummy);

	while (cp!= NULL) {
		printf("���͂��ꂽ�̂�\n",cp);
		printf("���������");
		cp = gets(dummy);
	}
}