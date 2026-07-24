#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "StartStartStart";
    int len = strlen(str);
    int flag = 0;
    int j = (len - 1) / 2 + 1;
    int cnt = 0, subindex = -1;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'S')
        {
            cnt++;
        }
    }
    if (cnt % 2 == 0)
    {
        for (int i = 0; i < len / 2; i++)
        {

            if (str[i] != str[j])
            {
                flag = 1;
                break;
            }
            else
            {
                j++;
                flag = 0;
            }
        }
    }
    else if (cnt % 2 == 1)
    {
        int k = (len - 1) / cnt + 1;
        for (int i = 0; i < (len / cnt); i++)
        {
            if (str[i] != str[k])
            {
                flag = 1;
                break;
            }
            else
            {
                k++;
                flag = 0;
            }
        }
    }

    if (flag == 0)
    {
        printf("The strig is repeated!");
    }
    else
    {
        printf("The string is not repeated!");
    }

    return 0;
}