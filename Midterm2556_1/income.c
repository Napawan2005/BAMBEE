#include <stdio.h>

void main()
{
    int day, hours,
        h3 = 0,
        sum = 0,
        h2 = 1;
    scanf("%d", &day);

    for (int i = 0; i < day; i++)
    {
        scanf("%d", &hours);

        if (hours == 8)
        {
            sum += 300;
            
        }
        else if (hours > 3 && hours < 8)
        {
            sum += 150;
            
        }
        else if (hours < 4)
        {
            sum += 0;
            
            if (h3 < 4 )
            {
                h2++;

                if (h2 == 3)
                {
                    break;
                }else{
                    h2 = 0;
                }
            }
        }

        else if (hours < 12 && hours > 8)
        {
            hours = hours - 8;
            sum += 300 + (hours * 50);
            
        }
        else
        {

            sum += 500;
           
        }
        h3 = hours;
    }
    printf("%d", sum);
}
