#include <stdio.h>
int Palindrome(int num)

{
    int original = num, reversed = 0, remainder;
    while (num != 0)

    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main()

{
    int n, count = 0, num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (count < n)
    {
        if (Palindrome(num))

        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\nThe %dth palindrome number is: %d\n", n, num - 1);
    return 0;
}
