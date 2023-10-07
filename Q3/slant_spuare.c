#include<stdio.h>

void main(){
    int input;
    scanf("%d",&input);
    for(int i = 0 ; i < input ; i++){
        if(i % 3 == 0){
            for(int s = 0; s < input ;s+=3){
                printf("*  ");
            }
        }else if(i % 3 == 1){
            for(int s = 0; s < input ; s+=3){
                printf(" * ");
            }
        }else{
            for(int s = 0 ; s < input ; s+=3){
                printf("  *");
            }
        }
        printf("\n");
    }
}