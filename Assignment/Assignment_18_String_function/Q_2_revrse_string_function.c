#include <stdio.h>
#include <string.h>
void reverse(char str[])

{

    strrev(str);

    printf("the reverse string is: %s", str);
}

int main()
{
    // code
    char str[500];

    printf("enter the string: ");

    fgets(str, 500, stdin);

    reverse(str);

    return 0;
}
