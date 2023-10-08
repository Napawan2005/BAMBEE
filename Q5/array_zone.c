#include <stdio.h>

void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x][y];
    int sum[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = 0;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (i < x / 2)
        {
            for (int j = 0; j < y; j++)
            {
                if (j < y / 2)
                {
                    sum[0][0] += arr[i][j];
                }
                else
                {
                    sum[0][1] += arr[i][j];
                }
            }
        }
        if (i >= x / 2)
        {

            for (int j = 0; j < y; j++)
            {
                if (j < y / 2)
                {
                    sum[1][0] += arr[i][j];
                    
                }
                else
                {
                    sum[1][1] += arr[i][j];
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}