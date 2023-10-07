#include<stdio.h>

void main (){
    int mu1,ans1,ans2,mu2,i,j, cans1;
    scanf("%d %d %d %d",&mu1,&ans1,&mu2,&ans2);
    cans1 = ans1;
    for(i = mu1; i <= mu2 ; i++){
        if(mu2 > mu1){
            for(j = cans1 ; j <= ans2 ; j++ ){
                printf("%d x %d = %d\n",mu1,j,i*j);
                
                
            }
            cans1 = 1;
            mu1++;
        }else if(mu1 == mu2){
            for(j = 1 ; j <= ans1; j++){
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
    }
}