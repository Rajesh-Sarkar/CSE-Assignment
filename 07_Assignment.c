#include<stdio.h>
int main()
{
    int i=200;
    printf("The integers between 100 and 200 which are divisible by 8 are ");

    while(i>=100)
    {
        if(i%8==0)
        {

            printf("\n %d",i);
        }
        i--;


    }

    return 0;

}