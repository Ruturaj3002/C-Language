#include <stdio.h>
#include <string.h>

int alpha(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)

        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')

            return 1;
}

int main()
{
    // code
    char str[500];

    int check = 0;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    check = alpha(str);

    if (check == 1)

        printf("alpha");

    else

        printf("not");

    return 0;
}
