#include <stdio.h>

void main()
{
    int row, col, loop;
    scanf("%d %d %d", &row, &col, &loop);
    if (row > col)
    {
        int change = row;
        row = col;
        col = change;
    }
    for (int i = row; i <= col; i++)
    {

        printf("%d: ",i);
        for (int j = 1; j <= loop; j++)
        {
            
            printf("%d ", i*j);
            

        }

        printf("\n");
    }
}