#include<stdio.h>
main()
{
	int no, n1, n2;
	printf("‰‰Zq‚ğ“ü—Í :");
	scanf("%d", &no);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í :");
	scanf("%d,%d", &n1, &n2);
	if (no == 1) {
		printf("%d", n1 + n2);
	}
	else {
		if (no == 2) {
			printf("%d", n1 - n2);
		}	
		else {
			if (no == 3) {
				printf("%d", n1 * n2);
			}
			else {
				if (no == 4) {
					printf("%d", n1 / n2);
				}
				else {

				}
			}
		}
	   
	}
}