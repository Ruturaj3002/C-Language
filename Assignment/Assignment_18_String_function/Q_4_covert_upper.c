#include <stdio.h>
#include <string.h>

void upper(char str[])

{

    strupr(str);

    printf("the upper case converted string is: %s \n", str);
}

int main()
{
    // code
    char str[500];

    printf("enter the string: ");

    fgets(str, 500, stdin);

    upper(str);

    return 0;
}
