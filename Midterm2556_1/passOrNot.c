#include<stdio.h>

void main (){
    int g1,g2,g3,g4,n1,n2,n3,n4,i = 0;
    scanf("%d %d %d %d",&g1,&g2,&g3,&g4);
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    if (n1 >= g1)
    {
        printf("1 ");
        i++;
    }
    if (n2 >= g2)
    {
        printf("2 ");
        i++;
    }
    if (n3 >= g3)
    {
        printf("3 ");
        i++;
    }
    if (n4 >= g4)
    {
        printf("4");
        i++;
    }
    
    if (i == 0)
    {
        printf("0");
    }
    if (i > 2)
    {
        printf("\npass");
    }else
    {
        printf("\nfail");
    }
    
}