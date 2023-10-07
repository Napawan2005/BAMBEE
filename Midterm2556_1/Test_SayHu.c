#include <stdio.h>

void main()
{
    int input, mod, sum, mod9 = 0, i = 0;
    scanf("%d", &input);
    mod = input % 10;
    sum = input / 10;
    while (1)
    {
        if (mod == 9)
        {
            printf("SATHU ");
            mod9++;
        }

        if (sum == 0)
        {
            break;
        }

        mod = sum % 10;
        sum = sum / 10;
    }
    if (mod9 == 0)
    {
        printf("Hope to find SATHU next time");
    }    
    if (mod9 >= 9)
        {
            printf("OHH! Serious SATHU");
        }
    
}