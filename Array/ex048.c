#include<stdio.h>
main()
{
	int ap[2][2][3] = {
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}}
	};
	int gokei, i, j, k;

	gokei = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				gokei += ap[i][j][k];
			}
		}
	}

	printf("‘S‘Ì‚Å%dlZ‚ñ‚Å‚¢‚Ü‚·\n", gokei);
}