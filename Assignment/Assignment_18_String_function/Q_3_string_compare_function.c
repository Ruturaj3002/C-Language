#include <stdio.h>
#include <string.h>

void compare(char str[], char str1[])

{
    int i = 0;

    i = strcmp(str, str1);

    if (i == 0)

        printf("\nthe given string is same ");

    else

        printf("\nthe given string is different ");
}

int main()
{
    // code
    char str[500], str1[500];

    printf("\nenter the first string: ");

    fgets(str, 500, stdin);

    printf("\nenter second string: ");

    fgets(str1, 500, stdin);

    compare(str, str1);

    return 0;
}
