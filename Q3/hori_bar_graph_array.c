#include<stdio.h>

void main (){
    int n[100],i = 0,j,z;
    for( ; ;){
        
        scanf("%d",&n[i]);
        if (n[i] == 0)
        {
            break;
        }
        i++;
        
    }
    for ( j = 0; j < i; j++)
    {
        for ( z = 0; z < n[j]; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    


}