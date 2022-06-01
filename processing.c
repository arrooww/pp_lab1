#include <stdio.h>
#include <stdlib.h>
#include "typedef.h"

void debug()
{
    int neg, r, st;
    for (int i = 0; i < m; i++)
    {
        neg = array[i][0];
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] < 0)
            {
               neg = array[i][j];
               r = i;
               st = j;
            }
        }
        printf("negative = %2d ", neg);
        printf("(coordinats: [%d][%d])\n", r+1, st+1);
    }
    printf("\n");
}

void release()
{
    int neg, r, st;
    for (int i = 0; i < m; i++)
    {
        neg = array[i][0];
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] < 0)
            {
               neg = array[i][j];
               r = i;
               st = j;
            }
        }
        printf("%2d : [%d][%d]\n", neg, r+1, st+1);
    }
    printf("\n");
}
