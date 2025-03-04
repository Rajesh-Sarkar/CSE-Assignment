#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double a,b,c,sum=1.0;

    printf("Enter nth term: ");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {

        a=pow(i*i*i,2)+i;
        b=pow(i*i,i);
        c= a/b;
        sum+=c;

    }
    printf("The sum of the series up to %d terms is: %.6lf\n", n, sum);
    return 0;
}