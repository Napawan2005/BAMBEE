#include <stdio.h>
#include <limits.h>

void main()
{
    int loop, input,
        sum = 0, max = INT_MIN, min = INT_MAX, i = 0,
        j, rowmax = 0, ag = 0, rowmin = 0;
    double total;
    while (1)
    {

        scanf("%d", &loop);

        if (loop <= 0)
        {

            break;
        }
        else
        {
            sum = 0;
            for (j = 0; j < loop; j++)
            {
                scanf("%d", &input);
                sum = sum + input;
                ag += input;
            }
        }
        printf("%d\n", sum);
        i++;

        if (sum >= max)
        {
            max = sum;
            rowmax = i;
        }
        if (sum <= min)
        {
            min = sum;
            rowmin = i;
        }
    }
    total = (double)ag / (double)i;
    printf("%d %d\n%d %d\n%.2f", rowmax, max, rowmin, min, total);
}