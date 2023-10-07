#include <stdio.h>

void main (){
    int x,duplicate = 1,sum = 0;
    while (1)
    {
        scanf("%d",&x);
        if (duplicate == 3)
        {
            break;
        }
        if (x == 8)
        {
            sum =+ 300;
        }else if (x <= 4)
        {
            sum += 150;
        }
        else if(x > 8  ){
            x = 8 - x;
            
            if (x<= 12)
            {
                sum += 300 + 50 * x;
            }else{
                sum += 300 + 50* 4;
            }
            
        }else if (x < 4){
            sum += 0;
            duplicate++;

        }
         
        
        
    }
    printf("%d",sum);
    
}