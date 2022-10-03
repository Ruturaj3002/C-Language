#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[5][30];

    int i, flag = 0;

    char str1[20];

    printf("enter the 5 string: ");

    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    printf("enter the word want to find in string: ");

    scanf("%s", str1);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(str1, str[i]) == 0)
        {
            printf("string found in row : %d  ", i + 1);

            flag = 1;

            break;
        }
    }
    if (flag == 1)

        printf("");

    else

        printf("not found");

    return 0;
}
