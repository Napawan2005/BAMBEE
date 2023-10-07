#include <stdio.h>

int main() {
    int x, y;
    int between_count = 0; // จำนวนตัวที่อยู่ระหว่าง x และ y
    int less_than_count = 0; // จำนวนตัวที่น้อยกว่า x และ y
    int greater_than_count = 0; // จำนวนตัวที่มากกว่า x และ y
    int num;

    // รับค่า x และ y
    printf("Enter two distinct integers x and y: ");
    scanf("%d %d", &x, &y);

    // รับตัวเลขจากผู้ใช้และตรวจสอบเงื่อนไข
    printf("Enter integers (end with 0):\n");

    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }

        if ((num > x && num < y) || (num < x && num > y)) {
            between_count++;
        }

        if (num < x && num < y) {
            less_than_count++;
        }

        if (num > x && num > y) {
            greater_than_count++;
        }
    }

    // แสดงผลลัพธ์
    printf("Number of values between x and y: %d\n", between_count);
    printf("Number of values less than x and y: %d\n", less_than_count);
    printf("Number of values greater than x and y: %d\n", greater_than_count);

    return 0;
}
