#include <stdio.h>

void main()
{
     int n,Underweight_count = 0, 
     Normal_weight_count = 0,
      Overweight_count = 0, 
      Obesity_count = 0;
     float w, h, bmi, Overweight_sum = 0,
     Underweight_sum = 0, 
     Normal_weight_sum = 0,
     Obesity_sum = 0, 
     Normal_weighta = 0,
     Underweighta = 0, 
     Overweighta = 0,
     Obesitya = 0, 
     Underweightp = 0,
     Normal_weightp = 0, 
     Overweightp = 0,
     Obesityap = 0;
     scanf("%d", &n);
     float n1 = n;
     for (int i = 0; i < n; i++)
     {
          scanf("%f %f", &w, &h);
          h = h / 100;
          bmi = w / (h * h);

          if (bmi < 18.5)
          {
               Underweight_count++;
               Underweight_sum += w;
          }
          else if (bmi < 25)
          {
               Normal_weight_count++;
               Normal_weight_sum += w;
          }
          else if (bmi < 30)
          {
               Overweight_count++;
               Overweight_sum += w;
          }
          else
          {
               Obesity_count++;
               Obesity_sum += w;
          }
     }
     Underweighta = Underweight_sum /
                    Underweight_count;

     Normal_weighta = Normal_weight_sum /
                      Normal_weight_count;

     Overweighta = Overweight_sum /
                   Overweight_count;

     Obesitya = Obesity_sum / Obesity_count;

     Underweightp = (Underweight_count / n1) * 100;
     
     Normal_weightp = (Normal_weight_count / n1) *
                      100;
     Overweightp = (Overweight_count / n1) * 100;

     Obesityap = (Obesity_count / n1) * 100;


     printf("Underweight %d %.2f %.2f%%\n", Underweight_count, Underweighta, Underweightp);
     printf("Normal weight%d %.2f %.2f%%\n", Normal_weight_count, Normal_weighta, Normal_weightp);
     printf("Overweight %d %.2f %.2f%%\n", Overweight_count, Overweighta, Overweightp);
     printf("Obesity %d %.2f %.2f%%\n", Obesity_count, Obesitya, Obesityap);
}