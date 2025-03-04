#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, remainder, sum;

    for (num = 1; num <= 500; num++)
    {
        i = num;
        sum=0;

        while (i != 0)

        {
            remainder = i % 10;
            sum += remainder * remainder * remainder;
            i /= 10;
        }

        if (sum == num)

        {
            printf("All Armstrong numbers between 1 and 500 are %d\n ", num);
        }
    }

    return 0;
}
