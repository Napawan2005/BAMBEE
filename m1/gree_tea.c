#include <stdio.h>
#include<string.h>

int main() {
    int inputwater, inputgreentea, water, tea, remaining_water, can;
    char waterl[10];

    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &inputwater, &inputgreentea);
        
        water = inputwater / 250;
        tea = inputgreentea / 15;
        can = (water < tea) ? water : tea;
        
        remaining_water = inputwater - (can * 250);
        if (remaining_water > 0) {
            strcpy(waterl, "water");
        } else {
            strcpy(waterl, "");
        }
        
        printf("%d %s\n", can, waterl);
    }

    return 0;
}
