#include <stdio.h>

void main (){
    int input;
    scanf("%d",&input);
    if (input > 0)
    {
       for (int i = 0; i < 13; i++)
        {
             printf("%d x %2d = %d\n",input,i,input*i);
        }
    
    }
    else{
        printf("Numder is out of range");
    }
    
    
    
    
    



}