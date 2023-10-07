#include <stdio.h>

void main(){
    int input,Thailand = 0 ,Taiwan = 0,Malaysia = 0, Finland =0,loop , i =0 ;
    scanf("%d",&loop);
    while (i < loop ){
        
        scanf("%d",&input);
        if (input ==1)
        {
           Thailand++; 
        }else if(input == 2){
            Taiwan++;
        }else if(input == 3){
            Malaysia++;
        }
        else if(input == 4){
            Finland++;
        }
        i++;

        
        
    }
    if ((Thailand >= Taiwan )&&(Thailand >= Malaysia)&&(Thailand >= Finland))
    {
        printf("Thailand won with a score of %d",Thailand);
    }else if((Taiwan >= Malaysia)&&(Taiwan >= Finland)){
        printf("Taiwan won with a score of %d",Taiwan);
    }else if(Malaysia >=  Finland){
        printf("Malatsia won with a score of %d",Malaysia);
    }else{
        printf("Finland won with a score of %d",Finland);
    }
    
}