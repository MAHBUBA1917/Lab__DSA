#include <stdio.h>

int fac(int n)
{
    int i, fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int combination(int n, int r)
{
    return fac(n) / fac(r) * fac(n - r);
}
int main()
{
    int a, b;

    printf("Enter two numbers for Combination: ");
    scanf("%d %d", &a, &b);
    fac(a);
    printf("%d", combination(a, b));

    return 0;
}