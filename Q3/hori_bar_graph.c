#include <stdio.h>

void main()
{
     int input, i = 0, j, s, spance;
     scanf("%d", &input);
     spance = input / 2;

     for (i; i <= input; i += 2)
     {
          for (j = 0; j < spance; j++)
          {
               printf(" ");
          }
          spance--;

          for (s = 0; s <= i; s++)
          {
               printf("*");
          }
          printf("\n");
     }
     spance = 0;
     // printf("%d",spance);
     for (i = 0; i <= input; i += 2)
     {
          for (j = 0; j <= spance; j++)
          {
               printf(" ");
          }
          spance++;
          for (s = input - 2; s > i; s--)
          {
               printf("*");
          }
          printf("\n");
     }
}