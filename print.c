#include <stdio.h>
#include "typedef.h"

void print()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %3d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
