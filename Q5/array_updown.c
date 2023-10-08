#include <stdio.h>
void main()
{
    int input, j = 0;
    scanf("%d", &input);
    int arr[input][input];
    int tap = 1;
    int up = input - 1, sum_up = 0;
    int down = 0, sum_down = 0;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < tap; j++)
        {
            if(i == j){   
            }else{
                sum_down += arr[i][j];
            }
            
        }
        if (up < input)
        {
            for (int j = tap; j <= up ; j++)
            {
               
                sum_up += arr[i][j];
            }
        }
        tap++;      
    }
    printf("%d\n%d", sum_up,sum_down);
}