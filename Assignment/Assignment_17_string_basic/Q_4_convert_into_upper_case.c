#include <stdio.h>

#include <string.h>

int main()
{
    // code
    char str[500];
    int i;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    for (i = 0; str[i] != '\0'; i++)

    {

        if (str[i] >= 'a' && str[i] <= 'z')

            str[i] = str[i] - 32;
    }

    printf("\nthe converted upper case string is: %s", str);

    printf("\n");

    return 0;
}
