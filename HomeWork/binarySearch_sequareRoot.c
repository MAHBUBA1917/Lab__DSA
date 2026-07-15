#include <stdio.h>

int main()
{
    int len = 5;
    int arr[] = {2, 3, 4, 5, 7};

    int value = 64, found = 0;

    int start = 0, end = len - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int mult = arr[mid] * arr[mid];
        if (mult == value)
        {
            found = 1;
            break;
        }
        else if (mult < value)
        {
            start= mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("NOT FOUND!!");
    }
    else
    {
        printf("found!");
    }

    return 0;
}