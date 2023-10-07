#include<stdio.h>
void main(){
    int N,
        NUnderweight=0,
        NNormal_weight=0,
        NOverweight=0,
        NObesity=0;
    float SumUnderweight=0,
          SumNormal_weight=0,
          SumOverweight=0,
          SumObesity=0;
    float weight, CM, M, BMI;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%f %f", &weight, &CM);
        M=CM/100;
        BMI=weight/(M*M);
        if (BMI<18.5){
            NUnderweight++;
            SumUnderweight+=weight;
        }else if (BMI<25){
            NNormal_weight++;
            SumNormal_weight+=weight;
        }else if (BMI<30){
            NOverweight++;
            SumOverweight+=weight;
        }else{
            NObesity++;
            SumObesity+=weight;
        }
    }
    float AveUnderweight=SumUnderweight/NUnderweight,
          AveNormal_weight=SumNormal_weight/NNormal_weight,
          AveOverweight=SumOverweight/NOverweight,
          AveObesity=SumObesity/NObesity,
          PercUnderweight=100.00*NUnderweight/N,
          PercNormal_weight=100.00*NNormal_weight/N,
          PercOverweight=100.00*NOverweight/N,
          PercObesity=100.00*NObesity/N;
    printf("Underweight %d %.2f %.2f%%\n", NUnderweight, AveUnderweight, PercUnderweight);
    printf("Normal weight %d %.2f %.2f%%\n", NNormal_weight, AveNormal_weight, PercNormal_weight);
    printf("Overweight %d %.2f %.2f%%\n", NOverweight, AveOverweight, PercOverweight);
    printf("Obesity %d %.2f %.2f%%\n", NObesity, AveObesity, PercObesity);
}