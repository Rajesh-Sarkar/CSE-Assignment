/*Implement the following table using 1) if_else if
Age          Age group name
1-14         years Children
15-24        Early working age
25-54        Prime working age
55-64        Mature working age
65 and over  Elderly*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if ((age >= 1) && (age <= 14))
    {
        printf("Your age is %d and your age group name is Children", age);
    }

    else if ((age >= 15) && (age <= 24))
    {
        printf("Your age is %d and your age group name is Early working age", age);
    }

    else if ((age >= 25) && (age <= 54))
    {
        printf("Your age is %d and your age group name is Prime working age", age);
    }

    else if ((age >= 55) && (age <= 64))
    {
        printf("Your age is %d and your age group name is Mature working age", age);
    }

    else
    {
        printf("Your age is %d and your age group name is Elderly",age);
    }
    return 0;
}
