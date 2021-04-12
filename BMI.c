#include <stdio.h>

int main()
{
  float H; height in meter
  float W; weoght in kilogram
  float BMI;
  
    printf("Please enter your Weight: ");
    scanf("%f", &W);
  
    printf("Please enter your Height (in meter): ");
    scanf("%f", &H);
  
    BMI = W / (H * H);
  
    printf("Your BMI Index is: %f", BMI);
}
