#include<stdio.h>

void main (){

    int x , y;
    scanf("%d %d",&x,&y);

    x= x+(y/400);
    y = y % 400;

    if (x == 0)
    {
        printf("%d w",y);
    }else if(y == 0){
        printf("%d r",x);
    }else{
        printf("%d r %d w",x,y);
    }
    
}