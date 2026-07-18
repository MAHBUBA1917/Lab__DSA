#include <stdio.h>

int  fac(int n)
{
    int i,fac = 1;
    for(int i =1; i<=n; i++)
    {
        fac *= i;
    }
    return fac;
}

int permutation(int n, int r)
{
    return fac(n)/fac(n-r);
}
int main()
{
    int a,b;

    printf("Enter two numbers for Permutation: ");
    scanf("%d %d",&a,&b);
    fac(a);
    printf("\n%d",permutation(a,b));

    return 0;
}