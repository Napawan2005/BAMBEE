#include <stdio.h>

void main (){
    int N,sum = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        int input;
        scanf("%d",&input);
        if (input < 1)
        {
            printf("Not positive");
            break;

        }
        sum += input;
        
       
        
    }

    float total = sum / N;
    printf("%f",total);
    
}