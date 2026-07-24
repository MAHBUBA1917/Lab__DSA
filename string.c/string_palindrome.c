#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "ABBAABBAc";
    int len = strlen(str);
    int flag = 0;
    int j = len - 1;
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        else
        {
            j--;
            flag = 0;
        }
    }

    if (flag == 0)
    {
        printf("The strig is palindrome!");
    }
    else
    {
        printf("The string is not palindrome!");
    }

    return 0;
}