#include <stdio.h>
#include <string.h>

int main()
{
    // code
    char str[10][20], temp[20];

    int i, j;

    printf("enter 10 city names: ");
    for (i = 0; i < 10; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("the sorted order is: ");

    for (i = 0; i < 10; i++)
    {
        printf(" %s \n", str[i]);
    }
    return 0;
}
