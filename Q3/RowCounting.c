#include <stdio.h>
#include <limits.h>

void main()
{
    int x, y, max = INT_MIN,
        summax = 0, input,count = 0,
        after = 0,countmax = 0,maxi = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < y; i++)
    {
        for (int j = 0;; j++)
        {
            scanf("%d", &input);
            if (input == 0)
            {
                break;
            }
            if (input % x == 0)
            {
                count++;
            }
            if (after = input)
            {
                countmax++;
                if(countmax > max){
                    max =  countmax;
                    maxi = i;

                }

            }
            
            after = input;
            
        }
    }
    printf("%d %d",maxi,count);
}