#include<stdio.h>
main()
{
	char o;

	printf("���Z�q����� :");
	scanf("%c", &o);
    
	switch (o)
	{
	    case "+":
			printf("���Z�ł�\n");
			 break;

		case "-":
		    printf("���Z�ł�\n");
			break;
	    
		case "*":
	        printf("��Z�ł�\n");
			break;
	    
		case "/":
			printf("���Z�ł�\n");
			break;

		case "%":
			printf("���܂�ł�\n");
			break;

		default:
			printf("���̑��ł�\n");
	}
}