#include <stdio.h>

int main()
{
    int n = 5;
    int arr[] = {2, 3, 4, 5, 6};
    int value = 0, found = 0;

    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == value)
        {
            found = 1;
            break;
        }
        else if (arr[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (found == 1)
    {
        printf("Found!");
    }
    else
    {
        printf("not found!");
    }

    return 0;
}