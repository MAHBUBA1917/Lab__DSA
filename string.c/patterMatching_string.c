#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "Sylhet Engineering College, Sylhet";
    char substr[] = "llege";
    int len1 = strlen(str1);
    int len2 = strlen(substr);
    int flag = 0, j;
    for (int i = 0; i < len1 - len2; i++)
    {
        for (j = i; j < i + len2; j++)
        {
            flag = 1;
            if (str1[j] != substr[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("the string is exist!");
    }
    else
    {
        printf("the string is not exist!");
    }

    return 0;
}