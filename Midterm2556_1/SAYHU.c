#include <stdio.h>

void main()
{
    int input, i = 0, sum = 0, sum1 = 0,sathu = 0,sathu2 = 0;
    scanf("%d", &input);
    sum = input % 10;
    printf("%d\n",sum);
    sum1 = input / 10;
    printf("%d\n",sum1);
    while (1)
    {
        printf("%d ",sum);
        printf("%d ",sum1);
        if (sum == 9)
        {
            printf("SATHU ");
        }
        if(sum1 == 0){
        break;
       }
        i++;
        sum = sum1%10;
        sum1 = sum1/10;
    }
}