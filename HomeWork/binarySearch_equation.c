#include <stdio.h>

int main()
{
    int len = 5;
    int arr[] = {2, 3, 4, 5, 7};

    int value = 11, found = 0, store;

    int start = 0, end = len - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int mult = 3 * arr[mid] + 5;
        if (mult == value)
        {
            store = arr[mid];
            found = 1;
            break;
        }
        else if (mult < value)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found == 1)
    {
        printf("The x value is %d", store);
    }
    else
    {
        printf("The x value is not found!");
    }

    return 0;
}