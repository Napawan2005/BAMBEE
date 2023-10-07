#include <stdio.h>

void main()
{
    int x, y, loop = 0;
    scanf("%d %d", &x, &y);

    while (1)
    {
        int input;
        scanf("%d", &input);
        if (input < 0)
        {
            break;
        }

        if (x > y)
        {
            if (input <= x && input >= y)
            {
                loop++;
            }
            
        }else if(x < y){
            if (input >= x&& input <= y)
            {
                loop++;
            }
            
        }
    }
        printf("%d", loop);
} 