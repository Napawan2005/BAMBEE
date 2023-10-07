#include <stdio.h>

void main()
{
    int input,i,j;
    while (1)
    {
        scanf("%d", &input);
        for (i = 0; i <= input; i++)
        {
            for (int j = 0; j <= input; j++)
            {
                if ((i > 0 )&& (i < input)&& (j > 0)&&(j<input))
                {
                    printf("  ");
                }
                
                else{
                    printf("* ");
                }

                
            }
            printf("\n");
            

        }
            
        }
    }


