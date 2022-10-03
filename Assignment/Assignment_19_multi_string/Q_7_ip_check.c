#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[20];

    int token = 0, x;

    printf("enter the ip address: ");

    gets(str);

    char *a = strtok(str, ".");

    while (a != 0)

    {
        int x = atoi(a);

        token++;

        if (x >= 0 && x <= 255)

            a = strtok(NULL, ".");
    }

    if (token <= 4 )

        printf("valid ip address");

    else
        printf("not valid ip address");

    return 0;
}
