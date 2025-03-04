#include <stdio.h>

int check_Prime_Number(int n)
{
    if (n <= 1)

    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)

    {
        if (n % i == 0)

        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num, sum = 0;

    while (1)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        }

        if (num == 0 || num == 1)

        {
            continue;
        }

        if (check_Prime_Number(num))

        {
            printf("%d is Prime, add to sum\n", num);
            sum += num;
        }

        else

        {
            printf("%d Not prime\n", num);
        }
    }

    printf("The sum=%d\n", sum);

    return 0;
}
