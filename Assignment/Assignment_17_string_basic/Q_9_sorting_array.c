#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[500], t;

    int i, j, l;
    l = strlen(str) - 1;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    for (i = 1; i < l; i++)

    {

        for (j = 0; i < l - 1; j++)
        {
            if (str[j] > str[j + 1])

                t = str[j];

            str[j] = str[j + 1];

            str[j + 1] = t;
        }
    }

    printf("%s", str);

    return 0;
}
