#include <stdio.h>

#include <string.h>

int main()

{
    // code
    char str[1000], t;

    int i = 0, j = strlen(str) - 1;

    printf("enter the string: ");

    fgets(str, 1000, stdin);

    while (i <= j)

    {
        t = str[i];

        str[i] = str[j];

        str[j] = t;

        i++;

        j--;
    }

    printf("%s", str);

    return 0;
}
