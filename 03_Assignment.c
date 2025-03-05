#include <stdio.h>

double calculate_Tax(double salary)
{
    double base_Tax, percentage, min_Salary;

    if (salary >= 0 && salary <= 14999.99)

    {
        base_Tax = 0.0;
        percentage = 15;
        min_Salary = 0;
    }
    else if (salary >= 15000 && salary <= 29999.99)

    {
        base_Tax = 2250.00;
        percentage = 18;
        min_Salary = 15000;
    }
    else if (salary >= 30000 && salary <= 49999.99)
    {
        base_Tax = 5400.00;
        percentage = 22;
        min_Salary = 30000;
    }
    else if (salary >= 50000 && salary <= 79999.99)
    {
        base_Tax = 11000.00;
        percentage = 27;
        min_Salary = 50000;
    }
    else if (salary >= 80000 && salary <= 150000.00)
    {
        base_Tax = 21600.00;
        percentage = 33;
        min_Salary = 80000;
    }
    else

    {
        printf("Invalid salary range.\n");
        return -1;
    }
    double tax = base_Tax + (percentage / 100.0) * (salary - min_Salary);
    return tax;
}

int main()
{
    double salary, tax;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    tax = calculate_Tax(salary);

    if (tax != -1)

    {
        printf("Your calculated tax is: %.2lf\n", tax);
    }

    return 0;
}
