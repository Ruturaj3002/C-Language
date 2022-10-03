#include <stdio.h>

#include <string.h>

int main()

{
    // code
    char str[500];
    char str1[500];

    int i;

    printf("enter first string: ");

    fgets(str, 500, stdin);

    for (i = 0; str[i] != '\0'; i++)

    {

        str1[i] = str[i];
    }

    printf("the the copy string is %s", str1);

    return 0;
}
