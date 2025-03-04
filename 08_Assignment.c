//Write a program to compute the series using while loop statement: 5^2+9^2+15^2+23^2 +….+n^2

#include<stdio.h>
int main()
{
    int i=5,n,sum=0;
    int difference=4;

    printf("Enter n " );
    scanf("%d",&n);

    while(i<=n)
    {
        sum= sum+ (i*i);
        i=i + difference;
        difference = difference +2;

    }
    printf("The sum of the series is %d",sum);
    return 0;
}
