#include<stdio.h>

void main (){
    int loop,i,j,x,y;
    scanf("%d",&loop);
    for(i = 0 ; i < loop ; i++){
        scanf("%d %d",&x,&y);
        if(x > y){
            int change = x;
            x = y;
            y = change;
        }
       for(j = x ; j <= y ; j++){
        printf("%d ",j);
       }
       printf("\n");
    }

}
