#include<stdio.h>
#include<string.h>

void main (){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        char output[10];
        scanf("%d %d %d",&x,&y,&z);

        if (x == y && y == z)
        {
            strcpy(output,"xyz\n");
        }else if (x==y)
        {
            strcpy(output,"xy\n");
        }
        else if (x == z)
        {
            strcpy(output,"xz\n");
        }
        
        else if(y == z){
            strcpy(output,"yz\n");
        }
        else if (x > y && x> z)
        {
            strcpy(output,"x\n");
        }
        else if (y > x && y > z)
        {
            strcpy(output,"y\n");
        }
        else if(z > x && z > y){
            strcpy(output,"z\n");
        }

        printf("%s",output);
    }
    


}