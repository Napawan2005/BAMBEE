#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, sum_credit = 0, sum_debit = 0, credit = 0, debit = 0;
    char much[10];
    while (1)
    {
        int input;
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        if (input > 0)
        {
            sum_debit += input;
            debit++;
        }
        else
        {
            sum_credit += input;
            credit++;
            
        }

        i++;
    }
    printf("%d %d\n", debit, credit);
    printf("%d\n%d\n", sum_debit, sum_credit);
    
    if (sum_credit < 0)
    {
        sum_credit = sum_credit * (-1);
    }

    if (sum_debit > sum_credit)
    {
        strcpy(much, "debit");
    }
    else if (sum_debit == sum_credit)
    {
        strcpy(much, "debit");
    }
    
    else
    {
        strcpy(much, "credit");
    }
    printf("%s", much);
}