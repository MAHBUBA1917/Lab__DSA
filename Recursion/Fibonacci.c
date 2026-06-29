#include <stdio.h>

int fibo(int a,int b,int n)
{
    if(n == 0)
    {
        return 0;
    }
    
   printf("%d ",a);

   return fibo(a+b, a, --n);

}
int main()
{
    int n,a = 0, b = 1;

    printf("Enter the Number: ");
    scanf("%d",&n);

    fibo(a,b,n);

    return 0;
}