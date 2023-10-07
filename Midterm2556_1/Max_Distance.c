#include<stdio.h>
#include<limits.h>

int main(){
    int max = INT_MIN,difference = 0;
    while (1)
    {
        int x , y;
        scanf("%d %d",&x,&y);
        if (x == 0 && y == 0)
        {
            break;
        }
        difference = x - y ;
        if (difference < 0)
        {
           difference = difference * (-1);
        }

        if (difference > max)
        {
            max = difference;
        }
    }
    printf("%d",max);
    return 0 ;
}