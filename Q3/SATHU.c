#include <stdio.h>

void main()
{
    int i, j, input,
        mod = 0, sum = 0, mod10 = 0,
        sum10 = 0, summod9 = 0, summod10 = 0;
    scanf("%d", &input); // รับค่า

    for (i = 0; i < input; i++) // รูดหาค่า 9
    {

        mod10 = input % 10; // มอด 10 เพื่อเหลือเศษ 9
        summod10 += mod10;  // บวกเศษ
        mod = input % 9;    // เช้ดว่าหาร 9 ลงตัวไหม
        summod9 += mod;     // เศษที่หาร 9 ไม่ลงตัว
        input = input / 10; // หาทีและตัว
    }

    if (summod9 == 0) // ที่หาร 9 ลงตัว
    {
        printf("%d\n", summod10);//เศษรวมที่หาร 10 ลงตัว
        if (summod10 > 10)//เศษที่หาร 10 มากกว่า 10
        {
            for (j = 0; j < summod10; j++)
            {

                sum = summod10 % 10;//เพื่อให้หาเศษ
                sum10 += sum;
                summod10 = summod10 / 10;
                
            }
            printf("%d\n", sum10);
        }

        printf("SATHU");
    }
    else if (summod9 > 0)
    {
        printf("%d\n%d\nNo SATHU", summod10, summod9);
    }
}
