#include<stdio.h>
main()
{
	int o;

	printf("��������� :");
	scanf("%d",&o);

	if (o >= 10 && o <= 49) {
		switch (o/10)
		{
		    case 1:
				printf("10�_��ł�\n");
				break;

		    case 2:
				printf("20�_��ł�\n");
				break;

		    case 3:
			    printf("30�_��ł�\n");
				break;


			case 4:
				printf("40�_��ł�\n");
				break;

		}
	}
	else 
	{
		printf("�G���[ : 10�`49�͈̔͂���͂��Ă�������\n");
	}
}