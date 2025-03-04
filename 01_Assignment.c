/*Convert Celsius to Fahrenheit unit using the following formula. Take the value of C as input
from user and calculate the value of F. F= C * (9/5) + 32 [You may not make changes like
adding/removing brackets in expression to get accurate result] */
#include <stdio.h>
int main()
{
    float F, C;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = C * (9.0 / 5) + 32;

    printf("Convert Celsius to Fahrenheit unit is %.2f", F);
    return 0;
}