#include <stdio.h>

int main()
{
    int K, K1, K2, S1, S2, G;
    scanf("%d %d %d %d %d %d", &K, &K1, &K2, &S1, &S2, &G);
    if (K1 < K && K2 < K)
    {
        if (S1 >= 9 && S2 >= 9)
        {
            printf("%d\n", G);
        }
        else if (S1 >= 9 && S2 < 9)
        {
            printf("1\n");
        }
        else if (S1 < 9 && S2 >= 9)
        {
            printf("2\n");
        }
        
    }
    else if (K1 >= K && K2 < K)
    {
        if (S1 >= 9 && S2 >= 9 && G == 1)
        {
            printf("2\n");
        }
        else if (S1 >= 9 && S2 >= 9 && G == 2)
        {
            printf("2\n");
        }
        else if (S1 >= 9 && S2 < 9 && G == 1)
        {
            printf("2\n");
        }
        else if (S1 >= 9 && S2 < 9 && G == 2)
        {
            printf("2\n");
        }
        else if (S1 < 9 && S2 >= 9 && G == 1)
        {
            printf("2\n");
        }
        else if (S1 < 9 && S2 >= 9 && G == 2)
        {
            printf("2\n");
        }
    }
    else if (K1 < K && K2 >= K)
    {
        if (S1 >= 9 && S2 >= 9 && G == 1)
        {
            printf("1\n");
        }
        else if (S1 >= 9 && S2 >= 9 && G == 2)
        {
            printf("1\n");
        }
        else if (S1 >= 9 && S2 < 9 && G == 1)
        {
            printf("1\n");
        }
        else if (S1 >= 9 && S2 < 9 && G == 2)
        {
            printf("1\n");
        }
        else if (S1 < 9 && S2 >= 9 && G == 1)
        {
            printf("1\n");
        }
        else if (S1 < 9 && S2 >= 9 && G == 2)
        {
            printf("1\n");
        }
    }else
    {
        printf("0\n");
    }
    return 0;
}
