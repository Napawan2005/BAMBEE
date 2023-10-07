#include <stdio.h>
void main(){
    int x,con=0,max_con=1,show,prev;
    scanf("%d",&x);
    show = x;
    while(1){
        scanf("%d",&x);
        if(x==0) break;
        if(x==prev){
            con++;
            if(con>max_con){
                max_con = con;
                show = x;
            }
        }
        else con = 1;
        prev = x;
    }
    printf("%d\n%d",max_con,show);
}
