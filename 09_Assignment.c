#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0.0;

    printf("Enter n terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (float)i / (i + 1);
        }
        else
        {
            sum += (float)i / (i + 1);
        }
    }

    printf("The sum of the following series is: %.3f\n", sum);
    return 0;
}
