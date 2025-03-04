#include <stdio.h>
int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    switch (age / 10)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        switch (age)
        {
        case 1 ... 14:
        {
            printf("Children\n");
            break;
        }
        case 15 ... 24:
        {
            printf("Early working age\n");
            break;
        }
        case 25 ... 54:
        {
            printf("Prime working age\n");
            break;
        }
        case 55 ... 64:
        {
            printf("Mature working age\n");
            break;
        }
        default:
        {
            printf("Elderly\n");
        }
        }
        break;
    default:
    {
        printf("Invalid age\n");
    }

        return 0;
    }
}
