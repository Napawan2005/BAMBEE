#include <stdio.h>
#include <limits.h>

void main()
{
    int k, n, input, after = 0,
         max = INT_MIN, MAX = 0, count = 0;
    scanf("%d %d", &k, &n);
   
    for (int i = 1; i <= n; i++)
    {
        while (1)
        {
            scanf("%d", &input);
            if (input == 0)
            {
                break;
            }
            if (input > 0)
            {
                if (input % k == 0)
                {
                    count++;
                    
                }
            }
            if (count >= max)
            {
                max = count;
                MAX = i;
            }
            

            
        }
        
        
        count = 0 ;
        
    }
    
    printf("%d %d", MAX,max);
}