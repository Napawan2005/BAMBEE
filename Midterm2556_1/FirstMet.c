#include <stdio.h>

int main()
{
    int x, y, input, first_XY = 0, number = 0, var = 0;
    scanf("%d %d", &x, &y);

    while (1)
    {
        scanf("%d", &input);

        if (input > 0)
        {
            if ((input % x == 0) && (input % y == 0))
            {
                first_XY = input;
                number = number + 1;
                var = 2;

                if (number == 1)
                {
                    printf("%d\n%d", first_XY, var);
                }
                break;
            }
            else if (input % x == 0)
            {
                first_XY = input;
                number++;
                var = 0;
                if (number == 1)
                {
                    printf("%d\n%d", first_XY, var);
                }
                break;
            }
            else if (input % y == 0)
            {
                first_XY = input;
                number++;
                var = 1;
                if (number == 1)
                {
                    printf("%d\n%d", first_XY, var);
                }
                break;
            }
        }
        else if (input < 0)
        {
            printf("%d",input);
            first_XY = input;
            break;
        }
    }

    return 0;
}
