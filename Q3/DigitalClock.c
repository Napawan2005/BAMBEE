#include<stdio.h>

void main (){
    int i , j , hour1 , hour2 , min1 , min2  ;
    scanf("%d %d %d %d",&hour1,&min1,&hour2,&min2);
    for( i = hour1 ;i <= hour2 ; i++){
        if(hour2 > hour1){// ้hour 1 ต้องน้อยกว่า hour 2 เท่านั้น
            for(j = min1 ; j <= 59 ; j++){ //min 1 แทนใน j เผื่อให้เริ่มต้น เท่ากับที่กำหนดค่าของ min 1 ไว้
                printf("%d:%02d\n",i,min1);//ที่แทนเพราะว่าเวลา i เพิ่มแล้ว ตัวของ j มันจะเท่ากับ min 1 เหมือนเดิมเช่น min 1 เดิมเป็น 4  แล้วเวลา  i เพิ่มค่า มันจะเริ่มค่าที่ 4 เหมือนเดิม
                min1++;
            }
            min1=0;
            hour1++;
            
        }else if(hour1 == hour2){
            for(j = min1 ; j <= min2 ; j++){
                printf("%d:%02d",i,j);
            }
        }
    }
}