#include <stdio.h>

void main (){
    int row,col,count = 0;
    scanf("%d %d",&row,&col);
    for (int i = 1; i <= row; i++)
    {
        for(int j = 1 ; j <= col ; j++){
            count = count+1;
            printf("%d ",count);
        }
        printf("\n");
    }
    
}