#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[5][20];
    int i;

    printf("enter 5 email address: ");

    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    printf("this is not valid email address(odd email): ");

    for (i = 0; i < 5; i++)
    {
        if (strchr(str[i], '@') == 0)
        {
            printf(" %s", str[i]);
        }
    }

    return 0;
}
