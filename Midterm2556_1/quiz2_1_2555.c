#include <stdio.h>

void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if (x > y)
    {
        int change = x;
        x = y;
        y = change;
    }
    int number = x;
    while (number < y)
    {
        if (number % 4 == 0 || number % 7 == 0 )
        {
            printf ("%d\n",number);
            
        }
        number++;
        
    }
    
    
}