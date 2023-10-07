#include<stdio.h>

void main (){
    int x , y , number;
    int intermadiate = 0 , greater_value = 0 , less_value =0;
    scanf("%d %d",&x,&y);
    while (1)
    {
        scanf("%d",&number);
        if (number == 0)
        {
            break;
        }
        if ((number < x && number > y)||(number > x && number < y))
        {
            intermadiate++;
        }
        if (number < x && number < y)
        {
            greater_value++;
        }
        if (number > y && number > x)
        {
            less_value++;
        }

    }
    printf("%d\n",intermadiate);
    printf("%d\n",greater_value);
    printf("%d",less_value);
}