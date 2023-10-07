#include <stdio.h>

void main()
{
    int input, i, j;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            if ((i == 1) || (i == input) || (j == 1) || (j == input)||(i > 2) && (i < input - 1) && (j > 2)&&(j < input -1))
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }
}
