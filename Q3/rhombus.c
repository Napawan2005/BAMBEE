#include <stdio.h>
void main(){
    int num,row,colum,space;
    int C_middle,R_middle;
    int C_cnt = 1;
    scanf("%d",&num);
    C_middle = (num/2)+1;
    R_middle = (num/2)+1;
    for(row=1;row<=R_middle;row++){
        for(space=1;space<C_middle;space++){
            printf(" ");
        }
            for(colum=1;colum<=C_cnt;colum++){
                printf("*");
            }
        C_middle--;
        C_cnt += 2;
        printf("\n");
    }
    C_cnt = num-1;
    C_middle++;
    for(row=1;row<=R_middle-1;row++){
        for(space=1;space<=C_middle;space++){
            printf(" ");
        }
            for(colum=1;colum<C_cnt;colum++){
                printf("*");
            }
        C_middle++;
        C_cnt -= 2;
        if(row==R_middle-1)break;
        printf("\n");
    }
}
