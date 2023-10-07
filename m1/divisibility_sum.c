#include<stdio.h>

void main() {
    int x, y, input, sumx_y = 0, sumx = 0, sumy = 0;
    
    scanf("%d %d", &x, &y);
    
    while (1) {
        scanf("%d", &input);
        if (input < 1) {
            break;
        }
        
        if (input % x == 0 || input % y == 0) {
            sumx_y += input;
        }
        if (input % x == 0 && input % y > 0) {
            sumx += input;
        }
        if (input % y == 0 && input % x > 0) {
            sumy += input;
        }
    }
    
    printf("%d\n%d\n%d\n", sumx, sumy, sumx_y);
    
    
}
