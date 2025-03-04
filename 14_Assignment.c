#include <stdio.h>

// Function to calculate LCM of two integers
void LCM(int a, int b)
 {
    int lcm = (a > b) ? a : b;
    while (1) 
    {
        if (lcm % a == 0 && lcm % b == 0) 
        {
            printf("LCM of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }
}

// Function to calculate GCD of two integers
void GCD(int a, int b)
 {
    while (b != 0)
    
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD of the numbers is: %d\n", a);
}

// Function to check if a number is a perfect number
void Perfect_Number(int num) 
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
     {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
    
    {
        printf("%d is a perfect number\n", num);
    } 
    
    else
    
    {
        printf("%d is not a perfect number\n", num);
    }
}

// Function to check if a number is a multiple of another
void check_Multiple() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0)
    
    {
        printf("%d is a multiple of %d\n", num1, num2);
    } 
    
    else 
    
    {
        printf("%d is not a multiple of %d\n", num1, num2);
    }
}

// Function to print factors of a number
void print_Factors()

{
    int num;
    printf("Enter a number to find its factors: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) 
    
    {
        if (num % i == 0) 
        
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to calculate the factorial of a number
void Factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", num, fact);
}

int main() 

{
    int choice, num1, num2;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. LCM of 2 integers\n");
        printf("2. GCD of 2 integers\n");
        printf("3. Perfect number\n");
        printf("4. Check if a number is a multiple of another\n");
        printf("5. Factors of a number\n");
        printf("6. Factorial of a number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        
        {
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                LCM(num1, num2);
                break;
            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                GCD(num1, num2);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num1);
                Perfect_Number(num1);
                break;
            case 4:
                check_Multiple();
                break;
            case 5:
                print_Factors();
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%d", &num1);
                Factorial(num1);
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
