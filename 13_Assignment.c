#include <stdio.h>
int findpalin(int num)

{
    int original = num, reversed = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return (original == reversed);
}

int main()

{
    int m, n, sum = 0;
    printf("Enter the range m : ");
    scanf("%d", &m);

    printf("Enter the range n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++)

    {
        if (findpalin(i))
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe sum of palindrome numbers between %d and %d is: %d\n", m, n, sum);

    return 0;
}
