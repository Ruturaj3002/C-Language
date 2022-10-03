#include <stdio.h>
#include <string.h>

void lower(char str[])
{
    strlwr(str);

    printf("the lower letters string is: %s \n", str);
}

int main()
{
    // code
    char str[500];

    printf("the the capital letters string: ");

    fgets(str, 500, stdin);

    lower(str);

    return 0;
}
