#include <stdio.h>


int fac(int n)
{
    if(n == 0)
    {
        return 1;
    }
   if(n == 1)
    {
        return 1;
    }
    return n * fac(n-1);
}
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    if(n < 0)
    {
        printf("For that , Factorial is not Exits!");
    }
    else{
        int res = fac(n);

        printf("The Factorial is : %d",res);
    }
    return 0;
}