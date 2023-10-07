#include <stdio.h>
#include <limits.h>

void main(){
    int input , max = INT_MIN , min = INT_MAX , count = 0;
    while (1)
    {
        scanf("%d",&input);
        if (input < 1){
            break;
        }
        if (input % 2 == 1)
        {
            if (input > max)
            {
                max = input;
            }if (input < min)
            {
                min = input;
            }
            count++;
        }
    }
    printf("%d\n%d\n%d",max,min,max-min);
}
