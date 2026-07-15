#include <stdio.h>

int sum(int n)
{
    
    if(n==0)
    {
        return n;
    }
    return n+sum(n-1);
}
int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);
    if(n < 0){
        printf("Invalid for this Question!!");
    }
    else{
    int result = sum(n);

    printf("The Summation is : %d",result);
    }
    return 0;
}