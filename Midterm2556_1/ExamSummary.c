#include <stdio.h>

void main (){
    int g1,g2,g3,g4,loop,n1,n2,n3,n4,count = 0,loop1 = 0 , loop2 = 0 , loop3 = 0 , loop4 = 0, pass = 0;
    scanf("%d %d %d %d",&g1,&g2,&g3,&g4);
    scanf("%d",&loop);
    for ( int i= 0 ; i < loop; i++)
    {
        scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
        if (n1 >= g1)
        {
            count++;
            loop1 ++;
        }
        if (n2 >= g2)
        {
            count++;
            loop2 ++;
        }
        if (n3 >= g3)
        {
            count++;
            loop3 ++;
        }if (n4 >= g4)
        {
            count++;
            loop4 ++;
        }
        if (count > 2)
        {
            printf("pass\n");
            pass++;
        }
        else if (count < 3)
        {
             printf("fail\n");
        }
        count = 0 ;
        
    }
    printf("\n%d\n",pass);
    printf("%d %d %d %d",loop1,loop2,loop3,loop4);
    
}