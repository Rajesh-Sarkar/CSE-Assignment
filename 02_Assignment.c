#include <stdio.h>

int main()
{
    int age;
    char ch;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 59)
    {
        printf("Enter status: ");
        scanf(" %c", &ch);

        if (ch == 'W' || ch == 'w')
        {
            printf("Working senior\n");
        }
        else

        {
            printf("Retired senior\n");
        }
    }
    else

    {
        if (age > 20)

        {
            printf("Adult\n");
        }
        else
        {
            if (age > 12)

            {
                printf("Teen\n");
            }

            else

            {
                printf("Child\n");
            }
        }
    }

    return 0;
}
