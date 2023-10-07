#include <stdio.h>

void main()
{
    int k, x, sum = 0, countsum = 0, count = 0;
    scanf("%d", &k);
    while (1)
    {
        scanf("%d", &x);
        if(x == 0){
            break;
        }
        if (x > 0)
        {
            if (x % k == 0){
                countsum++;
                sum += x;
            }
                
        }

        count++;
    }
    printf("%d\n%d\n%d", count, countsum, sum);
}