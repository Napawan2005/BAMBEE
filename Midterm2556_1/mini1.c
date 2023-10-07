#include <stdio.h>

void main()
{
    int a, b, g1, g2,
        sum_1 = 0,
        sum_2 = 0,
        sum_3 = 0,
        score_1 = 0,
        score_2 = 0,
        score_3 = 0,
        lost_1 = 0,
        lost_2 = 0,
        lost_3 = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d %d %d %d", &a, &b, &g1, &g2);

        if (a == 1)
        {
            if (b == 2)
            {
                if (g1 > g2)
                {
                    sum_1 += 3;
                    score_1 += g1;
                    lost_2 += g2;
                   
                }
                else if (a == b)
                {
                    sum_1, sum_2 += 1;
                    score_1, score_2 += g1;
                }
                else
                { //  g2 มากกว่า
                    sum_2 += 3;
                    score_2 += g1;
                    lost_1 += g2;
                   
                }
            }
            else // 3
            {
                if (g1 > g2)
                {
                    sum_1 += 3;
                    score_1 += g1;
                    lost_3 += g2;
                    
                }
                else if (a == b)
                {
                    sum_1, sum_3 += 1;
                    score_1, score_3 += g1;
                }
                else
                {
                    sum_3 += 3;
                    score_3 += g1;
                    lost_1 += g2;
                    
                }
            }
        }
        else if (a == 2)
        {
            if (b == 1)
            {
                if (g1 > g2)
                {
                    sum_2 += 3;
                    score_2 += g1;
                    lost_1 += g2;
                    
                }
                else if (a == b)
                {
                    sum_2, sum_1 += 1;
                    score_1, score_2 += g1;
                }
                else
                { // g2มากกว่า
                    sum_1 += 3;
                    score_1 += g1;
                    lost_2 += g2;
                    
                }
            }
            else // 3
            {
                if (g1 > g2)
                {
                    sum_2 += 3;
                    score_2 += g1;
                    lost_3 += g2;
                    
                }
                else if (a == b)
                {
                    sum_3, sum_2 += 1;
                    score_3, score_2 += g1;
                }
                else
                {
                    sum_3 += 3;
                    score_3 += g1;
                    lost_2 += g2;
                   
                }
            }
        }
        else if (a == 3)
        {
            if (b == 1)
            {
                if (g1 > g2)
                {
                    sum_3 += 3;
                    score_3 += g1;
                    
                    
                }
                else if (a == b)
                {
                    sum_1, sum_3 += 1;
                    score_1, score_3 += g1;
                }
                else
                { // g2มากกว่า
                    sum_1 += 3;
                    score_1 += g1;
                    lost_3 += g2;
                    
                }
            }
            else // 3
            {
                if (g1 > g2)
                {
                    sum_3 += 3;
                    score_3 += g1;
                    lost_2 += g2;
                   
                }
                else if (a == b)
                {
                    sum_3, sum_2 += 1;
                    score_3, score_2 += g1;
                }
                else
                {
                    sum_2 += 3;
                    score_2 += g1;
                    lost_3 += g2;
                    
                }
            }
        }
    }
    printf("%d %d %d\n", sum_1, score_1, lost_1);
    printf("%d %d %d\n", sum_2, score_2, lost_3);
    printf("%d %d %d\n", sum_3, score_3, lost_3);
}
