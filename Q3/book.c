#include <stdio.h>

void main()
{
    int input;
    scanf("%d", &input);

    int tap = 0;
    int copy = input;
    int copy1 = input;
    int tap1 = 0;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i == 0 || i == input - 1 || j == 0 || j == input - 1 || i == tap && j == tap || j == copy - 1 || i == copy1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        tap++;
        copy--;
        printf("\n");
    }
}