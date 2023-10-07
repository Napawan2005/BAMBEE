#include<stdio.h>

void main(){
    int after , input, c00 = 0 , c01 = 0 , c10 = 0 , c11 = 0;
    scanf("%d",&after);
    while (1)
    {
        scanf("%d",&input);
        
        if ((input > 1 )||(after > 1))
        {
            break;
        }
        else if((input < 0 )||(after < 0)){
            break;
        }
        if (after == 0)
        {
            if (input == 0)
            {
                c00++;
                
            }
            else if (input == 1)
            {
                c01++;
                
            }
            
        }else if (after == 1)
        {
            if (input == 0)
            {
                c10++;
                
            }else if (input == 1)
            {
                c11++;
               
            }
            
            
        }
        
        
        
        after = input;;
        
    }
    printf("%d\n%d\n%d\n%d",c00,c01,c10,c11);


    
}