#include <stdio.h>

int main() {
    int K, N;
    scanf("%d", &K);
    scanf("%d", &N);

    int orders[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &orders[i]);
    }

    // การตัดเสื้อที่สามารถทำได้ต่อวัน
    int work_per_day = K * 100;

    // วน loop หาวันที่เสร็จสิ้นของแต่ละคำสั่ง
    int current_day = 1;
    int current_work_per_day = work_per_day;

    for (int i = 0; i < N; i++) {
        int order = orders[i];
        while (order > 0) {
            // หากสามารถทำคำสั่งนี้ในวันเดียวได้
            if (order <= current_work_per_day) {
                printf("%d\n", current_day);
                current_work_per_day -= order;
                order = 0;
            }
            // หากต้องการเวลาหลายวัน
            else {
                order -= current_work_per_day;
                current_day++;
                current_work_per_day = work_per_day;
            }
        }
    }
    return 0;
}
