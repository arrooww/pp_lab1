#include <stdio.h>
#include <stdlib.h>
#include "typedef.h"
#include <time.h>

void random()
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = rand() % 20-10;
        }
    }
}

void keyboard()
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
}

void sorted()
{
    random();
    float k = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            array[i][j] = k;
            k--;
        }
    }
}
