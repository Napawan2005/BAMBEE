#include <stdio.h>

void main() {
    int N, K;
        scanf("%d %d", &N, &K);
    int capacity1 = K;
    int capacity2 = K;
    for(int i = 1; i <= N; ++i) {
        int gender, score1, score2;
            scanf("%d %d %d", &gender, &score1, &score2);
        if(gender == 1 && score1 >= 9 && capacity1 > 0) {
            printf("%d 1\n", i);
            --capacity1;
        } else if(gender == 2 && score2 >= 9 && capacity2 > 0) 
        {
            printf("%d 2\n", i);
            --capacity2;
        } else if(score1 >= 9 && capacity1 > 0) {
            printf("%d 1\n", i);
            --capacity1;
        } else if(score2 >= 9 && capacity2 > 0) {
            printf("%d 2\n", i);
            --capacity2;
        }
        if(capacity1 == 0 && capacity2 == 0)
            break;
        }

}
