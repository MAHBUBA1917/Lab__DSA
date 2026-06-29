#include <stdio.h>

int isPrime(int n,int i)
{

    if(n <= 1)
    {
        return 0;
    }
    if(i * i > n)
    {
        return 1;
    }
    if(n % i == 0)
    {
        return 0;
    }
    return isPrime(n, i+1);
}
int main()
{
    int n,i=2;
    printf("Enter:");
    scanf("%d",&n);

    if(isPrime(n,i)== 1)
    {
        printf("%d is prime number!",n );
    }
    else
    {
        printf("%d is not prime number!",n );
    }

    return 0;
}
