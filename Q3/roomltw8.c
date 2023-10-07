#include <stdio.h>
#include<limits.h>
void main(){
    int i , j, input , after = 0 ,max = INT_MIN,sum = 0,count = 0;
    while(1){
        scanf("%d",&input);
        if (input < 0)
        {
            break;
        }
        count++;
        
        if(input > max){
            max = input;
        }

        sum = max - input;
        for ( i = 0; i < max; i++)
        {
            for ( j = 0; j < count; j++)
            {
                if (sum > i)
                {
                    
                    printf(" ");
                }else{
                    printf("*");
                }
                
            }
            printf("\n");
            
        }
        


       
    }
}