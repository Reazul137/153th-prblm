#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf(" Input number of terms : ");
    scanf("%d",&n);

    printf("\n The odd number are : ");
    for (i=1; i<=n; i++)
    {
        printf(" %d", 2*i-1);
        sum +=2*i-1;
    }
    printf("\n The sum of add Natural number upto %d  terms : %d \n",n,sum);

    return 0;
}
