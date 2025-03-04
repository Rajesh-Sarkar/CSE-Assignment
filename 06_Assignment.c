/*Write a C program to find the sum of squares of all odd numbers between 1 and 126*/

#include<stdio.h>
int main()
{
    int m=1,n=126,i,sum=0;

    for(i=m;i<n;i=i+2)
    {
        sum= sum+ (i*i);
    }
    printf("The sum is %d\n",sum);
    return 0;
}

