#include <stdio.h>

int main()
{
    int n, j, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        for (j = 1; j <= i; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");

        if (i + 1 <= n)
        {
            for (j = 2; j <= i + 1; j += 2)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}
