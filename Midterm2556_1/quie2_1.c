#include <stdio.h>

void main (){
    int account,input,sumexpenses = 0,sumincome = 0,expenses = 0 , income = 0 , i=0;
    while (1)
    {
        scanf("%d",&account);
        scanf("%d",&input);
        if (account == 0)
        {
            break;
        }
        else if (account == 1)
        {
            income++;
            sumincome+=input;
            
        }
        else if (account == 2){
            expenses++;
            sumexpenses+= input;
        }
        
    }
    printf("%d %d\n",income,expenses);
    printf("%d %d %d",sumincome,sumexpenses,sumincome - sumexpenses);
        
        
    
}
