#include <stdio.h>

void main (){
    int N,K;
    int i = 0, sum = 0, p = 100*K,date = 0, d = 0;
    scanf("%d %d",&N ,&K);

    while (i < N)
    {
        int x ;
        scanf("%d",x);
        sum += x;
        d = sum  p - 1;
        
        i++;

    }

    printf("%d",d);
    
    
    
}