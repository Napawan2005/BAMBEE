#include<stdio.h>

void main (){
    int input,i,j;
    scanf("%d",&input);
    for(i = 0 ; i < input ; i++){
        for(j = 0;j < input ; j++ ){
            if ( j  >= i){
                printf("%d",(input - i)%10);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}