#include <stdio.h>

void main()
{
    int input;
    scanf("%d", &input);
    int copy = input / 2;
    for (int i = 0; i <= input / 2; i++)
    {
        for (int j = 0; j <= input / 2; j++)
        {
            if (j <= i)
            {
                printf("A");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < input / 2; i++)
    {
        for (int j = 0; j <= input / 2; j++)
        {
            if (j >= copy)
            {
                printf("*");
            }
            else
            {
                printf("A");
            }
            
        }
        copy--;
        printf("\n");
    }
}