#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[2][20];
    int i;
    printf("enter 2 strings: ");

    for (i = 0; i < 2; i++)
    {
        gets(str[i]);
    }

    printf("the string contains: \n");
    for (i = 0; i < 2; i++)
    {
        printf("%s ", str[i]);
    }
    return 0;
}
