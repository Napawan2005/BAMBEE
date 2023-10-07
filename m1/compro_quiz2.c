#include <stdio.h>

void main (){
    int x , y , loop_x1 = 0 , loop_x2 = 0,sumy1 = 0, sumy2 = 0 ;

    while (1)
    {
        scanf("%d",&x);
        if (x == 0)
        {
            break;
        }
        scanf("%d",&y);
        if(x == 1){
            loop_x1++;
            sumy1 += y;
        }
        if(x == 2){
            loop_x2++;
            sumy2 += y;
        }
        
        
    }
    printf("%d %d",loop_x1,loop_x2);
    printf("\n%d %d %d",sumy1,sumy2,sumy1 - sumy2);


}