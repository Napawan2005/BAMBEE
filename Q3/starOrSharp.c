#include<stdio.h>

void main (){
    int input,n;
    scanf("%d",&input);
    for(int i = 0 ; i < input ; i++){
        scanf("%d",&n);
        if (n%2 == 0)
        {
            for(int j = 0 ; j < n ; j++){
                printf("#");
            }
        }else{
            for(int j = 0 ; j < n ; j++){
                printf("*");
            }
        }
        
        printf("\n");
    }

}