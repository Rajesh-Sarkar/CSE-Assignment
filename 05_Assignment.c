// Write a program to find whether a character is uppercase or lower case alphabet, digit
// character or other symbol

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter anything: ");
    scanf("%c", &ch);

    if ((ch>='a') && (ch<='z'))
    {
        printf("%c is a lowercase alphabet", ch);
    }

    else if ((ch>='A') && (ch<='Z') )
    {
        printf("%c is a uppercase alphabet", ch);
    }

    else if ((ch >= '0') && ch <= '9')
    {
        printf("%c is a digit character ", ch);
    }

    else
    {
        printf("%c is a symbol ", ch);
    }
    return 0;
}