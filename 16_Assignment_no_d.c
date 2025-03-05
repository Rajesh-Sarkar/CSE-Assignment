#include <stdio.h>
int main()

{
    int i, j;
    char ch;
    for (i = 0; i < 5; i++)
    {
        ch = 'E' - i;
        for (j = 0; j < (5 - i); j++)

        {
            printf("%c ", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}
