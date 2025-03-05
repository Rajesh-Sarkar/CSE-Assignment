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
