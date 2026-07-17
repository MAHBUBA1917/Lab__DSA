#include <stdio.h>

int main()
{
    int n = 5;
    int arr[] = {1, 3, 4, 5, 6};

    int target = 11, found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("The number is found!");
    }
    else
    {
        printf("The number is not found!");
    }

    return 0;
}